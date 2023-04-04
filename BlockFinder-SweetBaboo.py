import multiprocessing
import tkinter as tk
from tkinter import filedialog
from litemapy import Schematic
from multiprocessing import Manager, Pool
import numpy as np
from sklearn.cluster import DBSCAN
import time

BLOCK_PREFIX = "minecraft:"


def browse_file():
    file_path = filedialog.askopenfilename(title="Select a Litematica file",
                                           filetypes=[("Litematica files", "*.litematic")])
    return file_path


def load_file_via_gui():
    root = tk.Tk()
    f = browse_file()
    root.destroy()
    return f


def get_black_listed_blocks_from_user():
    problems = ["chest", "spawner", "obsidian", "crying_obsidian", "sponge", "ender_chest",
                "furnace", "sculk_sensor", "sculk_catalyst", "sculk_shrieker", "reinforced_deepslate"]

    # display the default list of blocks to search for
    print("The default list of unmovable blocks consists of:")
    for item in problems:
        print(f"\t{item}")

    if input("Do you want to search for custom blocks? yes/no ").lower() == "yes":
        print("Enter blocks one at a time without the \'minecraft:\' tag. i.e. skulk_sensor")
        while True:
            i = input()
            if i != "":
                problems.append(i)
            else:
                break

    blb = []
    for _ in problems:
        blb.append(BLOCK_PREFIX + _)

    return blb


def find_unmovable_blocks(palette, block_pos, black_listed_blocks, shared_list, start_x):
    for x, x_slice in enumerate(block_pos):
        for y, y_slice in enumerate(x_slice):
            for z, z_slice in enumerate(y_slice):
                if z_slice != 0:
                    block_id = palette[z_slice]
                    if block_id in black_listed_blocks:
                        shared_list.append((block_id, (x + start_x, y, z)))


def cluster_obsidian(shared_list):
    obsidian_points = []
    all_other_points = []
    for item in shared_list:
        if item[0] == "minecraft:obsidian":
            obsidian_points.append(item[1])
        else:
            all_other_points.append(item)

    if len(obsidian_points) == 0:
        return shared_list
    obsidian_clusters = cluster_points(obsidian_points)
    for cluster in obsidian_clusters:
        all_other_points.append(("minecraft:obsidian", tuple(cluster[len(cluster) // 2])))

    return all_other_points


def cluster_points(points, eps=16, min_samples=1):
    # Convert list of tuples to numpy array
    X = np.array(points)

    # Initialize DBSCAN clustering algorithm with specified parameters
    clustering = DBSCAN(eps=eps, min_samples=min_samples)

    # Fit the clustering algorithm to the data
    clustering.fit(X)

    # Get the labels assigned to each point by the clustering algorithm
    labels = clustering.labels_

    # Get the unique labels (excluding the noise label -1)
    unique_labels = set(labels) - {-1}

    # Initialize list to hold clusters
    clusters = []

    # Iterate over unique labels and get the points in each cluster
    for label in unique_labels:
        cluster = X[labels == label]
        clusters.append(cluster.tolist())

    # Return list of clusters
    return clusters


def get_origin():
    x = int(input("Enter the smallest X coordinate of the area selection: "))
    y = int(input("Enter the smallest Y coordinate of the area selection: "))
    z = int(input("Enter the smallest Z coordinate of the area selection: "))
    return x, y, z


def get_map():
    m = ""
    while m != "v" and m != "x":
        m = input("Voxelmap or Xaero's map? (v/x) ")
    return m


if __name__ == "__main__":
    start = time.perf_counter()
    # get the file
    file = load_file_via_gui()

    # get the list of blocks to search for
    black_listed_blocks = get_black_listed_blocks_from_user()

    # create our process pool safe list
    manager = Manager()
    shared_list = manager.list()

    # get origin from user
    origin_x, origin_y, origin_z = get_origin()

    # ask the user which map they're using
    map = get_map()

    # load the file and warn the user
    print("Loading file... this might take a few minutes")
    load_start = time.perf_counter()
    schem = Schematic.load(file)
    load_end = time.perf_counter()

    region = list(schem.regions.values())[0]

    # get the blocks and the positions
    palette = region._Region__palette
    block_pos = region._Region__blocks

    # determine how many processes to create
    num_cores = multiprocessing.cpu_count()

    # split our lists for multiprocessing
    sublists = np.array_split(block_pos, num_cores)

    # reformat the palette list so that it's pickleable
    palette_start = time.perf_counter()
    palette = [i.blockid for i in palette]  # TODO: TIME THIS TO SEE HOW SLOW IT IS
    palette_end = time.perf_counter()

    # this is used to tell the process where in the region it is for proper waypoint coordinates
    start_x = 0

    # create our process pool and notify the user
    print("Processing started...")
    pool_start = time.perf_counter()
    with Pool(processes=num_cores) as pool:
        for sub_list in sublists:
            pool.apply_async(find_unmovable_blocks, (palette, sub_list, black_listed_blocks, shared_list, start_x))
            start_x += len(sub_list)
        # wait for the processes to finish
        pool.close()
        pool.join()
    pool_end = time.perf_counter()
    # cluster the obsidian using DBSCAN
    cluster_start = time.perf_counter()
    shared_list = cluster_obsidian(shared_list)
    cluster_end = time.perf_counter()

    # create the list of waypoints
    waypoints = ""
    if map == "x":
        waypoints = "#\n#waypoint:name:initials:x:y:z:color:disabled:type:set:rotate_on_tp:tp_yaw:visibility_type\n#"
        for i, point in enumerate(shared_list):
            waypoints += f"\nwaypoint:{point[0].split(':')[1]}{i}:S:{origin_x + point[1][0]}:{origin_y + point[1][1]}:{origin_z + point[1][2]}:13:false:0:gui.xaero_default:false:0:0"
    else:
        for i, point in enumerate(shared_list):
            waypoints += f"\nname:{point[0].split(':')[1]}{i},x:{origin_x + point[1][0]},z:{origin_z + point[1][2]},y:{origin_y + point[1][1]},enabled:true,red:1.0,green:1.0,blue:1.0,suffix:,world:,dimensions:overworld#"

    # save the file
    r = tk.Tk()
    file_path = filedialog.asksaveasfilename(defaultextension=".txt",
                                             filetypes=[("Text Files", "*.txt"), ("All Files", "*.*")])

    # Create the file in the selected location
    with open(file_path, "w") as file:
        file.write(waypoints)

    # close the popup window
    r.destroy()
    print(f"File saved to {file_path}")

    end = time.perf_counter()
    print(f"Total elapsed time: {end - start:.4f} seconds")
    print(f"Load time: {load_end - load_start:.4f} seconds")
    # print(f"Palette time: {palette_end - palette_start:.4f} seconds")
    print(f"Process time: {pool_end - pool_start:.4f} seconds")
    # print(f"Cluster time: {cluster_end - cluster_start:.4f} seconds")
