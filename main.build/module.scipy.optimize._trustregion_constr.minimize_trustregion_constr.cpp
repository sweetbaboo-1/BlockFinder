/* Generated code for Python module 'scipy.optimize._trustregion_constr.minimize_trustregion_constr'
 * created by Nuitka version 1.5.3
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr;
PyDictObject *moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[196];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[196];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("scipy.optimize._trustregion_constr.minimize_trustregion_constr"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 196; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_trustregion_constr$minimize_trustregion_constr(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 196; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_29cd51e4be138d3bdf3bd61ddeb22ab4;
static PyCodeObject *codeobj_ad37623dfe5800de5533b17728d57827;
static PyCodeObject *codeobj_3cf5c2bc2b52300a04c0994c52301710;
static PyCodeObject *codeobj_422b02cd57a901010efbe98c01a98e38;
static PyCodeObject *codeobj_6ec778184b6d94c055893f5af7595a54;
static PyCodeObject *codeobj_ff9a914aa39e512fceca92513996ce6f;
static PyCodeObject *codeobj_5a37431745645646d9d6bca914925a83;
static PyCodeObject *codeobj_9f3f756e05e20d31be3cf035706e30a3;
static PyCodeObject *codeobj_703116c317d2a41243ca933a86877bc8;
static PyCodeObject *codeobj_985a60f85f2f56368db7ad98ab833903;
static PyCodeObject *codeobj_12e368ef90c7953dade9c74e668b910e;
static PyCodeObject *codeobj_3544f967bf85c12180f755efac3324c1;
static PyCodeObject *codeobj_46060ccef3cf735a83fa2c64944f7421;
static PyCodeObject *codeobj_06254ba35d7cdd62d1a4b28775954c89;
static PyCodeObject *codeobj_3c42a0de9bb99ffbe885a467022295c7;
static PyCodeObject *codeobj_cbf6ae8213539defe7ffd1bc197b0816;
static PyCodeObject *codeobj_a93519f8493eb675fafbaefcc4a383ab;
static PyCodeObject *codeobj_96939949491db2e8ee1a902783a28ff6;
static PyCodeObject *codeobj_0942ca93772a2bc16522e6bad6f6fc31;
static PyCodeObject *codeobj_d33556b7d9307da29c217fb2abfe490f;
static PyCodeObject *codeobj_8442f930a471fe10ef9cc3c7d7994986;
static PyCodeObject *codeobj_bdb28a94af68716e499105f3835709f8;
static PyCodeObject *codeobj_b87fb9868bec726da46018053dec948a;
static PyCodeObject *codeobj_fc90ddae13dc631dd8d0e00f27bfaa45;
static PyCodeObject *codeobj_1e8b817d80c2de7dfa429985e83ee653;
static PyCodeObject *codeobj_5acfb0f73130641cb1618d40a14ccb7b;
static PyCodeObject *codeobj_d5f1807db4fb5aafcdebc2758e53e89e;
static PyCodeObject *codeobj_ab926333e624b4fcb943106e0d932925;
static PyCodeObject *codeobj_2d8a0eec9e161411ff364676f73b8a10;
static PyCodeObject *codeobj_64058bf8f4ec03346cf0ff882f076937;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[170]); CHECK_OBJECT(module_filename_obj);
    codeobj_29cd51e4be138d3bdf3bd61ddeb22ab4 = MAKE_CODE_OBJECT(module_filename_obj, 345, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[115], mod_consts[115], mod_consts[171], NULL, 1, 0, 0);
    codeobj_ad37623dfe5800de5533b17728d57827 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[173], NULL, 1, 0, 0);
    codeobj_3cf5c2bc2b52300a04c0994c52301710 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[173], NULL, 1, 0, 0);
    codeobj_422b02cd57a901010efbe98c01a98e38 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[173], NULL, 1, 0, 0);
    codeobj_6ec778184b6d94c055893f5af7595a54 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[173], NULL, 1, 0, 0);
    codeobj_ff9a914aa39e512fceca92513996ce6f = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[173], NULL, 1, 0, 0);
    codeobj_5a37431745645646d9d6bca914925a83 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[173], NULL, 1, 0, 0);
    codeobj_9f3f756e05e20d31be3cf035706e30a3 = MAKE_CODE_OBJECT(module_filename_obj, 365, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[173], NULL, 1, 0, 0);
    codeobj_703116c317d2a41243ca933a86877bc8 = MAKE_CODE_OBJECT(module_filename_obj, 391, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[173], NULL, 1, 0, 0);
    codeobj_985a60f85f2f56368db7ad98ab833903 = MAKE_CODE_OBJECT(module_filename_obj, 392, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[173], NULL, 1, 0, 0);
    codeobj_12e368ef90c7953dade9c74e668b910e = MAKE_CODE_OBJECT(module_filename_obj, 393, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[173], NULL, 1, 0, 0);
    codeobj_3544f967bf85c12180f755efac3324c1 = MAKE_CODE_OBJECT(module_filename_obj, 394, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[173], NULL, 1, 0, 0);
    codeobj_46060ccef3cf735a83fa2c64944f7421 = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[173], NULL, 1, 0, 0);
    codeobj_06254ba35d7cdd62d1a4b28775954c89 = MAKE_CODE_OBJECT(module_filename_obj, 396, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[173], NULL, 1, 0, 0);
    codeobj_3c42a0de9bb99ffbe885a467022295c7 = MAKE_CODE_OBJECT(module_filename_obj, 340, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[174], NULL, 1, 0, 0);
    codeobj_cbf6ae8213539defe7ffd1bc197b0816 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[175], mod_consts[175], NULL, NULL, 0, 0, 0);
    codeobj_a93519f8493eb675fafbaefcc4a383ab = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[176], NULL, 0, 0, 0);
    codeobj_96939949491db2e8ee1a902783a28ff6 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[161], mod_consts[161], mod_consts[177], NULL, 2, 0, 0);
    codeobj_0942ca93772a2bc16522e6bad6f6fc31 = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], mod_consts[161], mod_consts[178], NULL, 4, 0, 0);
    codeobj_d33556b7d9307da29c217fb2abfe490f = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], mod_consts[159], mod_consts[179], NULL, 3, 0, 0);
    codeobj_8442f930a471fe10ef9cc3c7d7994986 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], mod_consts[159], mod_consts[180], NULL, 4, 0, 0);
    codeobj_bdb28a94af68716e499105f3835709f8 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[169], mod_consts[169], mod_consts[181], NULL, 22, 0, 0);
    codeobj_b87fb9868bec726da46018053dec948a = MAKE_CODE_OBJECT(module_filename_obj, 490, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[100], mod_consts[100], mod_consts[182], mod_consts[183], 1, 0, 0);
    codeobj_fc90ddae13dc631dd8d0e00f27bfaa45 = MAKE_CODE_OBJECT(module_filename_obj, 495, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[102], mod_consts[102], mod_consts[184], mod_consts[183], 1, 0, 0);
    codeobj_1e8b817d80c2de7dfa429985e83ee653 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[2], mod_consts[185], mod_consts[186], 1, 0, 0);
    codeobj_5acfb0f73130641cb1618d40a14ccb7b = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[2], mod_consts[187], mod_consts[188], 1, 0, 0);
    codeobj_d5f1807db4fb5aafcdebc2758e53e89e = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[92], mod_consts[92], mod_consts[189], mod_consts[190], 8, 0, 0);
    codeobj_ab926333e624b4fcb943106e0d932925 = MAKE_CODE_OBJECT(module_filename_obj, 441, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[92], mod_consts[92], mod_consts[191], mod_consts[192], 8, 0, 0);
    codeobj_2d8a0eec9e161411ff364676f73b8a10 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[127], mod_consts[127], mod_consts[193], NULL, 11, 0, 0);
    codeobj_64058bf8f4ec03346cf0ff882f076937 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[194], NULL, 9, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_pos_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__1___init__();


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__2___call__();


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__2___call__$$$function__1_matvec(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__3___init__();


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__4___call__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__4___call__$$$function__1_matvec(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__5_update_state_sqp();


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__6_update_state_ip();


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__1_stop_criteria(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__2_stop_criteria(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__3_fun_and_constr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__4_grad_and_jac(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_hessp = python_pars[1];
    PyObject *par_n = python_pars[2];
    struct Nuitka_FrameObject *frame_d33556b7d9307da29c217fb2abfe490f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d33556b7d9307da29c217fb2abfe490f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d33556b7d9307da29c217fb2abfe490f)) {
        Py_XDECREF(cache_frame_d33556b7d9307da29c217fb2abfe490f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d33556b7d9307da29c217fb2abfe490f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d33556b7d9307da29c217fb2abfe490f = MAKE_FUNCTION_FRAME(codeobj_d33556b7d9307da29c217fb2abfe490f, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d33556b7d9307da29c217fb2abfe490f->m_type_description == NULL);
    frame_d33556b7d9307da29c217fb2abfe490f = cache_frame_d33556b7d9307da29c217fb2abfe490f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d33556b7d9307da29c217fb2abfe490f);
    assert(Py_REFCNT(frame_d33556b7d9307da29c217fb2abfe490f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_hessp);
        tmp_assattr_value_1 = par_hessp;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_n);
        tmp_assattr_value_2 = par_n;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d33556b7d9307da29c217fb2abfe490f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d33556b7d9307da29c217fb2abfe490f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d33556b7d9307da29c217fb2abfe490f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d33556b7d9307da29c217fb2abfe490f,
        type_description_1,
        par_self,
        par_hessp,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_d33556b7d9307da29c217fb2abfe490f == cache_frame_d33556b7d9307da29c217fb2abfe490f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d33556b7d9307da29c217fb2abfe490f);
        cache_frame_d33556b7d9307da29c217fb2abfe490f = NULL;
    }

    assertFrameObject(frame_d33556b7d9307da29c217fb2abfe490f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_hessp);
    Py_DECREF(par_hessp);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_hessp);
    Py_DECREF(par_hessp);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__2___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_x = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[2]);
    PyObject *var_matvec = NULL;
    struct Nuitka_FrameObject *frame_96939949491db2e8ee1a902783a28ff6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_96939949491db2e8ee1a902783a28ff6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_args;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_x;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_1 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__2___call__$$$function__1_matvec(tmp_closure_1);

        assert(var_matvec == NULL);
        var_matvec = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_96939949491db2e8ee1a902783a28ff6)) {
        Py_XDECREF(cache_frame_96939949491db2e8ee1a902783a28ff6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96939949491db2e8ee1a902783a28ff6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96939949491db2e8ee1a902783a28ff6 = MAKE_FUNCTION_FRAME(codeobj_96939949491db2e8ee1a902783a28ff6, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96939949491db2e8ee1a902783a28ff6->m_type_description == NULL);
    frame_96939949491db2e8ee1a902783a28ff6 = cache_frame_96939949491db2e8ee1a902783a28ff6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_96939949491db2e8ee1a902783a28ff6);
    assert(Py_REFCNT(frame_96939949491db2e8ee1a902783a28ff6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(Nuitka_Cell_GET(par_self));
            tmp_expression_value_2 = Nuitka_Cell_GET(par_self);
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "ccco";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        CHECK_OBJECT(var_matvec);
        tmp_kw_call_dict_value_0_1 = var_matvec;
        frame_96939949491db2e8ee1a902783a28ff6->m_frame.f_lineno = 35;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[5]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_96939949491db2e8ee1a902783a28ff6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96939949491db2e8ee1a902783a28ff6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96939949491db2e8ee1a902783a28ff6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96939949491db2e8ee1a902783a28ff6,
        type_description_1,
        par_self,
        par_x,
        par_args,
        var_matvec
    );


    // Release cached frame if used for exception.
    if (frame_96939949491db2e8ee1a902783a28ff6 == cache_frame_96939949491db2e8ee1a902783a28ff6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96939949491db2e8ee1a902783a28ff6);
        cache_frame_96939949491db2e8ee1a902783a28ff6 = NULL;
    }

    assertFrameObject(frame_96939949491db2e8ee1a902783a28ff6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_matvec);
    Py_DECREF(var_matvec);
    var_matvec = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_matvec);
    Py_DECREF(var_matvec);
    var_matvec = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__2___call__$$$function__1_matvec(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[0];
    struct Nuitka_FrameObject *frame_5acfb0f73130641cb1618d40a14ccb7b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5acfb0f73130641cb1618d40a14ccb7b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5acfb0f73130641cb1618d40a14ccb7b)) {
        Py_XDECREF(cache_frame_5acfb0f73130641cb1618d40a14ccb7b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5acfb0f73130641cb1618d40a14ccb7b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5acfb0f73130641cb1618d40a14ccb7b = MAKE_FUNCTION_FRAME(codeobj_5acfb0f73130641cb1618d40a14ccb7b, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5acfb0f73130641cb1618d40a14ccb7b->m_type_description == NULL);
    frame_5acfb0f73130641cb1618d40a14ccb7b = cache_frame_5acfb0f73130641cb1618d40a14ccb7b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5acfb0f73130641cb1618d40a14ccb7b);
    assert(Py_REFCNT(frame_5acfb0f73130641cb1618d40a14ccb7b) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 33;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 33;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_p);
        tmp_tuple_element_1 = par_p;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 33;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(self->m_closure[0]);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__10_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5acfb0f73130641cb1618d40a14ccb7b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5acfb0f73130641cb1618d40a14ccb7b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5acfb0f73130641cb1618d40a14ccb7b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5acfb0f73130641cb1618d40a14ccb7b,
        type_description_1,
        par_p,
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_5acfb0f73130641cb1618d40a14ccb7b == cache_frame_5acfb0f73130641cb1618d40a14ccb7b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5acfb0f73130641cb1618d40a14ccb7b);
        cache_frame_5acfb0f73130641cb1618d40a14ccb7b = NULL;
    }

    assertFrameObject(frame_5acfb0f73130641cb1618d40a14ccb7b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__3___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_n = python_pars[1];
    PyObject *par_objective_hess = python_pars[2];
    PyObject *par_constraints_hess = python_pars[3];
    struct Nuitka_FrameObject *frame_8442f930a471fe10ef9cc3c7d7994986;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8442f930a471fe10ef9cc3c7d7994986 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8442f930a471fe10ef9cc3c7d7994986)) {
        Py_XDECREF(cache_frame_8442f930a471fe10ef9cc3c7d7994986);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8442f930a471fe10ef9cc3c7d7994986 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8442f930a471fe10ef9cc3c7d7994986 = MAKE_FUNCTION_FRAME(codeobj_8442f930a471fe10ef9cc3c7d7994986, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8442f930a471fe10ef9cc3c7d7994986->m_type_description == NULL);
    frame_8442f930a471fe10ef9cc3c7d7994986 = cache_frame_8442f930a471fe10ef9cc3c7d7994986;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8442f930a471fe10ef9cc3c7d7994986);
    assert(Py_REFCNT(frame_8442f930a471fe10ef9cc3c7d7994986) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_n);
        tmp_assattr_value_1 = par_n;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_objective_hess);
        tmp_assattr_value_2 = par_objective_hess;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[9], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_constraints_hess);
        tmp_assattr_value_3 = par_constraints_hess;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[10], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8442f930a471fe10ef9cc3c7d7994986, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8442f930a471fe10ef9cc3c7d7994986->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8442f930a471fe10ef9cc3c7d7994986, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8442f930a471fe10ef9cc3c7d7994986,
        type_description_1,
        par_self,
        par_n,
        par_objective_hess,
        par_constraints_hess
    );


    // Release cached frame if used for exception.
    if (frame_8442f930a471fe10ef9cc3c7d7994986 == cache_frame_8442f930a471fe10ef9cc3c7d7994986) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8442f930a471fe10ef9cc3c7d7994986);
        cache_frame_8442f930a471fe10ef9cc3c7d7994986 = NULL;
    }

    assertFrameObject(frame_8442f930a471fe10ef9cc3c7d7994986);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_objective_hess);
    Py_DECREF(par_objective_hess);
    CHECK_OBJECT(par_constraints_hess);
    Py_DECREF(par_constraints_hess);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_objective_hess);
    Py_DECREF(par_objective_hess);
    CHECK_OBJECT(par_constraints_hess);
    Py_DECREF(par_constraints_hess);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__4___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_v_eq = python_pars[2];
    PyObject *par_v_ineq = python_pars[3];
    struct Nuitka_CellObject *var_H_objective = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_H_constraints = Nuitka_Cell_Empty();
    PyObject *var_matvec = NULL;
    struct Nuitka_FrameObject *frame_0942ca93772a2bc16522e6bad6f6fc31;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0942ca93772a2bc16522e6bad6f6fc31 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0942ca93772a2bc16522e6bad6f6fc31)) {
        Py_XDECREF(cache_frame_0942ca93772a2bc16522e6bad6f6fc31);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0942ca93772a2bc16522e6bad6f6fc31 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0942ca93772a2bc16522e6bad6f6fc31 = MAKE_FUNCTION_FRAME(codeobj_0942ca93772a2bc16522e6bad6f6fc31, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0942ca93772a2bc16522e6bad6f6fc31->m_type_description == NULL);
    frame_0942ca93772a2bc16522e6bad6f6fc31 = cache_frame_0942ca93772a2bc16522e6bad6f6fc31;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0942ca93772a2bc16522e6bad6f6fc31);
    assert(Py_REFCNT(frame_0942ca93772a2bc16522e6bad6f6fc31) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_0942ca93772a2bc16522e6bad6f6fc31->m_frame.f_lineno = 50;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[9], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooocco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_H_objective) == NULL);
        PyCell_SET(var_H_objective, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        CHECK_OBJECT(par_v_eq);
        tmp_args_element_value_3 = par_v_eq;
        CHECK_OBJECT(par_v_ineq);
        tmp_args_element_value_4 = par_v_ineq;
        frame_0942ca93772a2bc16522e6bad6f6fc31->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_2,
                mod_consts[10],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooocco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_H_constraints) == NULL);
        PyCell_SET(var_H_constraints, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = var_H_constraints;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_H_objective;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_3 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__4___call__$$$function__1_matvec(tmp_closure_1);

        assert(var_matvec == NULL);
        var_matvec = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooocco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooocco";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM(tmp_args_element_value_5, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_1 = "oooocco";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_5, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_args_element_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        CHECK_OBJECT(var_matvec);
        tmp_args_element_value_6 = var_matvec;
        frame_0942ca93772a2bc16522e6bad6f6fc31->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooocco";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0942ca93772a2bc16522e6bad6f6fc31, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0942ca93772a2bc16522e6bad6f6fc31->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0942ca93772a2bc16522e6bad6f6fc31, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0942ca93772a2bc16522e6bad6f6fc31,
        type_description_1,
        par_self,
        par_x,
        par_v_eq,
        par_v_ineq,
        var_H_objective,
        var_H_constraints,
        var_matvec
    );


    // Release cached frame if used for exception.
    if (frame_0942ca93772a2bc16522e6bad6f6fc31 == cache_frame_0942ca93772a2bc16522e6bad6f6fc31) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0942ca93772a2bc16522e6bad6f6fc31);
        cache_frame_0942ca93772a2bc16522e6bad6f6fc31 = NULL;
    }

    assertFrameObject(frame_0942ca93772a2bc16522e6bad6f6fc31);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_H_objective);
    Py_DECREF(var_H_objective);
    var_H_objective = NULL;
    CHECK_OBJECT(var_H_constraints);
    Py_DECREF(var_H_constraints);
    var_H_constraints = NULL;
    CHECK_OBJECT(var_matvec);
    Py_DECREF(var_matvec);
    var_matvec = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_H_objective);
    Py_DECREF(var_H_objective);
    var_H_objective = NULL;
    CHECK_OBJECT(var_H_constraints);
    Py_DECREF(var_H_constraints);
    var_H_constraints = NULL;
    Py_XDECREF(var_matvec);
    var_matvec = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__4___call__$$$function__1_matvec(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[0];
    struct Nuitka_FrameObject *frame_1e8b817d80c2de7dfa429985e83ee653;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1e8b817d80c2de7dfa429985e83ee653 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1e8b817d80c2de7dfa429985e83ee653)) {
        Py_XDECREF(cache_frame_1e8b817d80c2de7dfa429985e83ee653);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e8b817d80c2de7dfa429985e83ee653 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e8b817d80c2de7dfa429985e83ee653 = MAKE_FUNCTION_FRAME(codeobj_1e8b817d80c2de7dfa429985e83ee653, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e8b817d80c2de7dfa429985e83ee653->m_type_description == NULL);
    frame_1e8b817d80c2de7dfa429985e83ee653 = cache_frame_1e8b817d80c2de7dfa429985e83ee653;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1e8b817d80c2de7dfa429985e83ee653);
    assert(Py_REFCNT(frame_1e8b817d80c2de7dfa429985e83ee653) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_p);
        tmp_args_element_value_1 = par_p;
        frame_1e8b817d80c2de7dfa429985e83ee653->m_frame.f_lineno = 54;
        tmp_add_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[13], tmp_args_element_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_add_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_p);
        tmp_args_element_value_2 = par_p;
        frame_1e8b817d80c2de7dfa429985e83ee653->m_frame.f_lineno = 54;
        tmp_add_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[13], tmp_args_element_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 54;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e8b817d80c2de7dfa429985e83ee653, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e8b817d80c2de7dfa429985e83ee653->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e8b817d80c2de7dfa429985e83ee653, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e8b817d80c2de7dfa429985e83ee653,
        type_description_1,
        par_p,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1e8b817d80c2de7dfa429985e83ee653 == cache_frame_1e8b817d80c2de7dfa429985e83ee653) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e8b817d80c2de7dfa429985e83ee653);
        cache_frame_1e8b817d80c2de7dfa429985e83ee653 = NULL;
    }

    assertFrameObject(frame_1e8b817d80c2de7dfa429985e83ee653);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__5_update_state_sqp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_state = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_last_iteration_failed = python_pars[2];
    PyObject *par_objective = python_pars[3];
    PyObject *par_prepared_constraints = python_pars[4];
    PyObject *par_start_time = python_pars[5];
    PyObject *par_tr_radius = python_pars[6];
    PyObject *par_constr_penalty = python_pars[7];
    PyObject *par_cg_info = python_pars[8];
    PyObject *var_c = NULL;
    PyObject *var_i = NULL;
    PyObject *var_lb = NULL;
    PyObject *var_ub = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *outline_1_var_c = NULL;
    PyObject *outline_2_var_c = NULL;
    PyObject *outline_3_var_c = NULL;
    PyObject *outline_4_var_c = NULL;
    PyObject *outline_5_var_c = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_inplace_assign_2__value = NULL;
    PyObject *tmp_inplace_assign_3__value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_listcomp_4__$0 = NULL;
    PyObject *tmp_listcomp_4__contraction = NULL;
    PyObject *tmp_listcomp_4__iter_value_0 = NULL;
    PyObject *tmp_listcomp_5__$0 = NULL;
    PyObject *tmp_listcomp_5__contraction = NULL;
    PyObject *tmp_listcomp_5__iter_value_0 = NULL;
    PyObject *tmp_listcomp_6__$0 = NULL;
    PyObject *tmp_listcomp_6__contraction = NULL;
    PyObject *tmp_listcomp_6__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_64058bf8f4ec03346cf0ff882f076937;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_FrameObject *frame_ad37623dfe5800de5533b17728d57827_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_ad37623dfe5800de5533b17728d57827_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_FrameObject *frame_3cf5c2bc2b52300a04c0994c52301710_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_3cf5c2bc2b52300a04c0994c52301710_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_FrameObject *frame_422b02cd57a901010efbe98c01a98e38_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_422b02cd57a901010efbe98c01a98e38_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_FrameObject *frame_6ec778184b6d94c055893f5af7595a54_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_6ec778184b6d94c055893f5af7595a54_5 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_FrameObject *frame_ff9a914aa39e512fceca92513996ce6f_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_ff9a914aa39e512fceca92513996ce6f_6 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    struct Nuitka_FrameObject *frame_5a37431745645646d9d6bca914925a83_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    static struct Nuitka_FrameObject *cache_frame_5a37431745645646d9d6bca914925a83_7 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_64058bf8f4ec03346cf0ff882f076937 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_64058bf8f4ec03346cf0ff882f076937)) {
        Py_XDECREF(cache_frame_64058bf8f4ec03346cf0ff882f076937);

#if _DEBUG_REFCOUNTS
        if (cache_frame_64058bf8f4ec03346cf0ff882f076937 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_64058bf8f4ec03346cf0ff882f076937 = MAKE_FUNCTION_FRAME(codeobj_64058bf8f4ec03346cf0ff882f076937, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_64058bf8f4ec03346cf0ff882f076937->m_type_description == NULL);
    frame_64058bf8f4ec03346cf0ff882f076937 = cache_frame_64058bf8f4ec03346cf0ff882f076937;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_64058bf8f4ec03346cf0ff882f076937);
    assert(Py_REFCNT(frame_64058bf8f4ec03346cf0ff882f076937) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_state);
        tmp_expression_value_1 = par_state;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[16];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_state);
        tmp_assattr_target_1 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[15], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_objective);
        tmp_expression_value_2 = par_objective;
        tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_assattr_target_2 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[17], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_objective);
        tmp_expression_value_3 = par_objective;
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_assattr_target_3 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[19], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_objective);
        tmp_expression_value_4 = par_objective;
        tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[20]);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_assattr_target_4 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[20], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_prepared_constraints);
            tmp_iter_arg_1 = par_prepared_constraints;
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        if (isFrameUnusable(cache_frame_ad37623dfe5800de5533b17728d57827_2)) {
            Py_XDECREF(cache_frame_ad37623dfe5800de5533b17728d57827_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ad37623dfe5800de5533b17728d57827_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ad37623dfe5800de5533b17728d57827_2 = MAKE_FUNCTION_FRAME(codeobj_ad37623dfe5800de5533b17728d57827, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_ad37623dfe5800de5533b17728d57827_2->m_type_description == NULL);
        frame_ad37623dfe5800de5533b17728d57827_2 = cache_frame_ad37623dfe5800de5533b17728d57827_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ad37623dfe5800de5533b17728d57827_2);
        assert(Py_REFCNT(frame_ad37623dfe5800de5533b17728d57827_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 65;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_6;
                Py_INCREF(outline_0_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_c);
            tmp_expression_value_5 = outline_0_var_c;
            tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[21]);
            if (tmp_isinstance_inst_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_isinstance_cls_1 == NULL)) {
                tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_isinstance_cls_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_isinstance_inst_1);

                exception_lineno = 65;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
            Py_DECREF(tmp_isinstance_inst_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            CHECK_OBJECT(outline_0_var_c);
            tmp_expression_value_7 = outline_0_var_c;
            tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[21]);
            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_append_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[17]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_append_value_1 = mod_consts[23];
            Py_INCREF(tmp_append_value_1);
            condexpr_end_1:;
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assattr_value_5 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assattr_value_5);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_3;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ad37623dfe5800de5533b17728d57827_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ad37623dfe5800de5533b17728d57827_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ad37623dfe5800de5533b17728d57827_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ad37623dfe5800de5533b17728d57827_2,
            type_description_2,
            outline_0_var_c
        );


        // Release cached frame if used for exception.
        if (frame_ad37623dfe5800de5533b17728d57827_2 == cache_frame_ad37623dfe5800de5533b17728d57827_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_ad37623dfe5800de5533b17728d57827_2);
            cache_frame_ad37623dfe5800de5533b17728d57827_2 = NULL;
        }

        assertFrameObject(frame_ad37623dfe5800de5533b17728d57827_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 65;
        goto frame_exception_exit_1;
        outline_result_1:;
        CHECK_OBJECT(par_state);
        tmp_assattr_target_5 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[24], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(par_prepared_constraints);
            tmp_iter_arg_2 = par_prepared_constraints;
            tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_5;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_8;
        }
        if (isFrameUnusable(cache_frame_3cf5c2bc2b52300a04c0994c52301710_3)) {
            Py_XDECREF(cache_frame_3cf5c2bc2b52300a04c0994c52301710_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3cf5c2bc2b52300a04c0994c52301710_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3cf5c2bc2b52300a04c0994c52301710_3 = MAKE_FUNCTION_FRAME(codeobj_3cf5c2bc2b52300a04c0994c52301710, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_3cf5c2bc2b52300a04c0994c52301710_3->m_type_description == NULL);
        frame_3cf5c2bc2b52300a04c0994c52301710_3 = cache_frame_3cf5c2bc2b52300a04c0994c52301710_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3cf5c2bc2b52300a04c0994c52301710_3);
        assert(Py_REFCNT(frame_3cf5c2bc2b52300a04c0994c52301710_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_9 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 67;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_10 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_c;
                outline_1_var_c = tmp_assign_source_10;
                Py_INCREF(outline_1_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_c);
            tmp_expression_value_8 = outline_1_var_c;
            tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[21]);
            if (tmp_isinstance_inst_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_isinstance_cls_2 == NULL)) {
                tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_isinstance_cls_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_isinstance_inst_2);

                exception_lineno = 67;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
            Py_DECREF(tmp_isinstance_inst_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            CHECK_OBJECT(outline_1_var_c);
            tmp_expression_value_10 = outline_1_var_c;
            tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[21]);
            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_append_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[19]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_append_value_2 = mod_consts[23];
            Py_INCREF(tmp_append_value_2);
            condexpr_end_2:;
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assattr_value_6 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assattr_value_6);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3cf5c2bc2b52300a04c0994c52301710_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3cf5c2bc2b52300a04c0994c52301710_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3cf5c2bc2b52300a04c0994c52301710_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3cf5c2bc2b52300a04c0994c52301710_3,
            type_description_2,
            outline_1_var_c
        );


        // Release cached frame if used for exception.
        if (frame_3cf5c2bc2b52300a04c0994c52301710_3 == cache_frame_3cf5c2bc2b52300a04c0994c52301710_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_3cf5c2bc2b52300a04c0994c52301710_3);
            cache_frame_3cf5c2bc2b52300a04c0994c52301710_3 = NULL;
        }

        assertFrameObject(frame_3cf5c2bc2b52300a04c0994c52301710_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_5;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_1_var_c);
        outline_1_var_c = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_c);
        outline_1_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 67;
        goto frame_exception_exit_1;
        outline_result_2:;
        CHECK_OBJECT(par_state);
        tmp_assattr_target_6 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[25], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(par_prepared_constraints);
            tmp_iter_arg_3 = par_prepared_constraints;
            tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_7;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_12;
        }
        if (isFrameUnusable(cache_frame_422b02cd57a901010efbe98c01a98e38_4)) {
            Py_XDECREF(cache_frame_422b02cd57a901010efbe98c01a98e38_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_422b02cd57a901010efbe98c01a98e38_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_422b02cd57a901010efbe98c01a98e38_4 = MAKE_FUNCTION_FRAME(codeobj_422b02cd57a901010efbe98c01a98e38, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_422b02cd57a901010efbe98c01a98e38_4->m_type_description == NULL);
        frame_422b02cd57a901010efbe98c01a98e38_4 = cache_frame_422b02cd57a901010efbe98c01a98e38_4;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_422b02cd57a901010efbe98c01a98e38_4);
        assert(Py_REFCNT(frame_422b02cd57a901010efbe98c01a98e38_4) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_3 = tmp_listcomp_3__$0;
            tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_13 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 69;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_14 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_c;
                outline_2_var_c = tmp_assign_source_14;
                Py_INCREF(outline_2_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_isinstance_inst_3;
            PyObject *tmp_isinstance_cls_3;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            CHECK_OBJECT(outline_2_var_c);
            tmp_expression_value_11 = outline_2_var_c;
            tmp_isinstance_inst_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[21]);
            if (tmp_isinstance_inst_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_isinstance_cls_3 == NULL)) {
                tmp_isinstance_cls_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_isinstance_cls_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_isinstance_inst_3);

                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
            Py_DECREF(tmp_isinstance_inst_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            CHECK_OBJECT(outline_2_var_c);
            tmp_expression_value_13 = outline_2_var_c;
            tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[21]);
            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_append_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[20]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_append_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_append_value_3 = mod_consts[23];
            Py_INCREF(tmp_append_value_3);
            condexpr_end_3:;
            tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_2 = "o";
            goto try_except_handler_8;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_assattr_value_7 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_assattr_value_7);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto frame_return_exit_4;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_4;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_return_exit_4:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_7;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_422b02cd57a901010efbe98c01a98e38_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_422b02cd57a901010efbe98c01a98e38_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_422b02cd57a901010efbe98c01a98e38_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_422b02cd57a901010efbe98c01a98e38_4,
            type_description_2,
            outline_2_var_c
        );


        // Release cached frame if used for exception.
        if (frame_422b02cd57a901010efbe98c01a98e38_4 == cache_frame_422b02cd57a901010efbe98c01a98e38_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_422b02cd57a901010efbe98c01a98e38_4);
            cache_frame_422b02cd57a901010efbe98c01a98e38_4 = NULL;
        }

        assertFrameObject(frame_422b02cd57a901010efbe98c01a98e38_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_XDECREF(outline_2_var_c);
        outline_2_var_c = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_2_var_c);
        outline_2_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 69;
        goto frame_exception_exit_1;
        outline_result_3:;
        CHECK_OBJECT(par_state);
        tmp_assattr_target_7 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[26], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_last_iteration_failed);
        tmp_operand_value_1 = par_last_iteration_failed;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_x);
        tmp_assattr_value_8 = par_x;
        CHECK_OBJECT(par_state);
        tmp_assattr_target_8 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[7], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_objective);
        tmp_expression_value_14 = par_objective;
        tmp_assattr_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[27]);
        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_assattr_target_9 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[21], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_objective);
        tmp_expression_value_15 = par_objective;
        tmp_assattr_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[28]);
        if (tmp_assattr_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_assattr_target_10 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[29], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(par_prepared_constraints);
            tmp_iter_arg_4 = par_prepared_constraints;
            tmp_assign_source_15 = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_9;
            }
            assert(tmp_listcomp_4__$0 == NULL);
            tmp_listcomp_4__$0 = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_4__contraction == NULL);
            tmp_listcomp_4__contraction = tmp_assign_source_16;
        }
        if (isFrameUnusable(cache_frame_6ec778184b6d94c055893f5af7595a54_5)) {
            Py_XDECREF(cache_frame_6ec778184b6d94c055893f5af7595a54_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6ec778184b6d94c055893f5af7595a54_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6ec778184b6d94c055893f5af7595a54_5 = MAKE_FUNCTION_FRAME(codeobj_6ec778184b6d94c055893f5af7595a54, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_6ec778184b6d94c055893f5af7595a54_5->m_type_description == NULL);
        frame_6ec778184b6d94c055893f5af7595a54_5 = cache_frame_6ec778184b6d94c055893f5af7595a54_5;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_6ec778184b6d94c055893f5af7595a54_5);
        assert(Py_REFCNT(frame_6ec778184b6d94c055893f5af7595a54_5) == 2);

        // Framed code:
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp_4__$0);
            tmp_next_source_4 = tmp_listcomp_4__$0;
            tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_4);
            if (tmp_assign_source_17 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 76;
                    goto try_except_handler_10;
                }
            }

            {
                PyObject *old = tmp_listcomp_4__iter_value_0;
                tmp_listcomp_4__iter_value_0 = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
            tmp_assign_source_18 = tmp_listcomp_4__iter_value_0;
            {
                PyObject *old = outline_3_var_c;
                outline_3_var_c = tmp_assign_source_18;
                Py_INCREF(outline_3_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_4;
            PyObject *tmp_append_value_4;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            CHECK_OBJECT(tmp_listcomp_4__contraction);
            tmp_append_list_4 = tmp_listcomp_4__contraction;
            CHECK_OBJECT(outline_3_var_c);
            tmp_expression_value_17 = outline_3_var_c;
            tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[21]);
            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_append_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[30]);
            Py_DECREF(tmp_expression_value_16);
            if (tmp_append_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        tmp_assattr_value_11 = tmp_listcomp_4__contraction;
        Py_INCREF(tmp_assattr_value_11);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        goto frame_return_exit_5;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_5;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_return_exit_5:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_9;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6ec778184b6d94c055893f5af7595a54_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6ec778184b6d94c055893f5af7595a54_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6ec778184b6d94c055893f5af7595a54_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6ec778184b6d94c055893f5af7595a54_5,
            type_description_2,
            outline_3_var_c
        );


        // Release cached frame if used for exception.
        if (frame_6ec778184b6d94c055893f5af7595a54_5 == cache_frame_6ec778184b6d94c055893f5af7595a54_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_6ec778184b6d94c055893f5af7595a54_5);
            cache_frame_6ec778184b6d94c055893f5af7595a54_5 = NULL;
        }

        assertFrameObject(frame_6ec778184b6d94c055893f5af7595a54_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_9;
        skip_nested_handling_4:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_XDECREF(outline_3_var_c);
        outline_3_var_c = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_3_var_c);
        outline_3_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 76;
        goto frame_exception_exit_1;
        outline_result_4:;
        CHECK_OBJECT(par_state);
        tmp_assattr_target_11 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[30], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(par_prepared_constraints);
            tmp_iter_arg_5 = par_prepared_constraints;
            tmp_assign_source_19 = MAKE_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_11;
            }
            assert(tmp_listcomp_5__$0 == NULL);
            tmp_listcomp_5__$0 = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_5__contraction == NULL);
            tmp_listcomp_5__contraction = tmp_assign_source_20;
        }
        if (isFrameUnusable(cache_frame_ff9a914aa39e512fceca92513996ce6f_6)) {
            Py_XDECREF(cache_frame_ff9a914aa39e512fceca92513996ce6f_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ff9a914aa39e512fceca92513996ce6f_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ff9a914aa39e512fceca92513996ce6f_6 = MAKE_FUNCTION_FRAME(codeobj_ff9a914aa39e512fceca92513996ce6f, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_ff9a914aa39e512fceca92513996ce6f_6->m_type_description == NULL);
        frame_ff9a914aa39e512fceca92513996ce6f_6 = cache_frame_ff9a914aa39e512fceca92513996ce6f_6;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ff9a914aa39e512fceca92513996ce6f_6);
        assert(Py_REFCNT(frame_ff9a914aa39e512fceca92513996ce6f_6) == 2);

        // Framed code:
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT(tmp_listcomp_5__$0);
            tmp_next_source_5 = tmp_listcomp_5__$0;
            tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_5);
            if (tmp_assign_source_21 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_5;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 77;
                    goto try_except_handler_12;
                }
            }

            {
                PyObject *old = tmp_listcomp_5__iter_value_0;
                tmp_listcomp_5__iter_value_0 = tmp_assign_source_21;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT(tmp_listcomp_5__iter_value_0);
            tmp_assign_source_22 = tmp_listcomp_5__iter_value_0;
            {
                PyObject *old = outline_4_var_c;
                outline_4_var_c = tmp_assign_source_22;
                Py_INCREF(outline_4_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_5;
            PyObject *tmp_append_value_5;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_expression_value_19;
            CHECK_OBJECT(tmp_listcomp_5__contraction);
            tmp_append_list_5 = tmp_listcomp_5__contraction;
            CHECK_OBJECT(outline_4_var_c);
            tmp_expression_value_19 = outline_4_var_c;
            tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[21]);
            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_append_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[27]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_append_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_5, tmp_append_value_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        tmp_assattr_value_12 = tmp_listcomp_5__contraction;
        Py_INCREF(tmp_assattr_value_12);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(tmp_listcomp_5__$0);
        Py_DECREF(tmp_listcomp_5__$0);
        tmp_listcomp_5__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        Py_DECREF(tmp_listcomp_5__contraction);
        tmp_listcomp_5__contraction = NULL;
        Py_XDECREF(tmp_listcomp_5__iter_value_0);
        tmp_listcomp_5__iter_value_0 = NULL;
        goto frame_return_exit_6;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_5__$0);
        Py_DECREF(tmp_listcomp_5__$0);
        tmp_listcomp_5__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        Py_DECREF(tmp_listcomp_5__contraction);
        tmp_listcomp_5__contraction = NULL;
        Py_XDECREF(tmp_listcomp_5__iter_value_0);
        tmp_listcomp_5__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_6;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_return_exit_6:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_11;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ff9a914aa39e512fceca92513996ce6f_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ff9a914aa39e512fceca92513996ce6f_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ff9a914aa39e512fceca92513996ce6f_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ff9a914aa39e512fceca92513996ce6f_6,
            type_description_2,
            outline_4_var_c
        );


        // Release cached frame if used for exception.
        if (frame_ff9a914aa39e512fceca92513996ce6f_6 == cache_frame_ff9a914aa39e512fceca92513996ce6f_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_ff9a914aa39e512fceca92513996ce6f_6);
            cache_frame_ff9a914aa39e512fceca92513996ce6f_6 = NULL;
        }

        assertFrameObject(frame_ff9a914aa39e512fceca92513996ce6f_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_11;
        skip_nested_handling_5:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_XDECREF(outline_4_var_c);
        outline_4_var_c = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_4_var_c);
        outline_4_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 77;
        goto frame_exception_exit_1;
        outline_result_5:;
        CHECK_OBJECT(par_state);
        tmp_assattr_target_12 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[31], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        // Tried code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_iter_arg_6;
            CHECK_OBJECT(par_prepared_constraints);
            tmp_iter_arg_6 = par_prepared_constraints;
            tmp_assign_source_23 = MAKE_ITERATOR(tmp_iter_arg_6);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_13;
            }
            assert(tmp_listcomp_6__$0 == NULL);
            tmp_listcomp_6__$0 = tmp_assign_source_23;
        }
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_6__contraction == NULL);
            tmp_listcomp_6__contraction = tmp_assign_source_24;
        }
        if (isFrameUnusable(cache_frame_5a37431745645646d9d6bca914925a83_7)) {
            Py_XDECREF(cache_frame_5a37431745645646d9d6bca914925a83_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_5a37431745645646d9d6bca914925a83_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_5a37431745645646d9d6bca914925a83_7 = MAKE_FUNCTION_FRAME(codeobj_5a37431745645646d9d6bca914925a83, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_5a37431745645646d9d6bca914925a83_7->m_type_description == NULL);
        frame_5a37431745645646d9d6bca914925a83_7 = cache_frame_5a37431745645646d9d6bca914925a83_7;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_5a37431745645646d9d6bca914925a83_7);
        assert(Py_REFCNT(frame_5a37431745645646d9d6bca914925a83_7) == 2);

        // Framed code:
        // Tried code:
        loop_start_6:;
        {
            PyObject *tmp_next_source_6;
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT(tmp_listcomp_6__$0);
            tmp_next_source_6 = tmp_listcomp_6__$0;
            tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_6);
            if (tmp_assign_source_25 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_6;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 78;
                    goto try_except_handler_14;
                }
            }

            {
                PyObject *old = tmp_listcomp_6__iter_value_0;
                tmp_listcomp_6__iter_value_0 = tmp_assign_source_25;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT(tmp_listcomp_6__iter_value_0);
            tmp_assign_source_26 = tmp_listcomp_6__iter_value_0;
            {
                PyObject *old = outline_5_var_c;
                outline_5_var_c = tmp_assign_source_26;
                Py_INCREF(outline_5_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_6;
            PyObject *tmp_append_value_6;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            CHECK_OBJECT(tmp_listcomp_6__contraction);
            tmp_append_list_6 = tmp_listcomp_6__contraction;
            CHECK_OBJECT(outline_5_var_c);
            tmp_expression_value_21 = outline_5_var_c;
            tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[21]);
            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_append_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[32]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_append_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_6, tmp_append_value_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_2 = "o";
            goto try_except_handler_14;
        }
        goto loop_start_6;
        loop_end_6:;
        CHECK_OBJECT(tmp_listcomp_6__contraction);
        tmp_assattr_value_13 = tmp_listcomp_6__contraction;
        Py_INCREF(tmp_assattr_value_13);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(tmp_listcomp_6__$0);
        Py_DECREF(tmp_listcomp_6__$0);
        tmp_listcomp_6__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_6__contraction);
        Py_DECREF(tmp_listcomp_6__contraction);
        tmp_listcomp_6__contraction = NULL;
        Py_XDECREF(tmp_listcomp_6__iter_value_0);
        tmp_listcomp_6__iter_value_0 = NULL;
        goto frame_return_exit_7;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_6__$0);
        Py_DECREF(tmp_listcomp_6__$0);
        tmp_listcomp_6__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_6__contraction);
        Py_DECREF(tmp_listcomp_6__contraction);
        tmp_listcomp_6__contraction = NULL;
        Py_XDECREF(tmp_listcomp_6__iter_value_0);
        tmp_listcomp_6__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto frame_exception_exit_7;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_return_exit_7:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_13;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5a37431745645646d9d6bca914925a83_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5a37431745645646d9d6bca914925a83_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5a37431745645646d9d6bca914925a83_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5a37431745645646d9d6bca914925a83_7,
            type_description_2,
            outline_5_var_c
        );


        // Release cached frame if used for exception.
        if (frame_5a37431745645646d9d6bca914925a83_7 == cache_frame_5a37431745645646d9d6bca914925a83_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_5a37431745645646d9d6bca914925a83_7);
            cache_frame_5a37431745645646d9d6bca914925a83_7 = NULL;
        }

        assertFrameObject(frame_5a37431745645646d9d6bca914925a83_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_13;
        skip_nested_handling_6:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_XDECREF(outline_5_var_c);
        outline_5_var_c = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_5_var_c);
        outline_5_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 78;
        goto frame_exception_exit_1;
        outline_result_6:;
        CHECK_OBJECT(par_state);
        tmp_assattr_target_13 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[33], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_assattr_target_14;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_23 = par_state;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[29]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 80;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_64058bf8f4ec03346cf0ff882f076937->m_frame.f_lineno = 80;
        tmp_assattr_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_assattr_target_14 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[36], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_7;
        CHECK_OBJECT(par_prepared_constraints);
        tmp_iter_arg_7 = par_prepared_constraints;
        tmp_assign_source_27 = MAKE_ITERATOR(tmp_iter_arg_7);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_27;
    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_7 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_28 = ITERATOR_NEXT(tmp_next_source_7);
        if (tmp_assign_source_28 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_7;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooo";
                exception_lineno = 81;
                goto try_except_handler_15;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_29 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_29;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_expression_value_24;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_expression_value_24 = par_state;
        tmp_assign_source_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[36]);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_inplace_assign_2__value;
            tmp_inplace_assign_2__value = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_iadd_expr_left_2 = tmp_inplace_assign_2__value;
        CHECK_OBJECT(var_c);
        tmp_expression_value_28 = var_c;
        tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[21]);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[32]);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[38]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[13]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_16;
        }
        CHECK_OBJECT(var_c);
        tmp_expression_value_30 = var_c;
        tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[21]);
        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 82;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[30]);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 82;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_16;
        }
        frame_64058bf8f4ec03346cf0ff882f076937->m_frame.f_lineno = 82;
        tmp_iadd_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_assign_source_31 = tmp_iadd_expr_left_2;
        tmp_inplace_assign_2__value = tmp_assign_source_31;

    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_assattr_value_15 = tmp_inplace_assign_2__value;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_assattr_target_15 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[36], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_16;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_15;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 81;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_15;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_assattr_target_16;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[39]);
        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[40]);
        Py_DECREF(tmp_expression_value_31);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_33 = par_state;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[36]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[41]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_64058bf8f4ec03346cf0ff882f076937->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assattr_value_16 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assattr_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_assattr_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_16 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[42], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        tmp_assattr_value_17 = mod_consts[23];
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_17 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[43], tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_prepared_constraints);
        tmp_len_arg_1 = par_prepared_constraints;
        tmp_xrange_low_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_xrange_low_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_8 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = MAKE_ITERATOR(tmp_iter_arg_8);
        Py_DECREF(tmp_iter_arg_8);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_32;
    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_8;
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_8 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_33 = ITERATOR_NEXT(tmp_next_source_8);
        if (tmp_assign_source_33 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_8;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooo";
                exception_lineno = 86;
                goto try_except_handler_17;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_34 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_34;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_prepared_constraints);
        tmp_expression_value_36 = par_prepared_constraints;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_expression_value_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_1);
        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_iter_arg_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[44]);
        Py_DECREF(tmp_expression_value_35);
        if (tmp_iter_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_assign_source_35 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_36 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_36 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 87;
            goto try_except_handler_19;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_37 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_37 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 87;
            goto try_except_handler_19;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 87;
                    goto try_except_handler_19;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[45];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 87;
            goto try_except_handler_19;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_18;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_17;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_38 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_lb;
            var_lb = tmp_assign_source_38;
            Py_INCREF(var_lb);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_39 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_ub;
            var_ub = tmp_assign_source_39;
            Py_INCREF(var_ub);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_2;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_expression_value_38 = par_state;
        tmp_expression_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[31]);
        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_17;
        }
        CHECK_OBJECT(var_i);
        tmp_subscript_value_2 = var_i;
        tmp_assign_source_40 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_assattr_target_18;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[46]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_17;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 89;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_expression_value_40 = par_state;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[43]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 89;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_args_element_value_5 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_sub_expr_left_2;
            PyObject *tmp_sub_expr_right_2;
            PyList_SET_ITEM(tmp_args_element_value_5, 0, tmp_list_element_1);
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[46]);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_lb);
            tmp_sub_expr_left_1 = var_lb;
            CHECK_OBJECT(var_c);
            tmp_sub_expr_right_1 = var_c;
            tmp_args_element_value_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            if (tmp_args_element_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 90;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }
            frame_64058bf8f4ec03346cf0ff882f076937->m_frame.f_lineno = 90;
            tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_5, 1, tmp_list_element_1);
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[46]);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_c);
            tmp_sub_expr_left_2 = var_c;
            CHECK_OBJECT(var_ub);
            tmp_sub_expr_right_2 = var_ub;
            tmp_args_element_value_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            if (tmp_args_element_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 91;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }
            frame_64058bf8f4ec03346cf0ff882f076937->m_frame.f_lineno = 91;
            tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_5, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        goto try_except_handler_17;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_64058bf8f4ec03346cf0ff882f076937->m_frame.f_lineno = 89;
        tmp_assattr_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assattr_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_17;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_assattr_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 89;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_assattr_target_18 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[43], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_17;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 86;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_17;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_19;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_64058bf8f4ec03346cf0ff882f076937->m_frame.f_lineno = 93;
        tmp_sub_expr_left_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[47]);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_start_time);
        tmp_sub_expr_right_3 = par_start_time;
        tmp_assattr_value_19 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        if (tmp_assattr_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_assattr_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 93;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_19 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[48], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_assattr_target_20;
        CHECK_OBJECT(par_tr_radius);
        tmp_assattr_value_20 = par_tr_radius;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_20 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[49], tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_assattr_target_21;
        CHECK_OBJECT(par_constr_penalty);
        tmp_assattr_value_21 = par_constr_penalty;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_21 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[50], tmp_assattr_value_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_expression_value_43;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_43 = par_state;
        tmp_assign_source_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[51]);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_3__value == NULL);
        tmp_inplace_assign_3__value = tmp_assign_source_41;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(tmp_inplace_assign_3__value);
        tmp_iadd_expr_left_3 = tmp_inplace_assign_3__value;
        CHECK_OBJECT(par_cg_info);
        tmp_expression_value_44 = par_cg_info;
        tmp_subscript_value_3 = mod_consts[52];
        tmp_iadd_expr_right_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_3);
        if (tmp_iadd_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_assign_source_42 = tmp_iadd_expr_left_3;
        tmp_inplace_assign_3__value = tmp_assign_source_42;

    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_assattr_target_22;
        CHECK_OBJECT(tmp_inplace_assign_3__value);
        tmp_assattr_value_22 = tmp_inplace_assign_3__value;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_assattr_target_22 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[51], tmp_assattr_value_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_20;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_3__value);
    Py_DECREF(tmp_inplace_assign_3__value);
    tmp_inplace_assign_3__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_inplace_assign_3__value);
    Py_DECREF(tmp_inplace_assign_3__value);
    tmp_inplace_assign_3__value = NULL;
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_assattr_target_23;
        CHECK_OBJECT(par_cg_info);
        tmp_expression_value_45 = par_cg_info;
        tmp_subscript_value_4 = mod_consts[53];
        tmp_assattr_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_4);
        if (tmp_assattr_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_assattr_value_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_23 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_23, mod_consts[54], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_value_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    if (par_state == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 99;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_state;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_64058bf8f4ec03346cf0ff882f076937, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_64058bf8f4ec03346cf0ff882f076937->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_64058bf8f4ec03346cf0ff882f076937, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_64058bf8f4ec03346cf0ff882f076937,
        type_description_1,
        par_state,
        par_x,
        par_last_iteration_failed,
        par_objective,
        par_prepared_constraints,
        par_start_time,
        par_tr_radius,
        par_constr_penalty,
        par_cg_info,
        var_c,
        var_i,
        var_lb,
        var_ub
    );


    // Release cached frame if used for exception.
    if (frame_64058bf8f4ec03346cf0ff882f076937 == cache_frame_64058bf8f4ec03346cf0ff882f076937) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_64058bf8f4ec03346cf0ff882f076937);
        cache_frame_64058bf8f4ec03346cf0ff882f076937 = NULL;
    }

    assertFrameObject(frame_64058bf8f4ec03346cf0ff882f076937);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_7:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_lb);
    var_lb = NULL;
    Py_XDECREF(var_ub);
    var_ub = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_lb);
    var_lb = NULL;
    Py_XDECREF(var_ub);
    var_ub = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_last_iteration_failed);
    Py_DECREF(par_last_iteration_failed);
    CHECK_OBJECT(par_objective);
    Py_DECREF(par_objective);
    CHECK_OBJECT(par_prepared_constraints);
    Py_DECREF(par_prepared_constraints);
    CHECK_OBJECT(par_start_time);
    Py_DECREF(par_start_time);
    CHECK_OBJECT(par_tr_radius);
    Py_DECREF(par_tr_radius);
    CHECK_OBJECT(par_constr_penalty);
    Py_DECREF(par_constr_penalty);
    CHECK_OBJECT(par_cg_info);
    Py_DECREF(par_cg_info);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_last_iteration_failed);
    Py_DECREF(par_last_iteration_failed);
    CHECK_OBJECT(par_objective);
    Py_DECREF(par_objective);
    CHECK_OBJECT(par_prepared_constraints);
    Py_DECREF(par_prepared_constraints);
    CHECK_OBJECT(par_start_time);
    Py_DECREF(par_start_time);
    CHECK_OBJECT(par_tr_radius);
    Py_DECREF(par_tr_radius);
    CHECK_OBJECT(par_constr_penalty);
    Py_DECREF(par_constr_penalty);
    CHECK_OBJECT(par_cg_info);
    Py_DECREF(par_cg_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__6_update_state_ip(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_state = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_last_iteration_failed = python_pars[2];
    PyObject *par_objective = python_pars[3];
    PyObject *par_prepared_constraints = python_pars[4];
    PyObject *par_start_time = python_pars[5];
    PyObject *par_tr_radius = python_pars[6];
    PyObject *par_constr_penalty = python_pars[7];
    PyObject *par_cg_info = python_pars[8];
    PyObject *par_barrier_parameter = python_pars[9];
    PyObject *par_barrier_tolerance = python_pars[10];
    struct Nuitka_FrameObject *frame_2d8a0eec9e161411ff364676f73b8a10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2d8a0eec9e161411ff364676f73b8a10 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2d8a0eec9e161411ff364676f73b8a10)) {
        Py_XDECREF(cache_frame_2d8a0eec9e161411ff364676f73b8a10);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2d8a0eec9e161411ff364676f73b8a10 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2d8a0eec9e161411ff364676f73b8a10 = MAKE_FUNCTION_FRAME(codeobj_2d8a0eec9e161411ff364676f73b8a10, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2d8a0eec9e161411ff364676f73b8a10->m_type_description == NULL);
    frame_2d8a0eec9e161411ff364676f73b8a10 = cache_frame_2d8a0eec9e161411ff364676f73b8a10;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2d8a0eec9e161411ff364676f73b8a10);
    assert(Py_REFCNT(frame_2d8a0eec9e161411ff364676f73b8a10) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_args_element_value_1 = par_state;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        CHECK_OBJECT(par_last_iteration_failed);
        tmp_args_element_value_3 = par_last_iteration_failed;
        CHECK_OBJECT(par_objective);
        tmp_args_element_value_4 = par_objective;
        CHECK_OBJECT(par_prepared_constraints);
        tmp_args_element_value_5 = par_prepared_constraints;
        CHECK_OBJECT(par_start_time);
        tmp_args_element_value_6 = par_start_time;
        CHECK_OBJECT(par_tr_radius);
        tmp_args_element_value_7 = par_tr_radius;
        CHECK_OBJECT(par_constr_penalty);
        tmp_args_element_value_8 = par_constr_penalty;
        CHECK_OBJECT(par_cg_info);
        tmp_args_element_value_9 = par_cg_info;
        frame_2d8a0eec9e161411ff364676f73b8a10->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS9(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_state;
            assert(old != NULL);
            par_state = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_barrier_parameter);
        tmp_assattr_value_1 = par_barrier_parameter;
        CHECK_OBJECT(par_state);
        tmp_assattr_target_1 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[56], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_barrier_tolerance);
        tmp_assattr_value_2 = par_barrier_tolerance;
        CHECK_OBJECT(par_state);
        tmp_assattr_target_2 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[57], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2d8a0eec9e161411ff364676f73b8a10, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2d8a0eec9e161411ff364676f73b8a10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2d8a0eec9e161411ff364676f73b8a10, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2d8a0eec9e161411ff364676f73b8a10,
        type_description_1,
        par_state,
        par_x,
        par_last_iteration_failed,
        par_objective,
        par_prepared_constraints,
        par_start_time,
        par_tr_radius,
        par_constr_penalty,
        par_cg_info,
        par_barrier_parameter,
        par_barrier_tolerance
    );


    // Release cached frame if used for exception.
    if (frame_2d8a0eec9e161411ff364676f73b8a10 == cache_frame_2d8a0eec9e161411ff364676f73b8a10) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2d8a0eec9e161411ff364676f73b8a10);
        cache_frame_2d8a0eec9e161411ff364676f73b8a10 = NULL;
    }

    assertFrameObject(frame_2d8a0eec9e161411ff364676f73b8a10);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_state);
    tmp_return_value = par_state;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    par_state = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_state);
    par_state = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_last_iteration_failed);
    Py_DECREF(par_last_iteration_failed);
    CHECK_OBJECT(par_objective);
    Py_DECREF(par_objective);
    CHECK_OBJECT(par_prepared_constraints);
    Py_DECREF(par_prepared_constraints);
    CHECK_OBJECT(par_start_time);
    Py_DECREF(par_start_time);
    CHECK_OBJECT(par_tr_radius);
    Py_DECREF(par_tr_radius);
    CHECK_OBJECT(par_constr_penalty);
    Py_DECREF(par_constr_penalty);
    CHECK_OBJECT(par_cg_info);
    Py_DECREF(par_cg_info);
    CHECK_OBJECT(par_barrier_parameter);
    Py_DECREF(par_barrier_parameter);
    CHECK_OBJECT(par_barrier_tolerance);
    Py_DECREF(par_barrier_tolerance);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_last_iteration_failed);
    Py_DECREF(par_last_iteration_failed);
    CHECK_OBJECT(par_objective);
    Py_DECREF(par_objective);
    CHECK_OBJECT(par_prepared_constraints);
    Py_DECREF(par_prepared_constraints);
    CHECK_OBJECT(par_start_time);
    Py_DECREF(par_start_time);
    CHECK_OBJECT(par_tr_radius);
    Py_DECREF(par_tr_radius);
    CHECK_OBJECT(par_constr_penalty);
    Py_DECREF(par_constr_penalty);
    CHECK_OBJECT(par_cg_info);
    Py_DECREF(par_cg_info);
    CHECK_OBJECT(par_barrier_parameter);
    Py_DECREF(par_barrier_parameter);
    CHECK_OBJECT(par_barrier_tolerance);
    Py_DECREF(par_barrier_tolerance);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[0];
    PyObject *par_x0 = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_grad = python_pars[3];
    PyObject *par_hess = python_pars[4];
    PyObject *par_hessp = python_pars[5];
    PyObject *par_bounds = python_pars[6];
    PyObject *par_constraints = python_pars[7];
    struct Nuitka_CellObject *par_xtol = Nuitka_Cell_New1(python_pars[8]);
    struct Nuitka_CellObject *par_gtol = Nuitka_Cell_New1(python_pars[9]);
    struct Nuitka_CellObject *par_barrier_tol = Nuitka_Cell_New1(python_pars[10]);
    PyObject *par_sparse_jacobian = python_pars[11];
    struct Nuitka_CellObject *par_callback = Nuitka_Cell_New1(python_pars[12]);
    struct Nuitka_CellObject *par_maxiter = Nuitka_Cell_New1(python_pars[13]);
    struct Nuitka_CellObject *par_verbose = Nuitka_Cell_New1(python_pars[14]);
    PyObject *par_finite_diff_rel_step = python_pars[15];
    PyObject *par_initial_constr_penalty = python_pars[16];
    PyObject *par_initial_tr_radius = python_pars[17];
    PyObject *par_initial_barrier_parameter = python_pars[18];
    PyObject *par_initial_barrier_tolerance = python_pars[19];
    PyObject *par_factorization_method = python_pars[20];
    PyObject *par_disp = python_pars[21];
    PyObject *var_n_vars = NULL;
    PyObject *var_finite_diff_bounds = NULL;
    struct Nuitka_CellObject *var_objective = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_prepared_constraints = Nuitka_Cell_Empty();
    PyObject *var_n_sparse = NULL;
    PyObject *var_c_eq0 = NULL;
    PyObject *var_c_ineq0 = NULL;
    PyObject *var_J_eq0 = NULL;
    PyObject *var_J_ineq0 = NULL;
    PyObject *var_canonical_all = NULL;
    struct Nuitka_CellObject *var_canonical = Nuitka_Cell_Empty();
    PyObject *var_lagrangian_hess = NULL;
    PyObject *var_method = NULL;
    PyObject *var_state = NULL;
    struct Nuitka_CellObject *var_start_time = Nuitka_Cell_Empty();
    PyObject *var_stop_criteria = NULL;
    PyObject *var_fun_and_constr = NULL;
    PyObject *var_grad_and_jac = NULL;
    PyObject *var__ = NULL;
    PyObject *var_result = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *outline_1_var_c = NULL;
    PyObject *outline_2_var_c = NULL;
    PyObject *outline_3_var_c = NULL;
    PyObject *outline_4_var_c = NULL;
    PyObject *outline_5_var_c = NULL;
    PyObject *outline_6_var_c = NULL;
    PyObject *outline_7_var_c = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_listcomp_4__$0 = NULL;
    PyObject *tmp_listcomp_4__contraction = NULL;
    PyObject *tmp_listcomp_4__iter_value_0 = NULL;
    PyObject *tmp_listcomp_5__$0 = NULL;
    PyObject *tmp_listcomp_5__contraction = NULL;
    PyObject *tmp_listcomp_5__iter_value_0 = NULL;
    PyObject *tmp_listcomp_6__$0 = NULL;
    PyObject *tmp_listcomp_6__contraction = NULL;
    PyObject *tmp_listcomp_6__iter_value_0 = NULL;
    PyObject *tmp_listcomp_7__$0 = NULL;
    PyObject *tmp_listcomp_7__contraction = NULL;
    PyObject *tmp_listcomp_7__iter_value_0 = NULL;
    PyObject *tmp_listcomp_8__$0 = NULL;
    PyObject *tmp_listcomp_8__contraction = NULL;
    PyObject *tmp_listcomp_8__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_bdb28a94af68716e499105f3835709f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_3c42a0de9bb99ffbe885a467022295c7_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_3c42a0de9bb99ffbe885a467022295c7_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_FrameObject *frame_9f3f756e05e20d31be3cf035706e30a3_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_9f3f756e05e20d31be3cf035706e30a3_3 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_FrameObject *frame_703116c317d2a41243ca933a86877bc8_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_703116c317d2a41243ca933a86877bc8_4 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_FrameObject *frame_985a60f85f2f56368db7ad98ab833903_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_985a60f85f2f56368db7ad98ab833903_5 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    struct Nuitka_FrameObject *frame_12e368ef90c7953dade9c74e668b910e_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    static struct Nuitka_FrameObject *cache_frame_12e368ef90c7953dade9c74e668b910e_6 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    struct Nuitka_FrameObject *frame_3544f967bf85c12180f755efac3324c1_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    static struct Nuitka_FrameObject *cache_frame_3544f967bf85c12180f755efac3324c1_7 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    struct Nuitka_FrameObject *frame_46060ccef3cf735a83fa2c64944f7421_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    static struct Nuitka_FrameObject *cache_frame_46060ccef3cf735a83fa2c64944f7421_8 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    struct Nuitka_FrameObject *frame_06254ba35d7cdd62d1a4b28775954c89_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    static struct Nuitka_FrameObject *cache_frame_06254ba35d7cdd62d1a4b28775954c89_9 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bdb28a94af68716e499105f3835709f8 = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bdb28a94af68716e499105f3835709f8)) {
        Py_XDECREF(cache_frame_bdb28a94af68716e499105f3835709f8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bdb28a94af68716e499105f3835709f8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bdb28a94af68716e499105f3835709f8 = MAKE_FUNCTION_FRAME(codeobj_bdb28a94af68716e499105f3835709f8, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bdb28a94af68716e499105f3835709f8->m_type_description == NULL);
    frame_bdb28a94af68716e499105f3835709f8 = cache_frame_bdb28a94af68716e499105f3835709f8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bdb28a94af68716e499105f3835709f8);
    assert(Py_REFCNT(frame_bdb28a94af68716e499105f3835709f8) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_1 = par_x0;
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 315;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[58], tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 315;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[59],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x0;
            assert(old != NULL);
            par_x0 = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_2 = par_x0;
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 316;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[61], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n_vars == NULL);
        var_n_vars = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_hess);
        tmp_cmp_expr_left_1 = par_hess;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        int tmp_truth_name_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[62]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_hessp);
        tmp_args_element_value_3 = par_hessp;
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 318;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 318;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hessp);
        tmp_args_element_value_4 = par_hessp;
        CHECK_OBJECT(var_n_vars);
        tmp_args_element_value_5 = var_n_vars;
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 319;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_hess;
            assert(old != NULL);
            par_hess = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 321;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_hess;
            assert(old != NULL);
            par_hess = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_end_2:;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_disp);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_disp);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(Nuitka_Cell_GET(par_verbose));
        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(par_verbose);
        tmp_cmp_expr_right_2 = mod_consts[23];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[16];
        {
            PyObject *old = Nuitka_Cell_GET(par_verbose);
            PyCell_SET(par_verbose, tmp_assign_source_5);
            Py_INCREF(tmp_assign_source_5);
            Py_XDECREF(old);
        }

    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_bounds);
        tmp_cmp_expr_left_3 = par_bounds;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bounds);
        tmp_expression_value_1 = par_bounds;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[66]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bounds);
        tmp_expression_value_2 = par_bounds;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[67]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 326;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bounds);
        tmp_expression_value_3 = par_bounds;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[68]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 327;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (var_n_vars == NULL) {
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 327;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = var_n_vars;
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 326;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_finite_diff_bounds == NULL);
        var_finite_diff_bounds = tmp_assign_source_6;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[41]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyTuple_SET_ITEM(tmp_assign_source_7, 0, tmp_tuple_element_1);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[41]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(var_finite_diff_bounds == NULL);
        var_finite_diff_bounds = tmp_assign_source_7;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fun);
        tmp_args_element_value_10 = par_fun;
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_11 = par_x0;
        CHECK_OBJECT(par_args);
        tmp_args_element_value_12 = par_args;
        CHECK_OBJECT(par_grad);
        tmp_args_element_value_13 = par_grad;
        CHECK_OBJECT(par_hess);
        tmp_args_element_value_14 = par_hess;
        CHECK_OBJECT(par_finite_diff_rel_step);
        tmp_args_element_value_15 = par_finite_diff_rel_step;
        CHECK_OBJECT(var_finite_diff_bounds);
        tmp_args_element_value_16 = var_finite_diff_bounds;
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 332;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_objective) == NULL);
        PyCell_SET(var_objective, tmp_assign_source_8);

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_constraints);
        tmp_isinstance_inst_1 = par_constraints;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_isinstance_cls_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_constraints);
        tmp_list_element_1 = par_constraints;
        tmp_assign_source_9 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assign_source_9, 0, tmp_list_element_1);
        {
            PyObject *old = par_constraints;
            assert(old != NULL);
            par_constraints = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_10;
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_constraints);
            tmp_iter_arg_1 = par_constraints;
            tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_12;
        }
        if (isFrameUnusable(cache_frame_3c42a0de9bb99ffbe885a467022295c7_2)) {
            Py_XDECREF(cache_frame_3c42a0de9bb99ffbe885a467022295c7_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3c42a0de9bb99ffbe885a467022295c7_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3c42a0de9bb99ffbe885a467022295c7_2 = MAKE_FUNCTION_FRAME(codeobj_3c42a0de9bb99ffbe885a467022295c7, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_3c42a0de9bb99ffbe885a467022295c7_2->m_type_description == NULL);
        frame_3c42a0de9bb99ffbe885a467022295c7_2 = cache_frame_3c42a0de9bb99ffbe885a467022295c7_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3c42a0de9bb99ffbe885a467022295c7_2);
        assert(Py_REFCNT(frame_3c42a0de9bb99ffbe885a467022295c7_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_13 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oooo";
                    exception_lineno = 340;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_14 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_14;
                Py_INCREF(outline_0_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_args_element_value_20;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "oooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_c);
            tmp_args_element_value_17 = outline_0_var_c;
            if (par_x0 == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[74]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 341;
                type_description_2 = "oooo";
                goto try_except_handler_3;
            }

            tmp_args_element_value_18 = par_x0;
            if (par_sparse_jacobian == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[75]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 341;
                type_description_2 = "oooo";
                goto try_except_handler_3;
            }

            tmp_args_element_value_19 = par_sparse_jacobian;
            if (var_finite_diff_bounds == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[76]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 341;
                type_description_2 = "oooo";
                goto try_except_handler_3;
            }

            tmp_args_element_value_20 = var_finite_diff_bounds;
            frame_3c42a0de9bb99ffbe885a467022295c7_2->m_frame.f_lineno = 341;
            {
                PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_6, call_args);
            }

            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "oooo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "oooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_2 = "oooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_10 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3c42a0de9bb99ffbe885a467022295c7_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3c42a0de9bb99ffbe885a467022295c7_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3c42a0de9bb99ffbe885a467022295c7_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3c42a0de9bb99ffbe885a467022295c7_2,
            type_description_2,
            outline_0_var_c,
            par_x0,
            par_sparse_jacobian,
            var_finite_diff_bounds
        );


        // Release cached frame if used for exception.
        if (frame_3c42a0de9bb99ffbe885a467022295c7_2 == cache_frame_3c42a0de9bb99ffbe885a467022295c7_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_3c42a0de9bb99ffbe885a467022295c7_2);
            cache_frame_3c42a0de9bb99ffbe885a467022295c7_2 = NULL;
        }

        assertFrameObject(frame_3c42a0de9bb99ffbe885a467022295c7_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 340;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(Nuitka_Cell_GET(var_prepared_constraints) == NULL);
        PyCell_SET(var_prepared_constraints, tmp_assign_source_10);

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_sum_sequence_1;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(Nuitka_Cell_GET(var_prepared_constraints));
            tmp_iter_arg_2 = Nuitka_Cell_GET(var_prepared_constraints);
            tmp_assign_source_16 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_16;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_sum_sequence_1 = MAKE_GENERATOR_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_4;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_assign_source_15 = BUILTIN_SUM1(tmp_sum_sequence_1);
        Py_DECREF(tmp_sum_sequence_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n_sparse == NULL);
        var_n_sparse = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_outline_return_value_1;
        int tmp_truth_name_3;
        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(var_n_sparse);
            tmp_assign_source_17 = var_n_sparse;
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_17);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_17;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            tmp_cmp_expr_left_4 = mod_consts[23];
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_right_4 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_18 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                goto try_except_handler_5;
            }
            assert(tmp_comparison_chain_1__comparison_result == NULL);
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_18;
        }
        {
            bool tmp_condition_result_7;
            PyObject *tmp_operand_value_2;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                goto try_except_handler_5;
            }
            tmp_condition_result_7 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_7 != false) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_outline_return_value_1);
        goto try_return_handler_5;
        branch_no_7:;
        {
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_left_5 = tmp_comparison_chain_1__operand_2;
            CHECK_OBJECT(Nuitka_Cell_GET(var_prepared_constraints));
            tmp_len_arg_1 = Nuitka_Cell_GET(var_prepared_constraints);
            tmp_cmp_expr_right_5 = BUILTIN_LEN(tmp_len_arg_1);
            if (tmp_cmp_expr_right_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                goto try_except_handler_5;
            }
            tmp_outline_return_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            Py_DECREF(tmp_cmp_expr_right_5);
            if (tmp_outline_return_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                goto try_except_handler_5;
            }
            goto try_return_handler_5;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_3:;
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_outline_return_value_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_outline_return_value_1);

            exception_lineno = 346;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_outline_return_value_1);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[77];
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 347;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 347;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_4;
        CHECK_OBJECT(Nuitka_Cell_GET(var_prepared_constraints));
        tmp_truth_name_4 = CHECK_IF_TRUE(Nuitka_Cell_GET(var_prepared_constraints));
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_n_sparse);
        tmp_cmp_expr_left_6 = var_n_sparse;
        tmp_cmp_expr_right_6 = mod_consts[23];
        tmp_assign_source_19 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_sparse_jacobian;
            par_sparse_jacobian = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    branch_no_8:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(par_bounds);
        tmp_cmp_expr_left_7 = par_bounds;
        tmp_cmp_expr_right_7 = Py_None;
        tmp_condition_result_9 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        if (par_sparse_jacobian == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 355;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_8 = par_sparse_jacobian;
        tmp_cmp_expr_right_8 = Py_None;
        tmp_condition_result_10 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = Py_True;
        {
            PyObject *old = par_sparse_jacobian;
            par_sparse_jacobian = tmp_assign_source_20;
            Py_INCREF(par_sparse_jacobian);
            Py_XDECREF(old);
        }

    }
    branch_no_10:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        CHECK_OBJECT(Nuitka_Cell_GET(var_prepared_constraints));
        tmp_expression_value_6 = Nuitka_Cell_GET(var_prepared_constraints);
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[78]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 357;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bounds);
        tmp_args_element_value_22 = par_bounds;
        if (par_x0 == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 357;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_23 = par_x0;
        if (par_sparse_jacobian == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 358;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_24 = par_sparse_jacobian;
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 357;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_args_element_value_21 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 357;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 357;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_9:;
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_6;
        }
        if (var_n_vars == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 362;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_25 = var_n_vars;
        CHECK_OBJECT(Nuitka_Cell_GET(var_prepared_constraints));
        tmp_args_element_value_26 = Nuitka_Cell_GET(var_prepared_constraints);
        if (par_sparse_jacobian == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 362;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_27 = par_sparse_jacobian;
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 361;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_9, call_args);
        }

        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_21 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
        if (tmp_assign_source_22 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            exception_lineno = 361;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
        if (tmp_assign_source_23 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            exception_lineno = 361;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_24 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
        if (tmp_assign_source_24 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            exception_lineno = 361;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
        if (tmp_assign_source_25 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            exception_lineno = 361;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_25;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                    exception_lineno = 361;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[80];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            exception_lineno = 361;
            goto try_except_handler_7;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_6;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_26 = tmp_tuple_unpack_1__element_1;
        assert(var_c_eq0 == NULL);
        Py_INCREF(tmp_assign_source_26);
        var_c_eq0 = tmp_assign_source_26;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_27 = tmp_tuple_unpack_1__element_2;
        assert(var_c_ineq0 == NULL);
        Py_INCREF(tmp_assign_source_27);
        var_c_ineq0 = tmp_assign_source_27;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_28 = tmp_tuple_unpack_1__element_3;
        assert(var_J_eq0 == NULL);
        Py_INCREF(tmp_assign_source_28);
        var_J_eq0 = tmp_assign_source_28;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_29 = tmp_tuple_unpack_1__element_4;
        assert(var_J_ineq0 == NULL);
        Py_INCREF(tmp_assign_source_29);
        var_J_ineq0 = tmp_assign_source_29;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_30;
        // Tried code:
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(Nuitka_Cell_GET(var_prepared_constraints));
            tmp_iter_arg_4 = Nuitka_Cell_GET(var_prepared_constraints);
            tmp_assign_source_31 = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                goto try_except_handler_8;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;
            tmp_assign_source_32 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_32;
        }
        if (isFrameUnusable(cache_frame_9f3f756e05e20d31be3cf035706e30a3_3)) {
            Py_XDECREF(cache_frame_9f3f756e05e20d31be3cf035706e30a3_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_9f3f756e05e20d31be3cf035706e30a3_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_9f3f756e05e20d31be3cf035706e30a3_3 = MAKE_FUNCTION_FRAME(codeobj_9f3f756e05e20d31be3cf035706e30a3, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_9f3f756e05e20d31be3cf035706e30a3_3->m_type_description == NULL);
        frame_9f3f756e05e20d31be3cf035706e30a3_3 = cache_frame_9f3f756e05e20d31be3cf035706e30a3_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_9f3f756e05e20d31be3cf035706e30a3_3);
        assert(Py_REFCNT(frame_9f3f756e05e20d31be3cf035706e30a3_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_33;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_33 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_33 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 365;
                    goto try_except_handler_9;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_33;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_34;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_34 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_c;
                outline_1_var_c = tmp_assign_source_34;
                Py_INCREF(outline_1_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_28;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[81]);

            if (unlikely(tmp_called_instance_4 == NULL)) {
                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "o";
                goto try_except_handler_9;
            }
            CHECK_OBJECT(outline_1_var_c);
            tmp_args_element_value_28 = outline_1_var_c;
            frame_9f3f756e05e20d31be3cf035706e30a3_3->m_frame.f_lineno = 365;
            tmp_append_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[82], tmp_args_element_value_28);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "o";
                goto try_except_handler_9;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "o";
                goto try_except_handler_9;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_2 = "o";
            goto try_except_handler_9;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_30 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_30);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_8;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9f3f756e05e20d31be3cf035706e30a3_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9f3f756e05e20d31be3cf035706e30a3_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9f3f756e05e20d31be3cf035706e30a3_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9f3f756e05e20d31be3cf035706e30a3_3,
            type_description_2,
            outline_1_var_c
        );


        // Release cached frame if used for exception.
        if (frame_9f3f756e05e20d31be3cf035706e30a3_3 == cache_frame_9f3f756e05e20d31be3cf035706e30a3_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_9f3f756e05e20d31be3cf035706e30a3_3);
            cache_frame_9f3f756e05e20d31be3cf035706e30a3_3 = NULL;
        }

        assertFrameObject(frame_9f3f756e05e20d31be3cf035706e30a3_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
        goto try_except_handler_8;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_XDECREF(outline_1_var_c);
        outline_1_var_c = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_c);
        outline_1_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 365;
        goto frame_exception_exit_1;
        outline_result_4:;
        assert(var_canonical_all == NULL);
        var_canonical_all = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_9;
        nuitka_digit tmp_cmp_expr_right_9;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(var_canonical_all);
        tmp_len_arg_2 = var_canonical_all;
        tmp_cmp_expr_left_9 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_9 = 0;
        tmp_condition_result_11 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_29;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[83]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (var_n_vars == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 369;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_29 = var_n_vars;
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 369;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_29);
        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_canonical) == NULL);
        PyCell_SET(var_canonical, tmp_assign_source_35);

    }
    goto branch_end_11;
    branch_no_11:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_10;
        nuitka_digit tmp_cmp_expr_right_10;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT(var_canonical_all);
        tmp_len_arg_3 = var_canonical_all;
        tmp_cmp_expr_left_10 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_10 = 1;
        tmp_condition_result_12 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_canonical_all);
        tmp_expression_value_8 = var_canonical_all;
        tmp_subscript_value_1 = mod_consts[23];
        tmp_assign_source_36 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_1, 0);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_canonical) == NULL);
        PyCell_SET(var_canonical, tmp_assign_source_36);

    }
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[84]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_canonical_all);
        tmp_args_element_value_30 = var_canonical_all;
        if (par_sparse_jacobian == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 374;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_31 = par_sparse_jacobian;
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 373;
        {
            PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_canonical) == NULL);
        PyCell_SET(var_canonical, tmp_assign_source_37);

    }
    branch_end_12:;
    branch_end_11:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_expression_value_11;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (var_n_vars == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 377;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_32 = var_n_vars;
        CHECK_OBJECT(Nuitka_Cell_GET(var_objective));
        tmp_expression_value_10 = Nuitka_Cell_GET(var_objective);
        tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[86]);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_canonical));
        tmp_expression_value_11 = Nuitka_Cell_GET(var_canonical);
        tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[86]);
        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_33);

            exception_lineno = 377;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 377;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_args_element_value_33);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lagrangian_hess == NULL);
        var_lagrangian_hess = tmp_assign_source_38;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(Nuitka_Cell_GET(var_canonical));
        tmp_expression_value_12 = Nuitka_Cell_GET(var_canonical);
        tmp_cmp_expr_left_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[87]);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_11 = mod_consts[23];
        tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[88];
        assert(var_method == NULL);
        Py_INCREF(tmp_assign_source_39);
        var_method = tmp_assign_source_39;
    }
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[89];
        assert(var_method == NULL);
        Py_INCREF(tmp_assign_source_40);
        var_method = tmp_assign_source_40;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_13;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_value_8_1;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_value_9_1;
        PyObject *tmp_kw_call_value_10_1;
        PyObject *tmp_kw_call_value_11_1;
        PyObject *tmp_kw_call_value_12_1;
        PyObject *tmp_kw_call_value_13_1;
        PyObject *tmp_kw_call_value_14_1;
        PyObject *tmp_kw_call_value_15_1;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[23];
        tmp_kw_call_value_1_1 = mod_consts[23];
        tmp_kw_call_value_2_1 = mod_consts[23];
        tmp_kw_call_value_3_1 = mod_consts[23];
        tmp_kw_call_value_4_1 = mod_consts[23];
        tmp_kw_call_value_5_1 = mod_consts[23];
        CHECK_OBJECT(Nuitka_Cell_GET(var_objective));
        tmp_expression_value_13 = Nuitka_Cell_GET(var_objective);
        tmp_kw_call_value_6_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[27]);
        if (tmp_kw_call_value_6_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_objective));
        tmp_expression_value_14 = Nuitka_Cell_GET(var_objective);
        tmp_kw_call_value_7_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[28]);
        if (tmp_kw_call_value_7_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_6_1);

            exception_lineno = 389;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);

            exception_lineno = 390;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[35]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);

            exception_lineno = 390;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_objective));
        tmp_expression_value_16 = Nuitka_Cell_GET(var_objective);
        tmp_args_element_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[28]);
        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 390;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 390;
        tmp_kw_call_value_8_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_35);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_kw_call_value_8_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);

            exception_lineno = 390;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(Nuitka_Cell_GET(var_prepared_constraints));
            tmp_iter_arg_5 = Nuitka_Cell_GET(var_prepared_constraints);
            tmp_assign_source_42 = MAKE_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;
                type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                goto try_except_handler_10;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_42;
        }
        {
            PyObject *tmp_assign_source_43;
            tmp_assign_source_43 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_43;
        }
        if (isFrameUnusable(cache_frame_703116c317d2a41243ca933a86877bc8_4)) {
            Py_XDECREF(cache_frame_703116c317d2a41243ca933a86877bc8_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_703116c317d2a41243ca933a86877bc8_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_703116c317d2a41243ca933a86877bc8_4 = MAKE_FUNCTION_FRAME(codeobj_703116c317d2a41243ca933a86877bc8, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_703116c317d2a41243ca933a86877bc8_4->m_type_description == NULL);
        frame_703116c317d2a41243ca933a86877bc8_4 = cache_frame_703116c317d2a41243ca933a86877bc8_4;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_703116c317d2a41243ca933a86877bc8_4);
        assert(Py_REFCNT(frame_703116c317d2a41243ca933a86877bc8_4) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_44;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_3 = tmp_listcomp_3__$0;
            tmp_assign_source_44 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_44 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 391;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_44;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_45;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_45 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_c;
                outline_2_var_c = tmp_assign_source_45;
                Py_INCREF(outline_2_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            CHECK_OBJECT(outline_2_var_c);
            tmp_expression_value_18 = outline_2_var_c;
            tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[21]);
            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_append_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[27]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_append_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_2 = "o";
            goto try_except_handler_11;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_kw_call_value_9_1 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_kw_call_value_9_1);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto frame_return_exit_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_4;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_return_exit_4:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_10;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_703116c317d2a41243ca933a86877bc8_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_703116c317d2a41243ca933a86877bc8_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_703116c317d2a41243ca933a86877bc8_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_703116c317d2a41243ca933a86877bc8_4,
            type_description_2,
            outline_2_var_c
        );


        // Release cached frame if used for exception.
        if (frame_703116c317d2a41243ca933a86877bc8_4 == cache_frame_703116c317d2a41243ca933a86877bc8_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_703116c317d2a41243ca933a86877bc8_4);
            cache_frame_703116c317d2a41243ca933a86877bc8_4 = NULL;
        }

        assertFrameObject(frame_703116c317d2a41243ca933a86877bc8_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
        goto try_except_handler_10;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_XDECREF(outline_2_var_c);
        outline_2_var_c = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_2_var_c);
        outline_2_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 391;
        goto frame_exception_exit_1;
        outline_result_5:;
        // Tried code:
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_iter_arg_6;
            CHECK_OBJECT(Nuitka_Cell_GET(var_prepared_constraints));
            tmp_iter_arg_6 = Nuitka_Cell_GET(var_prepared_constraints);
            tmp_assign_source_46 = MAKE_ITERATOR(tmp_iter_arg_6);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;
                type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                goto try_except_handler_12;
            }
            assert(tmp_listcomp_4__$0 == NULL);
            tmp_listcomp_4__$0 = tmp_assign_source_46;
        }
        {
            PyObject *tmp_assign_source_47;
            tmp_assign_source_47 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_4__contraction == NULL);
            tmp_listcomp_4__contraction = tmp_assign_source_47;
        }
        if (isFrameUnusable(cache_frame_985a60f85f2f56368db7ad98ab833903_5)) {
            Py_XDECREF(cache_frame_985a60f85f2f56368db7ad98ab833903_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_985a60f85f2f56368db7ad98ab833903_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_985a60f85f2f56368db7ad98ab833903_5 = MAKE_FUNCTION_FRAME(codeobj_985a60f85f2f56368db7ad98ab833903, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_985a60f85f2f56368db7ad98ab833903_5->m_type_description == NULL);
        frame_985a60f85f2f56368db7ad98ab833903_5 = cache_frame_985a60f85f2f56368db7ad98ab833903_5;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_985a60f85f2f56368db7ad98ab833903_5);
        assert(Py_REFCNT(frame_985a60f85f2f56368db7ad98ab833903_5) == 2);

        // Framed code:
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_48;
            CHECK_OBJECT(tmp_listcomp_4__$0);
            tmp_next_source_4 = tmp_listcomp_4__$0;
            tmp_assign_source_48 = ITERATOR_NEXT(tmp_next_source_4);
            if (tmp_assign_source_48 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 392;
                    goto try_except_handler_13;
                }
            }

            {
                PyObject *old = tmp_listcomp_4__iter_value_0;
                tmp_listcomp_4__iter_value_0 = tmp_assign_source_48;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_49;
            CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
            tmp_assign_source_49 = tmp_listcomp_4__iter_value_0;
            {
                PyObject *old = outline_3_var_c;
                outline_3_var_c = tmp_assign_source_49;
                Py_INCREF(outline_3_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_4;
            PyObject *tmp_append_value_4;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            CHECK_OBJECT(tmp_listcomp_4__contraction);
            tmp_append_list_4 = tmp_listcomp_4__contraction;
            CHECK_OBJECT(outline_3_var_c);
            tmp_expression_value_20 = outline_3_var_c;
            tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[21]);
            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_append_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[32]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_append_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        tmp_kw_call_value_10_1 = tmp_listcomp_4__contraction;
        Py_INCREF(tmp_kw_call_value_10_1);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        goto frame_return_exit_5;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_5;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_return_exit_5:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_12;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_985a60f85f2f56368db7ad98ab833903_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_985a60f85f2f56368db7ad98ab833903_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_985a60f85f2f56368db7ad98ab833903_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_985a60f85f2f56368db7ad98ab833903_5,
            type_description_2,
            outline_3_var_c
        );


        // Release cached frame if used for exception.
        if (frame_985a60f85f2f56368db7ad98ab833903_5 == cache_frame_985a60f85f2f56368db7ad98ab833903_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_985a60f85f2f56368db7ad98ab833903_5);
            cache_frame_985a60f85f2f56368db7ad98ab833903_5 = NULL;
        }

        assertFrameObject(frame_985a60f85f2f56368db7ad98ab833903_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;
        type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
        goto try_except_handler_12;
        skip_nested_handling_4:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_XDECREF(outline_3_var_c);
        outline_3_var_c = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_3_var_c);
        outline_3_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 392;
        goto frame_exception_exit_1;
        outline_result_6:;
        // Tried code:
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_iter_arg_7;
            CHECK_OBJECT(Nuitka_Cell_GET(var_prepared_constraints));
            tmp_iter_arg_7 = Nuitka_Cell_GET(var_prepared_constraints);
            tmp_assign_source_50 = MAKE_ITERATOR(tmp_iter_arg_7);
            if (tmp_assign_source_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;
                type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                goto try_except_handler_14;
            }
            assert(tmp_listcomp_5__$0 == NULL);
            tmp_listcomp_5__$0 = tmp_assign_source_50;
        }
        {
            PyObject *tmp_assign_source_51;
            tmp_assign_source_51 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_5__contraction == NULL);
            tmp_listcomp_5__contraction = tmp_assign_source_51;
        }
        if (isFrameUnusable(cache_frame_12e368ef90c7953dade9c74e668b910e_6)) {
            Py_XDECREF(cache_frame_12e368ef90c7953dade9c74e668b910e_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_12e368ef90c7953dade9c74e668b910e_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_12e368ef90c7953dade9c74e668b910e_6 = MAKE_FUNCTION_FRAME(codeobj_12e368ef90c7953dade9c74e668b910e, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_12e368ef90c7953dade9c74e668b910e_6->m_type_description == NULL);
        frame_12e368ef90c7953dade9c74e668b910e_6 = cache_frame_12e368ef90c7953dade9c74e668b910e_6;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_12e368ef90c7953dade9c74e668b910e_6);
        assert(Py_REFCNT(frame_12e368ef90c7953dade9c74e668b910e_6) == 2);

        // Framed code:
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_52;
            CHECK_OBJECT(tmp_listcomp_5__$0);
            tmp_next_source_5 = tmp_listcomp_5__$0;
            tmp_assign_source_52 = ITERATOR_NEXT(tmp_next_source_5);
            if (tmp_assign_source_52 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_5;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 393;
                    goto try_except_handler_15;
                }
            }

            {
                PyObject *old = tmp_listcomp_5__iter_value_0;
                tmp_listcomp_5__iter_value_0 = tmp_assign_source_52;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_53;
            CHECK_OBJECT(tmp_listcomp_5__iter_value_0);
            tmp_assign_source_53 = tmp_listcomp_5__iter_value_0;
            {
                PyObject *old = outline_4_var_c;
                outline_4_var_c = tmp_assign_source_53;
                Py_INCREF(outline_4_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_5;
            PyObject *tmp_append_value_5;
            CHECK_OBJECT(tmp_listcomp_5__contraction);
            tmp_append_list_5 = tmp_listcomp_5__contraction;
            tmp_append_value_5 = mod_consts[23];
            tmp_result = LIST_APPEND0(tmp_append_list_5, tmp_append_value_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_2 = "o";
            goto try_except_handler_15;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        tmp_kw_call_value_11_1 = tmp_listcomp_5__contraction;
        Py_INCREF(tmp_kw_call_value_11_1);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(tmp_listcomp_5__$0);
        Py_DECREF(tmp_listcomp_5__$0);
        tmp_listcomp_5__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        Py_DECREF(tmp_listcomp_5__contraction);
        tmp_listcomp_5__contraction = NULL;
        Py_XDECREF(tmp_listcomp_5__iter_value_0);
        tmp_listcomp_5__iter_value_0 = NULL;
        goto frame_return_exit_6;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_5__$0);
        Py_DECREF(tmp_listcomp_5__$0);
        tmp_listcomp_5__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        Py_DECREF(tmp_listcomp_5__contraction);
        tmp_listcomp_5__contraction = NULL;
        Py_XDECREF(tmp_listcomp_5__iter_value_0);
        tmp_listcomp_5__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto frame_exception_exit_6;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_return_exit_6:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_14;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_12e368ef90c7953dade9c74e668b910e_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_12e368ef90c7953dade9c74e668b910e_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_12e368ef90c7953dade9c74e668b910e_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_12e368ef90c7953dade9c74e668b910e_6,
            type_description_2,
            outline_4_var_c
        );


        // Release cached frame if used for exception.
        if (frame_12e368ef90c7953dade9c74e668b910e_6 == cache_frame_12e368ef90c7953dade9c74e668b910e_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_12e368ef90c7953dade9c74e668b910e_6);
            cache_frame_12e368ef90c7953dade9c74e668b910e_6 = NULL;
        }

        assertFrameObject(frame_12e368ef90c7953dade9c74e668b910e_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;
        type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
        goto try_except_handler_14;
        skip_nested_handling_5:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_XDECREF(outline_4_var_c);
        outline_4_var_c = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_4_var_c);
        outline_4_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 393;
        goto frame_exception_exit_1;
        outline_result_7:;
        // Tried code:
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_iter_arg_8;
            CHECK_OBJECT(Nuitka_Cell_GET(var_prepared_constraints));
            tmp_iter_arg_8 = Nuitka_Cell_GET(var_prepared_constraints);
            tmp_assign_source_54 = MAKE_ITERATOR(tmp_iter_arg_8);
            if (tmp_assign_source_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;
                type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                goto try_except_handler_16;
            }
            assert(tmp_listcomp_6__$0 == NULL);
            tmp_listcomp_6__$0 = tmp_assign_source_54;
        }
        {
            PyObject *tmp_assign_source_55;
            tmp_assign_source_55 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_6__contraction == NULL);
            tmp_listcomp_6__contraction = tmp_assign_source_55;
        }
        if (isFrameUnusable(cache_frame_3544f967bf85c12180f755efac3324c1_7)) {
            Py_XDECREF(cache_frame_3544f967bf85c12180f755efac3324c1_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3544f967bf85c12180f755efac3324c1_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3544f967bf85c12180f755efac3324c1_7 = MAKE_FUNCTION_FRAME(codeobj_3544f967bf85c12180f755efac3324c1, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_3544f967bf85c12180f755efac3324c1_7->m_type_description == NULL);
        frame_3544f967bf85c12180f755efac3324c1_7 = cache_frame_3544f967bf85c12180f755efac3324c1_7;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3544f967bf85c12180f755efac3324c1_7);
        assert(Py_REFCNT(frame_3544f967bf85c12180f755efac3324c1_7) == 2);

        // Framed code:
        // Tried code:
        loop_start_6:;
        {
            PyObject *tmp_next_source_6;
            PyObject *tmp_assign_source_56;
            CHECK_OBJECT(tmp_listcomp_6__$0);
            tmp_next_source_6 = tmp_listcomp_6__$0;
            tmp_assign_source_56 = ITERATOR_NEXT(tmp_next_source_6);
            if (tmp_assign_source_56 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_6;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 394;
                    goto try_except_handler_17;
                }
            }

            {
                PyObject *old = tmp_listcomp_6__iter_value_0;
                tmp_listcomp_6__iter_value_0 = tmp_assign_source_56;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_57;
            CHECK_OBJECT(tmp_listcomp_6__iter_value_0);
            tmp_assign_source_57 = tmp_listcomp_6__iter_value_0;
            {
                PyObject *old = outline_5_var_c;
                outline_5_var_c = tmp_assign_source_57;
                Py_INCREF(outline_5_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_6;
            PyObject *tmp_append_value_6;
            CHECK_OBJECT(tmp_listcomp_6__contraction);
            tmp_append_list_6 = tmp_listcomp_6__contraction;
            tmp_append_value_6 = mod_consts[23];
            tmp_result = LIST_APPEND0(tmp_append_list_6, tmp_append_value_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_2 = "o";
            goto try_except_handler_17;
        }
        goto loop_start_6;
        loop_end_6:;
        CHECK_OBJECT(tmp_listcomp_6__contraction);
        tmp_kw_call_value_12_1 = tmp_listcomp_6__contraction;
        Py_INCREF(tmp_kw_call_value_12_1);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(tmp_listcomp_6__$0);
        Py_DECREF(tmp_listcomp_6__$0);
        tmp_listcomp_6__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_6__contraction);
        Py_DECREF(tmp_listcomp_6__contraction);
        tmp_listcomp_6__contraction = NULL;
        Py_XDECREF(tmp_listcomp_6__iter_value_0);
        tmp_listcomp_6__iter_value_0 = NULL;
        goto frame_return_exit_7;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_6__$0);
        Py_DECREF(tmp_listcomp_6__$0);
        tmp_listcomp_6__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_6__contraction);
        Py_DECREF(tmp_listcomp_6__contraction);
        tmp_listcomp_6__contraction = NULL;
        Py_XDECREF(tmp_listcomp_6__iter_value_0);
        tmp_listcomp_6__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto frame_exception_exit_7;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_return_exit_7:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_16;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3544f967bf85c12180f755efac3324c1_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3544f967bf85c12180f755efac3324c1_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3544f967bf85c12180f755efac3324c1_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3544f967bf85c12180f755efac3324c1_7,
            type_description_2,
            outline_5_var_c
        );


        // Release cached frame if used for exception.
        if (frame_3544f967bf85c12180f755efac3324c1_7 == cache_frame_3544f967bf85c12180f755efac3324c1_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_3544f967bf85c12180f755efac3324c1_7);
            cache_frame_3544f967bf85c12180f755efac3324c1_7 = NULL;
        }

        assertFrameObject(frame_3544f967bf85c12180f755efac3324c1_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;
        type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
        goto try_except_handler_16;
        skip_nested_handling_6:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_XDECREF(outline_5_var_c);
        outline_5_var_c = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_5_var_c);
        outline_5_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 394;
        goto frame_exception_exit_1;
        outline_result_8:;
        // Tried code:
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_iter_arg_9;
            CHECK_OBJECT(Nuitka_Cell_GET(var_prepared_constraints));
            tmp_iter_arg_9 = Nuitka_Cell_GET(var_prepared_constraints);
            tmp_assign_source_58 = MAKE_ITERATOR(tmp_iter_arg_9);
            if (tmp_assign_source_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                goto try_except_handler_18;
            }
            assert(tmp_listcomp_7__$0 == NULL);
            tmp_listcomp_7__$0 = tmp_assign_source_58;
        }
        {
            PyObject *tmp_assign_source_59;
            tmp_assign_source_59 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_7__contraction == NULL);
            tmp_listcomp_7__contraction = tmp_assign_source_59;
        }
        if (isFrameUnusable(cache_frame_46060ccef3cf735a83fa2c64944f7421_8)) {
            Py_XDECREF(cache_frame_46060ccef3cf735a83fa2c64944f7421_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_46060ccef3cf735a83fa2c64944f7421_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_46060ccef3cf735a83fa2c64944f7421_8 = MAKE_FUNCTION_FRAME(codeobj_46060ccef3cf735a83fa2c64944f7421, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_46060ccef3cf735a83fa2c64944f7421_8->m_type_description == NULL);
        frame_46060ccef3cf735a83fa2c64944f7421_8 = cache_frame_46060ccef3cf735a83fa2c64944f7421_8;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_46060ccef3cf735a83fa2c64944f7421_8);
        assert(Py_REFCNT(frame_46060ccef3cf735a83fa2c64944f7421_8) == 2);

        // Framed code:
        // Tried code:
        loop_start_7:;
        {
            PyObject *tmp_next_source_7;
            PyObject *tmp_assign_source_60;
            CHECK_OBJECT(tmp_listcomp_7__$0);
            tmp_next_source_7 = tmp_listcomp_7__$0;
            tmp_assign_source_60 = ITERATOR_NEXT(tmp_next_source_7);
            if (tmp_assign_source_60 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_7;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 395;
                    goto try_except_handler_19;
                }
            }

            {
                PyObject *old = tmp_listcomp_7__iter_value_0;
                tmp_listcomp_7__iter_value_0 = tmp_assign_source_60;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_61;
            CHECK_OBJECT(tmp_listcomp_7__iter_value_0);
            tmp_assign_source_61 = tmp_listcomp_7__iter_value_0;
            {
                PyObject *old = outline_6_var_c;
                outline_6_var_c = tmp_assign_source_61;
                Py_INCREF(outline_6_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_7;
            PyObject *tmp_append_value_7;
            CHECK_OBJECT(tmp_listcomp_7__contraction);
            tmp_append_list_7 = tmp_listcomp_7__contraction;
            tmp_append_value_7 = mod_consts[23];
            tmp_result = LIST_APPEND0(tmp_append_list_7, tmp_append_value_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_2 = "o";
            goto try_except_handler_19;
        }
        goto loop_start_7;
        loop_end_7:;
        CHECK_OBJECT(tmp_listcomp_7__contraction);
        tmp_kw_call_value_13_1 = tmp_listcomp_7__contraction;
        Py_INCREF(tmp_kw_call_value_13_1);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        CHECK_OBJECT(tmp_listcomp_7__$0);
        Py_DECREF(tmp_listcomp_7__$0);
        tmp_listcomp_7__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_7__contraction);
        Py_DECREF(tmp_listcomp_7__contraction);
        tmp_listcomp_7__contraction = NULL;
        Py_XDECREF(tmp_listcomp_7__iter_value_0);
        tmp_listcomp_7__iter_value_0 = NULL;
        goto frame_return_exit_8;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_7__$0);
        Py_DECREF(tmp_listcomp_7__$0);
        tmp_listcomp_7__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_7__contraction);
        Py_DECREF(tmp_listcomp_7__contraction);
        tmp_listcomp_7__contraction = NULL;
        Py_XDECREF(tmp_listcomp_7__iter_value_0);
        tmp_listcomp_7__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto frame_exception_exit_8;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;
        frame_return_exit_8:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_18;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_46060ccef3cf735a83fa2c64944f7421_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_46060ccef3cf735a83fa2c64944f7421_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_46060ccef3cf735a83fa2c64944f7421_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_46060ccef3cf735a83fa2c64944f7421_8,
            type_description_2,
            outline_6_var_c
        );


        // Release cached frame if used for exception.
        if (frame_46060ccef3cf735a83fa2c64944f7421_8 == cache_frame_46060ccef3cf735a83fa2c64944f7421_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_46060ccef3cf735a83fa2c64944f7421_8);
            cache_frame_46060ccef3cf735a83fa2c64944f7421_8 = NULL;
        }

        assertFrameObject(frame_46060ccef3cf735a83fa2c64944f7421_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;
        type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
        goto try_except_handler_18;
        skip_nested_handling_7:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_XDECREF(outline_6_var_c);
        outline_6_var_c = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_6_var_c);
        outline_6_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 395;
        goto frame_exception_exit_1;
        outline_result_9:;
        // Tried code:
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_iter_arg_10;
            CHECK_OBJECT(Nuitka_Cell_GET(var_prepared_constraints));
            tmp_iter_arg_10 = Nuitka_Cell_GET(var_prepared_constraints);
            tmp_assign_source_62 = MAKE_ITERATOR(tmp_iter_arg_10);
            if (tmp_assign_source_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;
                type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                goto try_except_handler_20;
            }
            assert(tmp_listcomp_8__$0 == NULL);
            tmp_listcomp_8__$0 = tmp_assign_source_62;
        }
        {
            PyObject *tmp_assign_source_63;
            tmp_assign_source_63 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_8__contraction == NULL);
            tmp_listcomp_8__contraction = tmp_assign_source_63;
        }
        if (isFrameUnusable(cache_frame_06254ba35d7cdd62d1a4b28775954c89_9)) {
            Py_XDECREF(cache_frame_06254ba35d7cdd62d1a4b28775954c89_9);

#if _DEBUG_REFCOUNTS
            if (cache_frame_06254ba35d7cdd62d1a4b28775954c89_9 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_06254ba35d7cdd62d1a4b28775954c89_9 = MAKE_FUNCTION_FRAME(codeobj_06254ba35d7cdd62d1a4b28775954c89, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_06254ba35d7cdd62d1a4b28775954c89_9->m_type_description == NULL);
        frame_06254ba35d7cdd62d1a4b28775954c89_9 = cache_frame_06254ba35d7cdd62d1a4b28775954c89_9;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_06254ba35d7cdd62d1a4b28775954c89_9);
        assert(Py_REFCNT(frame_06254ba35d7cdd62d1a4b28775954c89_9) == 2);

        // Framed code:
        // Tried code:
        loop_start_8:;
        {
            PyObject *tmp_next_source_8;
            PyObject *tmp_assign_source_64;
            CHECK_OBJECT(tmp_listcomp_8__$0);
            tmp_next_source_8 = tmp_listcomp_8__$0;
            tmp_assign_source_64 = ITERATOR_NEXT(tmp_next_source_8);
            if (tmp_assign_source_64 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_8;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 396;
                    goto try_except_handler_21;
                }
            }

            {
                PyObject *old = tmp_listcomp_8__iter_value_0;
                tmp_listcomp_8__iter_value_0 = tmp_assign_source_64;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_65;
            CHECK_OBJECT(tmp_listcomp_8__iter_value_0);
            tmp_assign_source_65 = tmp_listcomp_8__iter_value_0;
            {
                PyObject *old = outline_7_var_c;
                outline_7_var_c = tmp_assign_source_65;
                Py_INCREF(outline_7_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_8;
            PyObject *tmp_append_value_8;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            CHECK_OBJECT(tmp_listcomp_8__contraction);
            tmp_append_list_8 = tmp_listcomp_8__contraction;
            CHECK_OBJECT(outline_7_var_c);
            tmp_expression_value_22 = outline_7_var_c;
            tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[21]);
            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;
                type_description_2 = "o";
                goto try_except_handler_21;
            }
            tmp_append_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[30]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_append_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;
                type_description_2 = "o";
                goto try_except_handler_21;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_8, tmp_append_value_8);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;
                type_description_2 = "o";
                goto try_except_handler_21;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_2 = "o";
            goto try_except_handler_21;
        }
        goto loop_start_8;
        loop_end_8:;
        CHECK_OBJECT(tmp_listcomp_8__contraction);
        tmp_kw_call_value_14_1 = tmp_listcomp_8__contraction;
        Py_INCREF(tmp_kw_call_value_14_1);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(tmp_listcomp_8__$0);
        Py_DECREF(tmp_listcomp_8__$0);
        tmp_listcomp_8__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_8__contraction);
        Py_DECREF(tmp_listcomp_8__contraction);
        tmp_listcomp_8__contraction = NULL;
        Py_XDECREF(tmp_listcomp_8__iter_value_0);
        tmp_listcomp_8__iter_value_0 = NULL;
        goto frame_return_exit_9;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_8__$0);
        Py_DECREF(tmp_listcomp_8__$0);
        tmp_listcomp_8__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_8__contraction);
        Py_DECREF(tmp_listcomp_8__contraction);
        tmp_listcomp_8__contraction = NULL;
        Py_XDECREF(tmp_listcomp_8__iter_value_0);
        tmp_listcomp_8__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto frame_exception_exit_9;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;
        frame_return_exit_9:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_20;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_06254ba35d7cdd62d1a4b28775954c89_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_06254ba35d7cdd62d1a4b28775954c89_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_06254ba35d7cdd62d1a4b28775954c89_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_06254ba35d7cdd62d1a4b28775954c89_9,
            type_description_2,
            outline_7_var_c
        );


        // Release cached frame if used for exception.
        if (frame_06254ba35d7cdd62d1a4b28775954c89_9 == cache_frame_06254ba35d7cdd62d1a4b28775954c89_9) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_06254ba35d7cdd62d1a4b28775954c89_9);
            cache_frame_06254ba35d7cdd62d1a4b28775954c89_9 = NULL;
        }

        assertFrameObject(frame_06254ba35d7cdd62d1a4b28775954c89_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;
        type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
        goto try_except_handler_20;
        skip_nested_handling_8:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_XDECREF(outline_7_var_c);
        outline_7_var_c = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_7_var_c);
        outline_7_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 396;
        goto frame_exception_exit_1;
        outline_result_10:;
        CHECK_OBJECT(var_method);
        tmp_kw_call_value_15_1 = var_method;
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 386;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1, tmp_kw_call_value_12_1, tmp_kw_call_value_13_1, tmp_kw_call_value_14_1, tmp_kw_call_value_15_1};

            tmp_assign_source_41 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_13, kw_values, mod_consts[91]);
        }

        Py_DECREF(tmp_kw_call_value_6_1);
        Py_DECREF(tmp_kw_call_value_7_1);
        Py_DECREF(tmp_kw_call_value_8_1);
        Py_DECREF(tmp_kw_call_value_9_1);
        Py_DECREF(tmp_kw_call_value_10_1);
        Py_DECREF(tmp_kw_call_value_11_1);
        Py_DECREF(tmp_kw_call_value_12_1);
        Py_DECREF(tmp_kw_call_value_13_1);
        Py_DECREF(tmp_kw_call_value_14_1);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_state == NULL);
        var_state = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_instance_5;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 400;
        tmp_assign_source_66 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[47]);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_start_time) == NULL);
        PyCell_SET(var_start_time, tmp_assign_source_66);

    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(var_method);
        tmp_cmp_expr_left_12 = var_method;
        tmp_cmp_expr_right_12 = mod_consts[88];
        tmp_condition_result_14 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_67;
        struct Nuitka_CellObject *tmp_closure_2[8];

        tmp_closure_2[0] = par_callback;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = par_gtol;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = par_maxiter;
        Py_INCREF(tmp_closure_2[2]);
        tmp_closure_2[3] = var_objective;
        Py_INCREF(tmp_closure_2[3]);
        tmp_closure_2[4] = var_prepared_constraints;
        Py_INCREF(tmp_closure_2[4]);
        tmp_closure_2[5] = var_start_time;
        Py_INCREF(tmp_closure_2[5]);
        tmp_closure_2[6] = par_verbose;
        Py_INCREF(tmp_closure_2[6]);
        tmp_closure_2[7] = par_xtol;
        Py_INCREF(tmp_closure_2[7]);

        tmp_assign_source_67 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__1_stop_criteria(tmp_closure_2);

        assert(var_stop_criteria == NULL);
        var_stop_criteria = tmp_assign_source_67;
    }
    goto branch_end_14;
    branch_no_14:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(var_method);
        tmp_cmp_expr_left_13 = var_method;
        tmp_cmp_expr_right_13 = mod_consts[89];
        tmp_condition_result_15 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_68;
        struct Nuitka_CellObject *tmp_closure_3[9];

        tmp_closure_3[0] = par_barrier_tol;
        Py_INCREF(tmp_closure_3[0]);
        tmp_closure_3[1] = par_callback;
        Py_INCREF(tmp_closure_3[1]);
        tmp_closure_3[2] = par_gtol;
        Py_INCREF(tmp_closure_3[2]);
        tmp_closure_3[3] = par_maxiter;
        Py_INCREF(tmp_closure_3[3]);
        tmp_closure_3[4] = var_objective;
        Py_INCREF(tmp_closure_3[4]);
        tmp_closure_3[5] = var_prepared_constraints;
        Py_INCREF(tmp_closure_3[5]);
        tmp_closure_3[6] = var_start_time;
        Py_INCREF(tmp_closure_3[6]);
        tmp_closure_3[7] = par_verbose;
        Py_INCREF(tmp_closure_3[7]);
        tmp_closure_3[8] = par_xtol;
        Py_INCREF(tmp_closure_3[8]);

        tmp_assign_source_68 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__2_stop_criteria(tmp_closure_3);

        assert(var_stop_criteria == NULL);
        var_stop_criteria = tmp_assign_source_68;
    }
    branch_no_15:;
    branch_end_14:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        if (Nuitka_Cell_GET(par_verbose) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 480;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_14 = Nuitka_Cell_GET(par_verbose);
        tmp_cmp_expr_right_14 = mod_consts[95];
        tmp_condition_result_16 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_3;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 481;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[97]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_16;
    branch_no_16:;
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        if (Nuitka_Cell_GET(par_verbose) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 482;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_15 = Nuitka_Cell_GET(par_verbose);
        tmp_cmp_expr_right_15 = mod_consts[95];
        tmp_condition_result_17 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        CHECK_OBJECT(var_method);
        tmp_cmp_expr_left_16 = var_method;
        tmp_cmp_expr_right_16 = mod_consts[88];
        tmp_condition_result_18 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_4;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 484;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[97]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_18;
    branch_no_18:;
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        CHECK_OBJECT(var_method);
        tmp_cmp_expr_left_17 = var_method;
        tmp_cmp_expr_right_17 = mod_consts[89];
        tmp_condition_result_19 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_5;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 486;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[97]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_19:;
    branch_end_18:;
    branch_no_17:;
    branch_end_16:;
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        CHECK_OBJECT(var_method);
        tmp_cmp_expr_left_18 = var_method;
        tmp_cmp_expr_right_18 = mod_consts[88];
        tmp_condition_result_20 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_69;
        struct Nuitka_CellObject *tmp_closure_4[2];

        tmp_closure_4[0] = var_canonical;
        Py_INCREF(tmp_closure_4[0]);
        tmp_closure_4[1] = var_objective;
        Py_INCREF(tmp_closure_4[1]);

        tmp_assign_source_69 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__3_fun_and_constr(tmp_closure_4);

        assert(var_fun_and_constr == NULL);
        var_fun_and_constr = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        struct Nuitka_CellObject *tmp_closure_5[2];

        tmp_closure_5[0] = var_canonical;
        Py_INCREF(tmp_closure_5[0]);
        tmp_closure_5[1] = var_objective;
        Py_INCREF(tmp_closure_5[1]);

        tmp_assign_source_70 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__4_grad_and_jac(tmp_closure_5);

        assert(var_grad_and_jac == NULL);
        var_grad_and_jac = tmp_assign_source_70;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_iter_arg_11;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(var_fun_and_constr);
        tmp_args_element_value_36 = var_fun_and_constr;
        CHECK_OBJECT(var_grad_and_jac);
        tmp_args_element_value_37 = var_grad_and_jac;
        CHECK_OBJECT(var_lagrangian_hess);
        tmp_args_element_value_38 = var_lagrangian_hess;
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 502;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_22;
        }

        tmp_args_element_value_39 = par_x0;
        CHECK_OBJECT(Nuitka_Cell_GET(var_objective));
        tmp_expression_value_23 = Nuitka_Cell_GET(var_objective);
        tmp_args_element_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[27]);
        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_objective));
        tmp_expression_value_24 = Nuitka_Cell_GET(var_objective);
        tmp_args_element_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[28]);
        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_40);

            exception_lineno = 502;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(var_c_eq0);
        tmp_args_element_value_42 = var_c_eq0;
        CHECK_OBJECT(var_J_eq0);
        tmp_args_element_value_43 = var_J_eq0;
        if (var_stop_criteria == NULL) {
            Py_DECREF(tmp_args_element_value_40);
            Py_DECREF(tmp_args_element_value_41);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 504;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_22;
        }

        tmp_args_element_value_44 = var_stop_criteria;
        CHECK_OBJECT(var_state);
        tmp_args_element_value_45 = var_state;
        CHECK_OBJECT(par_initial_constr_penalty);
        tmp_args_element_value_46 = par_initial_constr_penalty;
        CHECK_OBJECT(par_initial_tr_radius);
        tmp_args_element_value_47 = par_initial_tr_radius;
        CHECK_OBJECT(par_factorization_method);
        tmp_args_element_value_48 = par_factorization_method;
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 500;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48};
            tmp_iter_arg_11 = CALL_FUNCTION_WITH_ARGS13(tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_args_element_value_40);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_iter_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_22;
        }
        tmp_assign_source_71 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_11);
        Py_DECREF(tmp_iter_arg_11);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_22;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_71;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_72 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_72 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            exception_lineno = 500;
            goto try_except_handler_23;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_73 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_73 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            exception_lineno = 500;
            goto try_except_handler_23;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_73;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                    exception_lineno = 500;
                    goto try_except_handler_23;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[45];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            exception_lineno = 500;
            goto try_except_handler_23;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_22;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_74 = tmp_tuple_unpack_2__element_1;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_74);
        var__ = tmp_assign_source_74;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_75 = tmp_tuple_unpack_2__element_2;
        assert(var_result == NULL);
        Py_INCREF(tmp_assign_source_75);
        var_result = tmp_assign_source_75;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    goto branch_end_20;
    branch_no_20:;
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        CHECK_OBJECT(var_method);
        tmp_cmp_expr_left_19 = var_method;
        tmp_cmp_expr_right_19 = mod_consts[89];
        tmp_condition_result_21 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    // Tried code:
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_iter_arg_12;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_objective));
        tmp_expression_value_25 = Nuitka_Cell_GET(var_objective);
        tmp_args_element_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[21]);
        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_objective));
        tmp_expression_value_26 = Nuitka_Cell_GET(var_objective);
        tmp_args_element_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[29]);
        if (tmp_args_element_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_49);

            exception_lineno = 510;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(var_lagrangian_hess);
        tmp_args_element_value_51 = var_lagrangian_hess;
        if (var_n_vars == NULL) {
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_50);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 511;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_24;
        }

        tmp_args_element_value_52 = var_n_vars;
        CHECK_OBJECT(Nuitka_Cell_GET(var_canonical));
        tmp_expression_value_27 = Nuitka_Cell_GET(var_canonical);
        tmp_args_element_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[87]);
        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_50);

            exception_lineno = 511;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_canonical));
        tmp_expression_value_28 = Nuitka_Cell_GET(var_canonical);
        tmp_args_element_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[104]);
        if (tmp_args_element_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_53);

            exception_lineno = 511;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_canonical));
        tmp_expression_value_29 = Nuitka_Cell_GET(var_canonical);
        tmp_args_element_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[21]);
        if (tmp_args_element_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_54);

            exception_lineno = 512;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_canonical));
        tmp_expression_value_30 = Nuitka_Cell_GET(var_canonical);
        tmp_args_element_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[33]);
        if (tmp_args_element_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_54);
            Py_DECREF(tmp_args_element_value_55);

            exception_lineno = 512;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_24;
        }
        if (par_x0 == NULL) {
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_54);
            Py_DECREF(tmp_args_element_value_55);
            Py_DECREF(tmp_args_element_value_56);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 513;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_24;
        }

        tmp_args_element_value_57 = par_x0;
        CHECK_OBJECT(Nuitka_Cell_GET(var_objective));
        tmp_expression_value_31 = Nuitka_Cell_GET(var_objective);
        tmp_args_element_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[27]);
        if (tmp_args_element_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_54);
            Py_DECREF(tmp_args_element_value_55);
            Py_DECREF(tmp_args_element_value_56);

            exception_lineno = 513;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_objective));
        tmp_expression_value_32 = Nuitka_Cell_GET(var_objective);
        tmp_args_element_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[28]);
        if (tmp_args_element_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_54);
            Py_DECREF(tmp_args_element_value_55);
            Py_DECREF(tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_58);

            exception_lineno = 513;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(var_c_ineq0);
        tmp_args_element_value_60 = var_c_ineq0;
        CHECK_OBJECT(var_J_ineq0);
        tmp_args_element_value_61 = var_J_ineq0;
        CHECK_OBJECT(var_c_eq0);
        tmp_args_element_value_62 = var_c_eq0;
        CHECK_OBJECT(var_J_eq0);
        tmp_args_element_value_63 = var_J_eq0;
        if (var_stop_criteria == NULL) {
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_54);
            Py_DECREF(tmp_args_element_value_55);
            Py_DECREF(tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_args_element_value_59);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 515;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_24;
        }

        tmp_args_element_value_64 = var_stop_criteria;
        CHECK_OBJECT(Nuitka_Cell_GET(var_canonical));
        tmp_expression_value_33 = Nuitka_Cell_GET(var_canonical);
        tmp_args_element_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[68]);
        if (tmp_args_element_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_54);
            Py_DECREF(tmp_args_element_value_55);
            Py_DECREF(tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_args_element_value_59);

            exception_lineno = 516;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_xtol));
        tmp_args_element_value_66 = Nuitka_Cell_GET(par_xtol);
        CHECK_OBJECT(var_state);
        tmp_args_element_value_67 = var_state;
        CHECK_OBJECT(par_initial_barrier_parameter);
        tmp_args_element_value_68 = par_initial_barrier_parameter;
        CHECK_OBJECT(par_initial_barrier_tolerance);
        tmp_args_element_value_69 = par_initial_barrier_tolerance;
        CHECK_OBJECT(par_initial_constr_penalty);
        tmp_args_element_value_70 = par_initial_constr_penalty;
        CHECK_OBJECT(par_initial_tr_radius);
        tmp_args_element_value_71 = par_initial_tr_radius;
        CHECK_OBJECT(par_factorization_method);
        tmp_args_element_value_72 = par_factorization_method;
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 509;
        {
            PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56, tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72};
            tmp_iter_arg_12 = CALL_FUNCTION_WITH_ARGS24(tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_args_element_value_49);
        Py_DECREF(tmp_args_element_value_50);
        Py_DECREF(tmp_args_element_value_53);
        Py_DECREF(tmp_args_element_value_54);
        Py_DECREF(tmp_args_element_value_55);
        Py_DECREF(tmp_args_element_value_56);
        Py_DECREF(tmp_args_element_value_58);
        Py_DECREF(tmp_args_element_value_59);
        Py_DECREF(tmp_args_element_value_65);
        if (tmp_iter_arg_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_24;
        }
        tmp_assign_source_76 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_12);
        Py_DECREF(tmp_iter_arg_12);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto try_except_handler_24;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_76;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_77 = UNPACK_NEXT(tmp_unpack_7, 0, 2);
        if (tmp_assign_source_77 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            exception_lineno = 509;
            goto try_except_handler_25;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_78 = UNPACK_NEXT(tmp_unpack_8, 1, 2);
        if (tmp_assign_source_78 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            exception_lineno = 509;
            goto try_except_handler_25;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_78;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
                    exception_lineno = 509;
                    goto try_except_handler_25;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[45];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            exception_lineno = 509;
            goto try_except_handler_25;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_24;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_79;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_79 = tmp_tuple_unpack_3__element_1;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_79);
        var__ = tmp_assign_source_79;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_80;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_80 = tmp_tuple_unpack_3__element_2;
        assert(var_result == NULL);
        Py_INCREF(tmp_assign_source_80);
        var_result = tmp_assign_source_80;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    branch_no_21:;
    branch_end_20:;
    {
        PyObject *tmp_assattr_value_1;
        bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_assattr_target_1;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 524;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_34 = var_result;
        tmp_cmp_expr_left_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[106]);
        if (tmp_cmp_expr_left_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_20 = mod_consts[107];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_20, tmp_cmp_expr_left_20);
        Py_DECREF(tmp_cmp_expr_left_20);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_22 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assattr_value_1 = Py_True;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assattr_value_1 = Py_False;
        condexpr_end_1:;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 524;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = var_result;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[108], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 525;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_36 = var_result;
        tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[106]);
        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (var_result == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 525;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = var_result;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[110], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_assattr_target_3;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 528;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_37 = var_result;
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[15]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (var_result == NULL) {
            Py_DECREF(tmp_assattr_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 528;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = var_result;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[52], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        if (Nuitka_Cell_GET(par_verbose) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 530;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_21 = Nuitka_Cell_GET(par_verbose);
        tmp_cmp_expr_right_21 = mod_consts[95];
        tmp_condition_result_23 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
        if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_6;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 531;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[111]);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto branch_end_22;
    branch_no_22:;
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        if (Nuitka_Cell_GET(par_verbose) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 532;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_22 = Nuitka_Cell_GET(par_verbose);
        tmp_cmp_expr_right_22 = mod_consts[95];
        tmp_condition_result_24 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        CHECK_OBJECT(var_method);
        tmp_cmp_expr_left_23 = var_method;
        tmp_cmp_expr_right_23 = mod_consts[88];
        tmp_condition_result_25 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
        if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_7;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 534;
        tmp_call_result_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[111]);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    goto branch_end_24;
    branch_no_24:;
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_24;
        PyObject *tmp_cmp_expr_right_24;
        CHECK_OBJECT(var_method);
        tmp_cmp_expr_left_24 = var_method;
        tmp_cmp_expr_right_24 = mod_consts[89];
        tmp_condition_result_26 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
        if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_8;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 536;
        tmp_call_result_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[111]);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_25:;
    branch_end_24:;
    branch_no_23:;
    branch_end_22:;
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        if (Nuitka_Cell_GET(par_verbose) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 537;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_25 = Nuitka_Cell_GET(par_verbose);
        tmp_cmp_expr_right_25 = mod_consts[16];
        tmp_condition_result_27 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
        if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_expression_value_38;
        tmp_called_value_17 = LOOKUP_BUILTIN(mod_consts[112]);
        assert(tmp_called_value_17 != NULL);
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 538;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_38 = var_result;
        tmp_args_element_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[110]);
        if (tmp_args_element_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 538;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_73);
        Py_DECREF(tmp_args_element_value_73);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_kw_call_arg_value_5_1;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_kw_call_arg_value_6_1;
        PyObject *tmp_expression_value_44;
        tmp_called_value_18 = LOOKUP_BUILTIN(mod_consts[112]);
        assert(tmp_called_value_18 != NULL);
        tmp_kw_call_arg_value_0_1 = mod_consts[113];
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 542;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_39 = var_result;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[15]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (var_result == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 542;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_40 = var_result;
        tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[17]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 542;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (var_result == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 542;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_41 = var_result;
        tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[51]);
        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);

            exception_lineno = 542;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (var_result == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 543;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_42 = var_result;
        tmp_kw_call_arg_value_4_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[42]);
        if (tmp_kw_call_arg_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);

            exception_lineno = 543;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (var_result == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 543;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_43 = var_result;
        tmp_kw_call_arg_value_5_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[43]);
        if (tmp_kw_call_arg_value_5_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 543;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        if (var_result == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 544;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_44 = var_result;
        tmp_kw_call_arg_value_6_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[48]);
        if (tmp_kw_call_arg_value_6_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);

            exception_lineno = 544;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 539;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1};
            tmp_args_element_value_74 = CALL_FUNCTION_WITH_ARGS7(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        Py_DECREF(tmp_kw_call_arg_value_5_1);
        Py_DECREF(tmp_kw_call_arg_value_6_1);
        if (tmp_args_element_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        frame_bdb28a94af68716e499105f3835709f8->m_frame.f_lineno = 539;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_74);
        Py_DECREF(tmp_args_element_value_74);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_no_26:;
    if (var_result == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 545;
        type_description_1 = "oooooooocccocccoooooooooccoooooocooocooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_9;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bdb28a94af68716e499105f3835709f8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bdb28a94af68716e499105f3835709f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bdb28a94af68716e499105f3835709f8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bdb28a94af68716e499105f3835709f8,
        type_description_1,
        par_fun,
        par_x0,
        par_args,
        par_grad,
        par_hess,
        par_hessp,
        par_bounds,
        par_constraints,
        par_xtol,
        par_gtol,
        par_barrier_tol,
        par_sparse_jacobian,
        par_callback,
        par_maxiter,
        par_verbose,
        par_finite_diff_rel_step,
        par_initial_constr_penalty,
        par_initial_tr_radius,
        par_initial_barrier_parameter,
        par_initial_barrier_tolerance,
        par_factorization_method,
        par_disp,
        var_n_vars,
        var_finite_diff_bounds,
        var_objective,
        var_prepared_constraints,
        var_n_sparse,
        var_c_eq0,
        var_c_ineq0,
        var_J_eq0,
        var_J_ineq0,
        var_canonical_all,
        var_canonical,
        var_lagrangian_hess,
        var_method,
        var_state,
        var_start_time,
        var_stop_criteria,
        var_fun_and_constr,
        var_grad_and_jac,
        var__,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_bdb28a94af68716e499105f3835709f8 == cache_frame_bdb28a94af68716e499105f3835709f8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bdb28a94af68716e499105f3835709f8);
        cache_frame_bdb28a94af68716e499105f3835709f8 = NULL;
    }

    assertFrameObject(frame_bdb28a94af68716e499105f3835709f8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_9:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_x0);
    par_x0 = NULL;
    CHECK_OBJECT(par_hess);
    Py_DECREF(par_hess);
    par_hess = NULL;
    CHECK_OBJECT(par_constraints);
    Py_DECREF(par_constraints);
    par_constraints = NULL;
    Py_XDECREF(par_sparse_jacobian);
    par_sparse_jacobian = NULL;
    CHECK_OBJECT(par_verbose);
    Py_DECREF(par_verbose);
    par_verbose = NULL;
    Py_XDECREF(var_n_vars);
    var_n_vars = NULL;
    Py_XDECREF(var_finite_diff_bounds);
    var_finite_diff_bounds = NULL;
    CHECK_OBJECT(var_objective);
    Py_DECREF(var_objective);
    var_objective = NULL;
    CHECK_OBJECT(var_prepared_constraints);
    Py_DECREF(var_prepared_constraints);
    var_prepared_constraints = NULL;
    CHECK_OBJECT(var_n_sparse);
    Py_DECREF(var_n_sparse);
    var_n_sparse = NULL;
    Py_XDECREF(var_c_eq0);
    var_c_eq0 = NULL;
    Py_XDECREF(var_c_ineq0);
    var_c_ineq0 = NULL;
    Py_XDECREF(var_J_eq0);
    var_J_eq0 = NULL;
    Py_XDECREF(var_J_ineq0);
    var_J_ineq0 = NULL;
    CHECK_OBJECT(var_canonical_all);
    Py_DECREF(var_canonical_all);
    var_canonical_all = NULL;
    CHECK_OBJECT(var_canonical);
    Py_DECREF(var_canonical);
    var_canonical = NULL;
    Py_XDECREF(var_lagrangian_hess);
    var_lagrangian_hess = NULL;
    CHECK_OBJECT(var_method);
    Py_DECREF(var_method);
    var_method = NULL;
    Py_XDECREF(var_state);
    var_state = NULL;
    CHECK_OBJECT(var_start_time);
    Py_DECREF(var_start_time);
    var_start_time = NULL;
    Py_XDECREF(var_stop_criteria);
    var_stop_criteria = NULL;
    Py_XDECREF(var_fun_and_constr);
    var_fun_and_constr = NULL;
    Py_XDECREF(var_grad_and_jac);
    var_grad_and_jac = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_x0);
    par_x0 = NULL;
    Py_XDECREF(par_hess);
    par_hess = NULL;
    Py_XDECREF(par_constraints);
    par_constraints = NULL;
    Py_XDECREF(par_sparse_jacobian);
    par_sparse_jacobian = NULL;
    CHECK_OBJECT(par_verbose);
    Py_DECREF(par_verbose);
    par_verbose = NULL;
    Py_XDECREF(var_n_vars);
    var_n_vars = NULL;
    Py_XDECREF(var_finite_diff_bounds);
    var_finite_diff_bounds = NULL;
    CHECK_OBJECT(var_objective);
    Py_DECREF(var_objective);
    var_objective = NULL;
    CHECK_OBJECT(var_prepared_constraints);
    Py_DECREF(var_prepared_constraints);
    var_prepared_constraints = NULL;
    Py_XDECREF(var_n_sparse);
    var_n_sparse = NULL;
    Py_XDECREF(var_c_eq0);
    var_c_eq0 = NULL;
    Py_XDECREF(var_c_ineq0);
    var_c_ineq0 = NULL;
    Py_XDECREF(var_J_eq0);
    var_J_eq0 = NULL;
    Py_XDECREF(var_J_ineq0);
    var_J_ineq0 = NULL;
    Py_XDECREF(var_canonical_all);
    var_canonical_all = NULL;
    CHECK_OBJECT(var_canonical);
    Py_DECREF(var_canonical);
    var_canonical = NULL;
    Py_XDECREF(var_lagrangian_hess);
    var_lagrangian_hess = NULL;
    Py_XDECREF(var_method);
    var_method = NULL;
    Py_XDECREF(var_state);
    var_state = NULL;
    CHECK_OBJECT(var_start_time);
    Py_DECREF(var_start_time);
    var_start_time = NULL;
    Py_XDECREF(var_stop_criteria);
    var_stop_criteria = NULL;
    Py_XDECREF(var_fun_and_constr);
    var_fun_and_constr = NULL;
    Py_XDECREF(var_grad_and_jac);
    var_grad_and_jac = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_grad);
    Py_DECREF(par_grad);
    CHECK_OBJECT(par_hessp);
    Py_DECREF(par_hessp);
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    CHECK_OBJECT(par_xtol);
    Py_DECREF(par_xtol);
    CHECK_OBJECT(par_gtol);
    Py_DECREF(par_gtol);
    CHECK_OBJECT(par_barrier_tol);
    Py_DECREF(par_barrier_tol);
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    CHECK_OBJECT(par_finite_diff_rel_step);
    Py_DECREF(par_finite_diff_rel_step);
    CHECK_OBJECT(par_initial_constr_penalty);
    Py_DECREF(par_initial_constr_penalty);
    CHECK_OBJECT(par_initial_tr_radius);
    Py_DECREF(par_initial_tr_radius);
    CHECK_OBJECT(par_initial_barrier_parameter);
    Py_DECREF(par_initial_barrier_parameter);
    CHECK_OBJECT(par_initial_barrier_tolerance);
    Py_DECREF(par_initial_barrier_tolerance);
    CHECK_OBJECT(par_factorization_method);
    Py_DECREF(par_factorization_method);
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_grad);
    Py_DECREF(par_grad);
    CHECK_OBJECT(par_hessp);
    Py_DECREF(par_hessp);
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    CHECK_OBJECT(par_xtol);
    Py_DECREF(par_xtol);
    CHECK_OBJECT(par_gtol);
    Py_DECREF(par_gtol);
    CHECK_OBJECT(par_barrier_tol);
    Py_DECREF(par_barrier_tol);
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    CHECK_OBJECT(par_finite_diff_rel_step);
    Py_DECREF(par_finite_diff_rel_step);
    CHECK_OBJECT(par_initial_constr_penalty);
    Py_DECREF(par_initial_constr_penalty);
    CHECK_OBJECT(par_initial_tr_radius);
    Py_DECREF(par_initial_tr_radius);
    CHECK_OBJECT(par_initial_barrier_parameter);
    Py_DECREF(par_initial_barrier_parameter);
    CHECK_OBJECT(par_initial_barrier_tolerance);
    Py_DECREF(par_initial_barrier_tolerance);
    CHECK_OBJECT(par_factorization_method);
    Py_DECREF(par_factorization_method);
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$genexpr__1_genexpr_locals {
    PyObject *var_c;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$genexpr__1_genexpr_locals *generator_heap = (struct scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_c = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_29cd51e4be138d3bdf3bd61ddeb22ab4, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 345;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_c;
            generator_heap->var_c = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_c);
        tmp_expression_value_3 = generator_heap->var_c;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[21]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 345;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[75]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 345;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 345;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 345;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_c
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_c);
    generator_heap->var_c = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_c);
    generator_heap->var_c = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$genexpr__1_genexpr_context,
        module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
        mod_consts[115],
#if PYTHON_VERSION >= 0x350
        mod_consts[116],
#endif
        codeobj_29cd51e4be138d3bdf3bd61ddeb22ab4,
        closure,
        1,
        sizeof(struct scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__1_stop_criteria(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_state = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_last_iteration_failed = python_pars[2];
    PyObject *par_optimality = python_pars[3];
    PyObject *par_constr_violation = python_pars[4];
    PyObject *par_tr_radius = python_pars[5];
    PyObject *par_constr_penalty = python_pars[6];
    PyObject *par_cg_info = python_pars[7];
    struct Nuitka_FrameObject *frame_d5f1807db4fb5aafcdebc2758e53e89e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d5f1807db4fb5aafcdebc2758e53e89e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d5f1807db4fb5aafcdebc2758e53e89e)) {
        Py_XDECREF(cache_frame_d5f1807db4fb5aafcdebc2758e53e89e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d5f1807db4fb5aafcdebc2758e53e89e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d5f1807db4fb5aafcdebc2758e53e89e = MAKE_FUNCTION_FRAME(codeobj_d5f1807db4fb5aafcdebc2758e53e89e, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d5f1807db4fb5aafcdebc2758e53e89e->m_type_description == NULL);
    frame_d5f1807db4fb5aafcdebc2758e53e89e = cache_frame_d5f1807db4fb5aafcdebc2758e53e89e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d5f1807db4fb5aafcdebc2758e53e89e);
    assert(Py_REFCNT(frame_d5f1807db4fb5aafcdebc2758e53e89e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_args_element_value_1 = par_state;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        CHECK_OBJECT(par_last_iteration_failed);
        tmp_args_element_value_3 = par_last_iteration_failed;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 408;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[3]);
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 408;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = Nuitka_Cell_GET(self->m_closure[4]);
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[119]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 409;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = Nuitka_Cell_GET(self->m_closure[5]);
        CHECK_OBJECT(par_tr_radius);
        tmp_args_element_value_7 = par_tr_radius;
        CHECK_OBJECT(par_constr_penalty);
        tmp_args_element_value_8 = par_constr_penalty;
        CHECK_OBJECT(par_cg_info);
        tmp_args_element_value_9 = par_cg_info;
        frame_d5f1807db4fb5aafcdebc2758e53e89e->m_frame.f_lineno = 407;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS9(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_state;
            assert(old != NULL);
            par_state = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 411;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(self->m_closure[6]);
        tmp_cmp_expr_right_1 = mod_consts[95];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[120]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_2 = par_state;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 412;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_3 = par_state;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 413;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_4 = par_state;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[51]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 414;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_5 = par_state;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[21]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 415;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_6 = par_state;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[49]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 416;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_7 = par_state;
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[42]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 417;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_8 = par_state;
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[43]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 418;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        frame_d5f1807db4fb5aafcdebc2758e53e89e->m_frame.f_lineno = 412;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 419;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(self->m_closure[6]);
        tmp_cmp_expr_right_2 = mod_consts[95];
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_18;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[120]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_10 = par_state;
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[15]);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 420;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_11 = par_state;
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[17]);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 421;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_12 = par_state;
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[51]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 422;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_13 = par_state;
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[21]);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 423;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_14 = par_state;
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[49]);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 424;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_15 = par_state;
        tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[42]);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 425;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_16 = par_state;
        tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[43]);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);

            exception_lineno = 426;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_17 = par_state;
        tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[50]);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 427;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_18 = par_state;
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[54]);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_24);

            exception_lineno = 428;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        frame_d5f1807db4fb5aafcdebc2758e53e89e->m_frame.f_lineno = 420;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS9(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_24);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 429;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[106], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_assattr_target_2;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 430;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_19 = par_state;
        tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[15]);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 430;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[52], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_28;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 431;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_cmp_expr_right_3 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 431;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[35]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 431;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_21 = par_state;
        tmp_args_element_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[7]);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 431;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        frame_d5f1807db4fb5aafcdebc2758e53e89e->m_frame.f_lineno = 431;
        tmp_args_element_value_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_args_element_value_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 431;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_28 = par_state;
        frame_d5f1807db4fb5aafcdebc2758e53e89e->m_frame.f_lineno = 431;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_28};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_26);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 431;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[122];
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 432;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[106], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_23;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_22 = par_state;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[42]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_4 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_and_left_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_23 = par_state;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[43]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_5);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_5 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_and_right_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_4 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = mod_consts[16];
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 434;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[106], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_24;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 435;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_24 = par_state;
        tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[49]);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_6);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[124]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 435;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_6 = Nuitka_Cell_GET(self->m_closure[7]);
        tmp_condition_result_5 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = mod_consts[95];
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 436;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[106], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_25;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 437;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_25 = par_state;
        tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[15]);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_7);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 437;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_7 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_condition_result_6 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = mod_consts[23];
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 438;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[106], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_6:;
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    {
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_26;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 439;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_26 = par_state;
        tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[106]);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = mod_consts[126];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooooooocccccccc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d5f1807db4fb5aafcdebc2758e53e89e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d5f1807db4fb5aafcdebc2758e53e89e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d5f1807db4fb5aafcdebc2758e53e89e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d5f1807db4fb5aafcdebc2758e53e89e,
        type_description_1,
        par_state,
        par_x,
        par_last_iteration_failed,
        par_optimality,
        par_constr_violation,
        par_tr_radius,
        par_constr_penalty,
        par_cg_info,
        self->m_closure[3],
        self->m_closure[4],
        self->m_closure[5],
        self->m_closure[6],
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[7],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_d5f1807db4fb5aafcdebc2758e53e89e == cache_frame_d5f1807db4fb5aafcdebc2758e53e89e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d5f1807db4fb5aafcdebc2758e53e89e);
        cache_frame_d5f1807db4fb5aafcdebc2758e53e89e = NULL;
    }

    assertFrameObject(frame_d5f1807db4fb5aafcdebc2758e53e89e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_state);
    par_state = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_state);
    par_state = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_last_iteration_failed);
    Py_DECREF(par_last_iteration_failed);
    CHECK_OBJECT(par_optimality);
    Py_DECREF(par_optimality);
    CHECK_OBJECT(par_constr_violation);
    Py_DECREF(par_constr_violation);
    CHECK_OBJECT(par_tr_radius);
    Py_DECREF(par_tr_radius);
    CHECK_OBJECT(par_constr_penalty);
    Py_DECREF(par_constr_penalty);
    CHECK_OBJECT(par_cg_info);
    Py_DECREF(par_cg_info);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_last_iteration_failed);
    Py_DECREF(par_last_iteration_failed);
    CHECK_OBJECT(par_optimality);
    Py_DECREF(par_optimality);
    CHECK_OBJECT(par_constr_violation);
    Py_DECREF(par_constr_violation);
    CHECK_OBJECT(par_tr_radius);
    Py_DECREF(par_tr_radius);
    CHECK_OBJECT(par_constr_penalty);
    Py_DECREF(par_constr_penalty);
    CHECK_OBJECT(par_cg_info);
    Py_DECREF(par_cg_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__2_stop_criteria(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_state = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_last_iteration_failed = python_pars[2];
    PyObject *par_tr_radius = python_pars[3];
    PyObject *par_constr_penalty = python_pars[4];
    PyObject *par_cg_info = python_pars[5];
    PyObject *par_barrier_parameter = python_pars[6];
    PyObject *par_barrier_tolerance = python_pars[7];
    struct Nuitka_FrameObject *frame_ab926333e624b4fcb943106e0d932925;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ab926333e624b4fcb943106e0d932925 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ab926333e624b4fcb943106e0d932925)) {
        Py_XDECREF(cache_frame_ab926333e624b4fcb943106e0d932925);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ab926333e624b4fcb943106e0d932925 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ab926333e624b4fcb943106e0d932925 = MAKE_FUNCTION_FRAME(codeobj_ab926333e624b4fcb943106e0d932925, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ab926333e624b4fcb943106e0d932925->m_type_description == NULL);
    frame_ab926333e624b4fcb943106e0d932925 = cache_frame_ab926333e624b4fcb943106e0d932925;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ab926333e624b4fcb943106e0d932925);
    assert(Py_REFCNT(frame_ab926333e624b4fcb943106e0d932925) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_args_element_value_1 = par_state;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        CHECK_OBJECT(par_last_iteration_failed);
        tmp_args_element_value_3 = par_last_iteration_failed;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 445;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[4]);
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 445;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = Nuitka_Cell_GET(self->m_closure[5]);
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[119]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 446;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = Nuitka_Cell_GET(self->m_closure[6]);
        CHECK_OBJECT(par_tr_radius);
        tmp_args_element_value_7 = par_tr_radius;
        CHECK_OBJECT(par_constr_penalty);
        tmp_args_element_value_8 = par_constr_penalty;
        CHECK_OBJECT(par_cg_info);
        tmp_args_element_value_9 = par_cg_info;
        CHECK_OBJECT(par_barrier_parameter);
        tmp_args_element_value_10 = par_barrier_parameter;
        CHECK_OBJECT(par_barrier_tolerance);
        tmp_args_element_value_11 = par_barrier_tolerance;
        frame_ab926333e624b4fcb943106e0d932925->m_frame.f_lineno = 444;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS11(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_state;
            assert(old != NULL);
            par_state = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 448;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(self->m_closure[7]);
        tmp_cmp_expr_right_1 = mod_consts[95];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[120]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_2 = par_state;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 449;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_3 = par_state;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 450;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_4 = par_state;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[51]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 451;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_5 = par_state;
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[21]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 452;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_6 = par_state;
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[49]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 453;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_7 = par_state;
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[42]);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 454;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_8 = par_state;
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[43]);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 455;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        frame_ab926333e624b4fcb943106e0d932925->m_frame.f_lineno = 449;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 456;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(self->m_closure[7]);
        tmp_cmp_expr_right_2 = mod_consts[95];
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_expression_value_19;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[120]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_10 = par_state;
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[15]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 457;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_11 = par_state;
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[17]);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 458;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_12 = par_state;
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[51]);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 459;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_13 = par_state;
        tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[21]);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 460;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_14 = par_state;
        tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[49]);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);

            exception_lineno = 461;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_15 = par_state;
        tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[42]);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 462;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_16 = par_state;
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[43]);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_24);

            exception_lineno = 463;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_17 = par_state;
        tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[50]);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 464;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_18 = par_state;
        tmp_args_element_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[56]);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_26);

            exception_lineno = 465;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_19 = par_state;
        tmp_args_element_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[54]);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_27);

            exception_lineno = 466;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        frame_ab926333e624b4fcb943106e0d932925->m_frame.f_lineno = 457;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS10(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_24);
        Py_DECREF(tmp_args_element_value_25);
        Py_DECREF(tmp_args_element_value_26);
        Py_DECREF(tmp_args_element_value_27);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[106], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_assattr_target_2;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 468;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = par_state;
        tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[15]);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 468;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[52], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_31;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 469;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_cmp_expr_right_3 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 469;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_4 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[35]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 469;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_22 = par_state;
        tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[7]);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 469;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        frame_ab926333e624b4fcb943106e0d932925->m_frame.f_lineno = 469;
        tmp_args_element_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_args_element_value_29);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 469;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_31 = par_state;
        frame_ab926333e624b4fcb943106e0d932925->m_frame.f_lineno = 469;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_31};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_29);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 469;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[122];
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 470;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[106], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_24;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 471;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_23 = par_state;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[42]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 471;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_4 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_and_left_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 471;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_24 = par_state;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[43]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_5);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 471;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_5 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_and_right_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_4 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = mod_consts[16];
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 472;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[106], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_26;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 473;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_25 = par_state;
        tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[49]);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[8]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_6);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[124]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 473;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_6 = Nuitka_Cell_GET(self->m_closure[8]);
        tmp_and_left_value_3 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 474;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_26 = par_state;
        tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[56]);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_7);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[128]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 474;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_7 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_and_right_value_3 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_5 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = mod_consts[95];
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 475;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[106], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_27;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 476;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_27 = par_state;
        tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[15]);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_8);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 476;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_8 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_condition_result_6 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = mod_consts[23];
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 477;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[106], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_6:;
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    {
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_28;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 478;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_28 = par_state;
        tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[106]);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_9 = mod_consts[126];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ab926333e624b4fcb943106e0d932925, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ab926333e624b4fcb943106e0d932925->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ab926333e624b4fcb943106e0d932925, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ab926333e624b4fcb943106e0d932925,
        type_description_1,
        par_state,
        par_x,
        par_last_iteration_failed,
        par_tr_radius,
        par_constr_penalty,
        par_cg_info,
        par_barrier_parameter,
        par_barrier_tolerance,
        self->m_closure[4],
        self->m_closure[5],
        self->m_closure[6],
        self->m_closure[7],
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[8],
        self->m_closure[0],
        self->m_closure[3]
    );


    // Release cached frame if used for exception.
    if (frame_ab926333e624b4fcb943106e0d932925 == cache_frame_ab926333e624b4fcb943106e0d932925) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ab926333e624b4fcb943106e0d932925);
        cache_frame_ab926333e624b4fcb943106e0d932925 = NULL;
    }

    assertFrameObject(frame_ab926333e624b4fcb943106e0d932925);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_state);
    par_state = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_state);
    par_state = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_last_iteration_failed);
    Py_DECREF(par_last_iteration_failed);
    CHECK_OBJECT(par_tr_radius);
    Py_DECREF(par_tr_radius);
    CHECK_OBJECT(par_constr_penalty);
    Py_DECREF(par_constr_penalty);
    CHECK_OBJECT(par_cg_info);
    Py_DECREF(par_cg_info);
    CHECK_OBJECT(par_barrier_parameter);
    Py_DECREF(par_barrier_parameter);
    CHECK_OBJECT(par_barrier_tolerance);
    Py_DECREF(par_barrier_tolerance);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_last_iteration_failed);
    Py_DECREF(par_last_iteration_failed);
    CHECK_OBJECT(par_tr_radius);
    Py_DECREF(par_tr_radius);
    CHECK_OBJECT(par_constr_penalty);
    Py_DECREF(par_constr_penalty);
    CHECK_OBJECT(par_cg_info);
    Py_DECREF(par_cg_info);
    CHECK_OBJECT(par_barrier_parameter);
    Py_DECREF(par_barrier_parameter);
    CHECK_OBJECT(par_barrier_tolerance);
    Py_DECREF(par_barrier_tolerance);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__3_fun_and_constr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *var_f = NULL;
    PyObject *var_c_eq = NULL;
    PyObject *var__ = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b87fb9868bec726da46018053dec948a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_b87fb9868bec726da46018053dec948a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b87fb9868bec726da46018053dec948a)) {
        Py_XDECREF(cache_frame_b87fb9868bec726da46018053dec948a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b87fb9868bec726da46018053dec948a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b87fb9868bec726da46018053dec948a = MAKE_FUNCTION_FRAME(codeobj_b87fb9868bec726da46018053dec948a, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b87fb9868bec726da46018053dec948a->m_type_description == NULL);
    frame_b87fb9868bec726da46018053dec948a = cache_frame_b87fb9868bec726da46018053dec948a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b87fb9868bec726da46018053dec948a);
    assert(Py_REFCNT(frame_b87fb9868bec726da46018053dec948a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_b87fb9868bec726da46018053dec948a->m_frame.f_lineno = 491;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[21], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 492;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_b87fb9868bec726da46018053dec948a->m_frame.f_lineno = 492;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[21], tmp_args_element_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooocc";
            exception_lineno = 492;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooocc";
            exception_lineno = 492;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooocc";
                    exception_lineno = 492;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[45];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooocc";
            exception_lineno = 492;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b87fb9868bec726da46018053dec948a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b87fb9868bec726da46018053dec948a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b87fb9868bec726da46018053dec948a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b87fb9868bec726da46018053dec948a,
        type_description_1,
        par_x,
        var_f,
        var_c_eq,
        var__,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_b87fb9868bec726da46018053dec948a == cache_frame_b87fb9868bec726da46018053dec948a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b87fb9868bec726da46018053dec948a);
        cache_frame_b87fb9868bec726da46018053dec948a = NULL;
    }

    assertFrameObject(frame_b87fb9868bec726da46018053dec948a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_c_eq == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_c_eq = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_6);
        var__ = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_f);
        tmp_tuple_element_1 = var_f;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_c_eq);
        tmp_tuple_element_1 = var_c_eq;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
    CHECK_OBJECT(var_c_eq);
    Py_DECREF(var_c_eq);
    var_c_eq = NULL;
    CHECK_OBJECT(var__);
    Py_DECREF(var__);
    var__ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_f);
    var_f = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__4_grad_and_jac(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *var_g = NULL;
    PyObject *var_J_eq = NULL;
    PyObject *var__ = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_fc90ddae13dc631dd8d0e00f27bfaa45;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_fc90ddae13dc631dd8d0e00f27bfaa45 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fc90ddae13dc631dd8d0e00f27bfaa45)) {
        Py_XDECREF(cache_frame_fc90ddae13dc631dd8d0e00f27bfaa45);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc90ddae13dc631dd8d0e00f27bfaa45 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc90ddae13dc631dd8d0e00f27bfaa45 = MAKE_FUNCTION_FRAME(codeobj_fc90ddae13dc631dd8d0e00f27bfaa45, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fc90ddae13dc631dd8d0e00f27bfaa45->m_type_description == NULL);
    frame_fc90ddae13dc631dd8d0e00f27bfaa45 = cache_frame_fc90ddae13dc631dd8d0e00f27bfaa45;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fc90ddae13dc631dd8d0e00f27bfaa45);
    assert(Py_REFCNT(frame_fc90ddae13dc631dd8d0e00f27bfaa45) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 496;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_fc90ddae13dc631dd8d0e00f27bfaa45->m_frame.f_lineno = 496;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[29], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert(var_g == NULL);
        var_g = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 497;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_fc90ddae13dc631dd8d0e00f27bfaa45->m_frame.f_lineno = 497;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[33], tmp_args_element_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooocc";
            exception_lineno = 497;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooocc";
            exception_lineno = 497;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooocc";
                    exception_lineno = 497;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[45];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooocc";
            exception_lineno = 497;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fc90ddae13dc631dd8d0e00f27bfaa45, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc90ddae13dc631dd8d0e00f27bfaa45->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc90ddae13dc631dd8d0e00f27bfaa45, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc90ddae13dc631dd8d0e00f27bfaa45,
        type_description_1,
        par_x,
        var_g,
        var_J_eq,
        var__,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_fc90ddae13dc631dd8d0e00f27bfaa45 == cache_frame_fc90ddae13dc631dd8d0e00f27bfaa45) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fc90ddae13dc631dd8d0e00f27bfaa45);
        cache_frame_fc90ddae13dc631dd8d0e00f27bfaa45 = NULL;
    }

    assertFrameObject(frame_fc90ddae13dc631dd8d0e00f27bfaa45);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_J_eq == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_J_eq = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_6);
        var__ = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_g);
        tmp_tuple_element_1 = var_g;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_J_eq);
        tmp_tuple_element_1 = var_J_eq;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_g);
    Py_DECREF(var_g);
    var_g = NULL;
    CHECK_OBJECT(var_J_eq);
    Py_DECREF(var_J_eq);
    var_J_eq = NULL;
    CHECK_OBJECT(var__);
    Py_DECREF(var__);
    var__ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_g);
    var_g = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__1___init__,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_d33556b7d9307da29c217fb2abfe490f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__2___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__2___call__,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_96939949491db2e8ee1a902783a28ff6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__2___call__$$$function__1_matvec(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__2___call__$$$function__1_matvec,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[3],
#endif
        codeobj_5acfb0f73130641cb1618d40a14ccb7b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__3___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__3___init__,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_8442f930a471fe10ef9cc3c7d7994986,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__4___call__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__4___call__,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_0942ca93772a2bc16522e6bad6f6fc31,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__4___call__$$$function__1_matvec(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__4___call__$$$function__1_matvec,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[11],
#endif
        codeobj_1e8b817d80c2de7dfa429985e83ee653,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__5_update_state_sqp() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__5_update_state_sqp,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_64058bf8f4ec03346cf0ff882f076937,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__6_update_state_ip() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__6_update_state_ip,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2d8a0eec9e161411ff364676f73b8a10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bdb28a94af68716e499105f3835709f8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
        mod_consts[114],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__1_stop_criteria(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__1_stop_criteria,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_d5f1807db4fb5aafcdebc2758e53e89e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
        NULL,
        closure,
        8
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__2_stop_criteria(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__2_stop_criteria,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_ab926333e624b4fcb943106e0d932925,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
        NULL,
        closure,
        9
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__3_fun_and_constr(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__3_fun_and_constr,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_b87fb9868bec726da46018053dec948a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__4_grad_and_jac(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__4_grad_and_jac,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_fc90ddae13dc631dd8d0e00f27bfaa45,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_scipy$optimize$_trustregion_constr$minimize_trustregion_constr[] = {
    impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__2___call__$$$function__1_matvec,
    impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__4___call__$$$function__1_matvec,
    impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__1_stop_criteria,
    impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__2_stop_criteria,
    impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__3_fun_and_constr,
    impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr$$$function__4_grad_and_jac,
    impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__1___init__,
    impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__2___call__,
    impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__3___init__,
    impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__4___call__,
    impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__5_update_state_sqp,
    impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__6_update_state_ip,
    impl_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_scipy$optimize$_trustregion_constr$minimize_trustregion_constr;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_scipy$optimize$_trustregion_constr$minimize_trustregion_constr) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_scipy$optimize$_trustregion_constr$minimize_trustregion_constr[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_scipy$optimize$_trustregion_constr$minimize_trustregion_constr(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy.optimize._trustregion_constr.minimize_trustregion_constr");

    // Store the module for future use.
    module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.optimize._trustregion_constr.minimize_trustregion_constr: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.optimize._trustregion_constr.minimize_trustregion_constr: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.optimize._trustregion_constr.minimize_trustregion_constr: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$optimize$_trustregion_constr$minimize_trustregion_constr\n");

    moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr = MODULE_DICT(module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[195]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_cbf6ae8213539defe7ffd1bc197b0816;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__1_HessianLinearOperator_25 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__2_LagrangianHessian_38 = NULL;
    struct Nuitka_FrameObject *frame_a93519f8493eb675fafbaefcc4a383ab_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_2);
    }
    frame_cbf6ae8213539defe7ffd1bc197b0816 = MAKE_MODULE_FRAME(codeobj_cbf6ae8213539defe7ffd1bc197b0816, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cbf6ae8213539defe7ffd1bc197b0816);
    assert(Py_REFCNT(frame_cbf6ae8213539defe7ffd1bc197b0816) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[133], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[134], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[47];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[23];
        frame_cbf6ae8213539defe7ffd1bc197b0816->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[136];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[23];
        frame_cbf6ae8213539defe7ffd1bc197b0816->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[137];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[138];
        tmp_level_value_3 = mod_consts[23];
        frame_cbf6ae8213539defe7ffd1bc197b0816->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                mod_consts[4],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[4]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[139];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[140];
        tmp_level_value_4 = mod_consts[95];
        frame_cbf6ae8213539defe7ffd1bc197b0816->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                mod_consts[22],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[141];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[142];
        tmp_level_value_5 = mod_consts[95];
        frame_cbf6ae8213539defe7ffd1bc197b0816->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                mod_consts[71],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[71]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                mod_consts[72],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[72]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                mod_consts[73],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[73]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                mod_consts[65],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[65]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_12);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[143];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[144];
        tmp_level_value_6 = mod_consts[95];
        frame_cbf6ae8213539defe7ffd1bc197b0816->m_frame.f_lineno = 7;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                mod_consts[64],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[64]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[145];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[146];
        tmp_level_value_7 = mod_consts[95];
        frame_cbf6ae8213539defe7ffd1bc197b0816->m_frame.f_lineno = 8;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                mod_consts[90],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[90]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[139];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[147];
        tmp_level_value_8 = mod_consts[95];
        frame_cbf6ae8213539defe7ffd1bc197b0816->m_frame.f_lineno = 9;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                mod_consts[70],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[70]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[88];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[148];
        tmp_level_value_9 = mod_consts[16];
        frame_cbf6ae8213539defe7ffd1bc197b0816->m_frame.f_lineno = 10;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                mod_consts[88],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[88]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[149];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[150];
        tmp_level_value_10 = mod_consts[16];
        frame_cbf6ae8213539defe7ffd1bc197b0816->m_frame.f_lineno = 11;
        tmp_assign_source_17 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                mod_consts[81],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[81]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                mod_consts[79],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[79]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_19);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[89];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[151];
        tmp_level_value_11 = mod_consts[16];
        frame_cbf6ae8213539defe7ffd1bc197b0816->m_frame.f_lineno = 13;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                mod_consts[89],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[89]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[152];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[153];
        tmp_level_value_12 = mod_consts[16];
        frame_cbf6ae8213539defe7ffd1bc197b0816->m_frame.f_lineno = 14;
        tmp_assign_source_21 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                mod_consts[96],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[96]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_15 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                mod_consts[98],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[98]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_16 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr,
                mod_consts[99],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[99]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_24);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = DICT_COPY(mod_consts[154]);
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_27;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__1_HessianLinearOperator_25 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[155];
        tmp_res = PyDict_SetItem(locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__1_HessianLinearOperator_25, mod_consts[156], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[157];
        tmp_res = PyDict_SetItem(locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__1_HessianLinearOperator_25, mod_consts[130], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyDict_SetItem(locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__1_HessianLinearOperator_25, mod_consts[158], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__1___init__();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__1_HessianLinearOperator_25, mod_consts[159], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__2___call__();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__1_HessianLinearOperator_25, mod_consts[161], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[63];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[163];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__1_HessianLinearOperator_25;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_cbf6ae8213539defe7ffd1bc197b0816->m_frame.f_lineno = 25;
            tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_28 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__1_HessianLinearOperator_25);
        locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__1_HessianLinearOperator_25 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__1_HessianLinearOperator_25);
        locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__1_HessianLinearOperator_25 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 25;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_28);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__2_LagrangianHessian_38 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[155];
        tmp_res = PyDict_SetItem(locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__2_LagrangianHessian_38, mod_consts[156], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[164];
        tmp_res = PyDict_SetItem(locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__2_LagrangianHessian_38, mod_consts[130], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyDict_SetItem(locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__2_LagrangianHessian_38, mod_consts[158], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__3___init__();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__2_LagrangianHessian_38, mod_consts[159], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_a93519f8493eb675fafbaefcc4a383ab_2 = MAKE_CLASS_FRAME(codeobj_a93519f8493eb675fafbaefcc4a383ab, module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a93519f8493eb675fafbaefcc4a383ab_2);
        assert(Py_REFCNT(frame_a93519f8493eb675fafbaefcc4a383ab_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_instance_1;
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_a93519f8493eb675fafbaefcc4a383ab_2->m_frame.f_lineno = 49;
            tmp_tuple_element_2 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_1,
                mod_consts[83],
                PyTuple_GET_ITEM(mod_consts[166], 0)
            );

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_instance_2;
                PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_2);
                tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[34]);

                if (unlikely(tmp_called_instance_2 == NULL)) {
                    tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                }

                if (tmp_called_instance_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto tuple_build_exception_1;
                }
                frame_a93519f8493eb675fafbaefcc4a383ab_2->m_frame.f_lineno = 49;
                tmp_tuple_element_2 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_2,
                    mod_consts[83],
                    PyTuple_GET_ITEM(mod_consts[166], 0)
                );

                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_defaults_1, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_defaults_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__4___call__(tmp_defaults_1);

            tmp_res = PyDict_SetItem(locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__2_LagrangianHessian_38, mod_consts[161], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a93519f8493eb675fafbaefcc4a383ab_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a93519f8493eb675fafbaefcc4a383ab_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a93519f8493eb675fafbaefcc4a383ab_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a93519f8493eb675fafbaefcc4a383ab_2,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_a93519f8493eb675fafbaefcc4a383ab_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_9;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_3 = mod_consts[85];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[163];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__2_LagrangianHessian_38;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_cbf6ae8213539defe7ffd1bc197b0816->m_frame.f_lineno = 38;
            tmp_assign_source_33 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_33;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_32 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_32);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__2_LagrangianHessian_38);
        locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__2_LagrangianHessian_38 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__2_LagrangianHessian_38);
        locals_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$class__2_LagrangianHessian_38 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 38;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_32);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cbf6ae8213539defe7ffd1bc197b0816, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cbf6ae8213539defe7ffd1bc197b0816->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cbf6ae8213539defe7ffd1bc197b0816, exception_lineno);
    }



    assertFrameObject(frame_cbf6ae8213539defe7ffd1bc197b0816);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__5_update_state_sqp();

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__6_update_state_ip();

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[168];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_36 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$minimize_trustregion_constr$$$function__7__minimize_trustregion_constr(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_36);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy.optimize._trustregion_constr.minimize_trustregion_constr", false);

    Py_INCREF(module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr);
    return module_scipy$optimize$_trustregion_constr$minimize_trustregion_constr;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$optimize$_trustregion_constr$minimize_trustregion_constr", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
