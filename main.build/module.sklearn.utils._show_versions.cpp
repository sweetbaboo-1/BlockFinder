/* Generated code for Python module 'sklearn.utils._show_versions'
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

/* The "module_sklearn$utils$_show_versions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sklearn$utils$_show_versions;
PyDictObject *moduledict_sklearn$utils$_show_versions;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[53];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[53];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("sklearn.utils._show_versions"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 53; i++) {
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
void checkModuleConstants_sklearn$utils$_show_versions(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 53; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_7745bf0dab273ef41cae610c5c80203a;
static PyCodeObject *codeobj_ff5692f9f92c2fa9c6b925dace5f0aa1;
static PyCodeObject *codeobj_b5312631c22691777f005c90cf47cea1;
static PyCodeObject *codeobj_e51159438503d30803af060e0e11e368;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[48]); CHECK_OBJECT(module_filename_obj);
    codeobj_7745bf0dab273ef41cae610c5c80203a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[49], mod_consts[49], NULL, NULL, 0, 0, 0);
    codeobj_ff5692f9f92c2fa9c6b925dace5f0aa1 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[50], NULL, 0, 0, 0);
    codeobj_b5312631c22691777f005c90cf47cea1 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[51], NULL, 0, 0, 0);
    codeobj_e51159438503d30803af060e0e11e368 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[52], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_sklearn$utils$_show_versions$$$function__1__get_sys_info();


static PyObject *MAKE_FUNCTION_sklearn$utils$_show_versions$$$function__2__get_deps_info();


static PyObject *MAKE_FUNCTION_sklearn$utils$_show_versions$$$function__3_show_versions();


// The module function definitions.
static PyObject *impl_sklearn$utils$_show_versions$$$function__1__get_sys_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_blob = NULL;
    struct Nuitka_FrameObject *frame_b5312631c22691777f005c90cf47cea1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b5312631c22691777f005c90cf47cea1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b5312631c22691777f005c90cf47cea1)) {
        Py_XDECREF(cache_frame_b5312631c22691777f005c90cf47cea1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b5312631c22691777f005c90cf47cea1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b5312631c22691777f005c90cf47cea1 = MAKE_FUNCTION_FRAME(codeobj_b5312631c22691777f005c90cf47cea1, module_sklearn$utils$_show_versions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b5312631c22691777f005c90cf47cea1->m_type_description == NULL);
    frame_b5312631c22691777f005c90cf47cea1 = cache_frame_b5312631c22691777f005c90cf47cea1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b5312631c22691777f005c90cf47cea1);
    assert(Py_REFCNT(frame_b5312631c22691777f005c90cf47cea1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = mod_consts[0];
        tmp_assign_source_1 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_tuple_element_2;
            PyList_SET_ITEM0(tmp_assign_source_1, 0, tmp_list_element_1);
            tmp_tuple_element_1 = mod_consts[1];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_1;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_1);
                tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_1 == NULL)) {
                    tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                assert(!(tmp_expression_value_1 == NULL));
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 30;
                    type_description_1 = "No";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            PyList_SET_ITEM(tmp_assign_source_1, 1, tmp_list_element_1);
            tmp_tuple_element_2 = mod_consts[3];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_instance_1;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_2);
                tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[4]);

                if (unlikely(tmp_called_instance_1 == NULL)) {
                    tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
                }

                if (tmp_called_instance_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 31;
                    type_description_1 = "No";
                    goto tuple_build_exception_2;
                }
                frame_b5312631c22691777f005c90cf47cea1->m_frame.f_lineno = 31;
                tmp_tuple_element_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[4]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 31;
                    type_description_1 = "No";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            PyList_SET_ITEM(tmp_assign_source_1, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        assert(var_blob == NULL);
        var_blob = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dict_seq_1;
        CHECK_OBJECT(var_blob);
        tmp_dict_seq_1 = var_blob;
        tmp_return_value = TO_DICT(tmp_dict_seq_1, NULL);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "No";
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
        exception_tb = MAKE_TRACEBACK(frame_b5312631c22691777f005c90cf47cea1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b5312631c22691777f005c90cf47cea1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b5312631c22691777f005c90cf47cea1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b5312631c22691777f005c90cf47cea1,
        type_description_1,
        NULL,
        var_blob
    );


    // Release cached frame if used for exception.
    if (frame_b5312631c22691777f005c90cf47cea1 == cache_frame_b5312631c22691777f005c90cf47cea1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b5312631c22691777f005c90cf47cea1);
        cache_frame_b5312631c22691777f005c90cf47cea1 = NULL;
    }

    assertFrameObject(frame_b5312631c22691777f005c90cf47cea1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_blob);
    Py_DECREF(var_blob);
    var_blob = NULL;
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

    Py_XDECREF(var_blob);
    var_blob = NULL;
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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sklearn$utils$_show_versions$$$function__2__get_deps_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_deps = NULL;
    PyObject *var_deps_info = NULL;
    PyObject *var_version = NULL;
    PyObject *var_PackageNotFoundError = NULL;
    PyObject *var_modname = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_ff5692f9f92c2fa9c6b925dace5f0aa1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ff5692f9f92c2fa9c6b925dace5f0aa1 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST9(mod_consts[6]);
        assert(var_deps == NULL);
        var_deps = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_ff5692f9f92c2fa9c6b925dace5f0aa1)) {
        Py_XDECREF(cache_frame_ff5692f9f92c2fa9c6b925dace5f0aa1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff5692f9f92c2fa9c6b925dace5f0aa1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff5692f9f92c2fa9c6b925dace5f0aa1 = MAKE_FUNCTION_FRAME(codeobj_ff5692f9f92c2fa9c6b925dace5f0aa1, module_sklearn$utils$_show_versions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff5692f9f92c2fa9c6b925dace5f0aa1->m_type_description == NULL);
    frame_ff5692f9f92c2fa9c6b925dace5f0aa1 = cache_frame_ff5692f9f92c2fa9c6b925dace5f0aa1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ff5692f9f92c2fa9c6b925dace5f0aa1);
    assert(Py_REFCNT(frame_ff5692f9f92c2fa9c6b925dace5f0aa1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[7];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_deps_info == NULL);
        var_deps_info = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = IMPORT_HARD_IMPORTLIB__METADATA();
        assert(!(tmp_assign_source_3 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_3);
        tmp_import_from_1__module = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD_IMPORTLIB__METADATA();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[9]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        assert(var_version == NULL);
        var_version = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        {
            PyObject *hard_module = IMPORT_HARD_IMPORTLIB__METADATA();
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[10]);
        }
        assert(!(tmp_assign_source_5 == NULL));
        assert(var_PackageNotFoundError == NULL);
        var_PackageNotFoundError = tmp_assign_source_5;
    }
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_deps);
        tmp_iter_arg_1 = var_deps;
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 67;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_8 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_modname;
            var_modname = tmp_assign_source_8;
            Py_INCREF(var_modname);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (var_version == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }

        tmp_called_value_1 = var_version;
        CHECK_OBJECT(var_modname);
        tmp_args_element_value_1 = var_modname;
        frame_ff5692f9f92c2fa9c6b925dace5f0aa1->m_frame.f_lineno = 69;
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        if (var_deps_info == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }

        tmp_ass_subscribed_1 = var_deps_info;
        CHECK_OBJECT(var_modname);
        tmp_ass_subscript_1 = var_modname;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooo";
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_ff5692f9f92c2fa9c6b925dace5f0aa1, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_ff5692f9f92c2fa9c6b925dace5f0aa1, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        CHECK_OBJECT(var_PackageNotFoundError);
        tmp_cmp_expr_right_1 = var_PackageNotFoundError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = Py_None;
        if (var_deps_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }

        tmp_ass_subscribed_2 = var_deps_info;
        CHECK_OBJECT(var_modname);
        tmp_ass_subscript_2 = var_modname;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 68;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ff5692f9f92c2fa9c6b925dace5f0aa1->m_frame) frame_ff5692f9f92c2fa9c6b925dace5f0aa1->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_4;
    branch_end_1:;
    goto try_end_2;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 67;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_deps_info == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 72;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_deps_info;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ff5692f9f92c2fa9c6b925dace5f0aa1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff5692f9f92c2fa9c6b925dace5f0aa1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff5692f9f92c2fa9c6b925dace5f0aa1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff5692f9f92c2fa9c6b925dace5f0aa1,
        type_description_1,
        var_deps,
        var_deps_info,
        var_version,
        var_PackageNotFoundError,
        var_modname
    );


    // Release cached frame if used for exception.
    if (frame_ff5692f9f92c2fa9c6b925dace5f0aa1 == cache_frame_ff5692f9f92c2fa9c6b925dace5f0aa1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff5692f9f92c2fa9c6b925dace5f0aa1);
        cache_frame_ff5692f9f92c2fa9c6b925dace5f0aa1 = NULL;
    }

    assertFrameObject(frame_ff5692f9f92c2fa9c6b925dace5f0aa1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_deps);
    Py_DECREF(var_deps);
    var_deps = NULL;
    Py_XDECREF(var_deps_info);
    var_deps_info = NULL;
    Py_XDECREF(var_version);
    var_version = NULL;
    CHECK_OBJECT(var_PackageNotFoundError);
    Py_DECREF(var_PackageNotFoundError);
    var_PackageNotFoundError = NULL;
    Py_XDECREF(var_modname);
    var_modname = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_deps);
    Py_DECREF(var_deps);
    var_deps = NULL;
    Py_XDECREF(var_deps_info);
    var_deps_info = NULL;
    Py_XDECREF(var_version);
    var_version = NULL;
    Py_XDECREF(var_PackageNotFoundError);
    var_PackageNotFoundError = NULL;
    Py_XDECREF(var_modname);
    var_modname = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sklearn$utils$_show_versions$$$function__3_show_versions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_sys_info = NULL;
    PyObject *var_deps_info = NULL;
    PyObject *var_k = NULL;
    PyObject *var_stat = NULL;
    PyObject *var_threadpool_results = NULL;
    PyObject *var_i = NULL;
    PyObject *var_result = NULL;
    PyObject *var_key = NULL;
    PyObject *var_val = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e51159438503d30803af060e0e11e368;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    static struct Nuitka_FrameObject *cache_frame_e51159438503d30803af060e0e11e368 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e51159438503d30803af060e0e11e368)) {
        Py_XDECREF(cache_frame_e51159438503d30803af060e0e11e368);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e51159438503d30803af060e0e11e368 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e51159438503d30803af060e0e11e368 = MAKE_FUNCTION_FRAME(codeobj_e51159438503d30803af060e0e11e368, module_sklearn$utils$_show_versions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e51159438503d30803af060e0e11e368->m_type_description == NULL);
    frame_e51159438503d30803af060e0e11e368 = cache_frame_e51159438503d30803af060e0e11e368;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e51159438503d30803af060e0e11e368);
    assert(Py_REFCNT(frame_e51159438503d30803af060e0e11e368) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 81;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sys_info == NULL);
        var_sys_info = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 82;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_deps_info == NULL);
        var_deps_info = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[15]);
        assert(tmp_called_value_3 != NULL);
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 84;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[16]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_sys_info);
        tmp_expression_value_1 = var_sys_info;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 85;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 85;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 85;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 85;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 85;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[18];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 85;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_8;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_stat;
            var_stat = tmp_assign_source_9;
            Py_INCREF(var_stat);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[15]);
        assert(tmp_called_value_5 != NULL);
        tmp_kw_call_arg_value_0_1 = mod_consts[19];
        CHECK_OBJECT(var_k);
        tmp_kw_call_dict_value_0_1 = var_k;
        CHECK_OBJECT(var_stat);
        tmp_kw_call_dict_value_1_1 = var_stat;
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 86;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[20]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 86;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 85;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_3;
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[15]);
        assert(tmp_called_value_6 != NULL);
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 88;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[21]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_deps_info);
        tmp_expression_value_2 = var_deps_info;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 89;
        tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
        Py_DECREF(tmp_called_value_7);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_10;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_11 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 89;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
        tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 89;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 89;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 89;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[18];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 89;
            goto try_except_handler_7;
        }
    }
    goto try_end_4;
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    goto try_end_5;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_15;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_stat;
            var_stat = tmp_assign_source_16;
            Py_INCREF(var_stat);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts[15]);
        assert(tmp_called_value_8 != NULL);
        tmp_kw_call_arg_value_0_2 = mod_consts[22];
        CHECK_OBJECT(var_k);
        tmp_kw_call_dict_value_0_2 = var_k;
        CHECK_OBJECT(var_stat);
        tmp_kw_call_dict_value_1_2 = var_stat;
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 90;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[20]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 90;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 89;
        type_description_1 = "ooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_called_value_10;
        tmp_called_value_9 = LOOKUP_BUILTIN(mod_consts[15]);
        assert(tmp_called_value_9 != NULL);
        tmp_kw_call_arg_value_0_3 = mod_consts[23];
        tmp_kw_call_dict_value_0_3 = mod_consts[24];
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 94;
        tmp_kw_call_dict_value_1_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_10);
        if (tmp_kw_call_dict_value_1_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 93;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
            tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[20]);
        }

        Py_DECREF(tmp_kw_call_dict_value_1_3);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 92;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 99;
        tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS(tmp_called_value_11);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_threadpool_results == NULL);
        var_threadpool_results = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_threadpool_results);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_threadpool_results);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_6;
        tmp_called_value_12 = LOOKUP_BUILTIN(mod_consts[15]);
        assert(tmp_called_value_12 != NULL);
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 101;
        tmp_call_result_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_result_7;
        tmp_called_value_13 = LOOKUP_BUILTIN(mod_consts[15]);
        assert(tmp_called_value_13 != NULL);
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 102;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[27]);

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_14 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(var_threadpool_results);
        tmp_args_element_value_4 = var_threadpool_results;
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 104;
        tmp_iter_arg_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_4);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = MAKE_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_18;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_19 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_19 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 104;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_iter_arg_6 = tmp_for_loop_3__iter_value;
        tmp_assign_source_20 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_21 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 104;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_22 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 104;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_22;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 104;
                    goto try_except_handler_10;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[18];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 104;
            goto try_except_handler_10;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_23 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_23;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_24 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_result;
            var_result = tmp_assign_source_24;
            Py_INCREF(var_result);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_result);
        tmp_expression_value_3 = var_result;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooo";
            goto try_except_handler_8;
        }
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 105;
        tmp_iter_arg_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_15);
        Py_DECREF(tmp_called_value_15);
        if (tmp_iter_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_25 = MAKE_ITERATOR(tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_26 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 105;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_8;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_iter_arg_8 = tmp_for_loop_4__iter_value;
        tmp_assign_source_27 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_28 = UNPACK_NEXT(tmp_unpack_7, 0, 2);
        if (tmp_assign_source_28 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 105;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT(tmp_unpack_8, 1, 2);
        if (tmp_assign_source_29 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 105;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooo";
                    exception_lineno = 105;
                    goto try_except_handler_13;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[18];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 105;
            goto try_except_handler_13;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_12;
    // End of try:
    try_end_9:;
    goto try_end_10;
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

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_30 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_30;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_31 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_val;
            var_val = tmp_assign_source_31;
            Py_INCREF(var_val);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        tmp_called_value_16 = LOOKUP_BUILTIN(mod_consts[15]);
        assert(tmp_called_value_16 != NULL);
        CHECK_OBJECT(var_key);
        tmp_format_value_1 = var_key;
        tmp_format_spec_1 = mod_consts[28];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooo";
            goto try_except_handler_11;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[29];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_val);
            tmp_format_value_2 = var_val;
            tmp_format_spec_2 = mod_consts[30];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_5 = PyUnicode_Join(mod_consts[30], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooo";
            goto try_except_handler_11;
        }
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 106;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_8);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 105;
        type_description_1 = "ooooooooo";
        goto try_except_handler_11;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_11;
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

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_8;
    // End of try:
    try_end_11:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        nuitka_digit tmp_sub_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_i);
        tmp_cmp_expr_left_1 = var_i;
        CHECK_OBJECT(var_threadpool_results);
        tmp_len_arg_1 = var_threadpool_results;
        tmp_sub_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooo";
            goto try_except_handler_8;
        }
        tmp_sub_expr_right_1 = 1;
        tmp_cmp_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        assert(!(tmp_cmp_expr_right_1 == NULL));
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_9;
        tmp_called_value_17 = LOOKUP_BUILTIN(mod_consts[15]);
        assert(tmp_called_value_17 != NULL);
        frame_e51159438503d30803af060e0e11e368->m_frame.f_lineno = 108;
        tmp_call_result_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_17);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 104;
        type_description_1 = "ooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e51159438503d30803af060e0e11e368, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e51159438503d30803af060e0e11e368->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e51159438503d30803af060e0e11e368, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e51159438503d30803af060e0e11e368,
        type_description_1,
        var_sys_info,
        var_deps_info,
        var_k,
        var_stat,
        var_threadpool_results,
        var_i,
        var_result,
        var_key,
        var_val
    );


    // Release cached frame if used for exception.
    if (frame_e51159438503d30803af060e0e11e368 == cache_frame_e51159438503d30803af060e0e11e368) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e51159438503d30803af060e0e11e368);
        cache_frame_e51159438503d30803af060e0e11e368 = NULL;
    }

    assertFrameObject(frame_e51159438503d30803af060e0e11e368);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_sys_info);
    Py_DECREF(var_sys_info);
    var_sys_info = NULL;
    CHECK_OBJECT(var_deps_info);
    Py_DECREF(var_deps_info);
    var_deps_info = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_stat);
    var_stat = NULL;
    Py_XDECREF(var_threadpool_results);
    var_threadpool_results = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_sys_info);
    var_sys_info = NULL;
    Py_XDECREF(var_deps_info);
    var_deps_info = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_stat);
    var_stat = NULL;
    Py_XDECREF(var_threadpool_results);
    var_threadpool_results = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sklearn$utils$_show_versions$$$function__1__get_sys_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$utils$_show_versions$$$function__1__get_sys_info,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b5312631c22691777f005c90cf47cea1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$utils$_show_versions,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$utils$_show_versions$$$function__2__get_deps_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$utils$_show_versions$$$function__2__get_deps_info,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ff5692f9f92c2fa9c6b925dace5f0aa1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$utils$_show_versions,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$utils$_show_versions$$$function__3_show_versions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$utils$_show_versions$$$function__3_show_versions,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e51159438503d30803af060e0e11e368,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$utils$_show_versions,
        mod_consts[31],
        NULL,
        0
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

function_impl_code functable_sklearn$utils$_show_versions[] = {
    impl_sklearn$utils$_show_versions$$$function__1__get_sys_info,
    impl_sklearn$utils$_show_versions$$$function__2__get_deps_info,
    impl_sklearn$utils$_show_versions$$$function__3_show_versions,
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

    function_impl_code *current = functable_sklearn$utils$_show_versions;
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

    if (offset > sizeof(functable_sklearn$utils$_show_versions) || offset < 0) {
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
        functable_sklearn$utils$_show_versions[offset],
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
        module_sklearn$utils$_show_versions,
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
PyObject *modulecode_sklearn$utils$_show_versions(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sklearn.utils._show_versions");

    // Store the module for future use.
    module_sklearn$utils$_show_versions = module;

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
        PRINT_STRING("sklearn.utils._show_versions: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sklearn.utils._show_versions: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sklearn.utils._show_versions: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsklearn$utils$_show_versions\n");

    moduledict_sklearn$utils$_show_versions = MODULE_DICT(module_sklearn$utils$_show_versions);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sklearn$utils$_show_versions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sklearn$utils$_show_versions,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[30]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sklearn$utils$_show_versions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sklearn$utils$_show_versions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sklearn$utils$_show_versions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sklearn$utils$_show_versions);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_sklearn$utils$_show_versions);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_7745bf0dab273ef41cae610c5c80203a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_2);
    }
    frame_7745bf0dab273ef41cae610c5c80203a = MAKE_MODULE_FRAME(codeobj_7745bf0dab273ef41cae610c5c80203a, module_sklearn$utils$_show_versions);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7745bf0dab273ef41cae610c5c80203a);
    assert(Py_REFCNT(frame_7745bf0dab273ef41cae610c5c80203a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[36], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[37], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[4];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sklearn$utils$_show_versions;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[39];
        frame_7745bf0dab273ef41cae610c5c80203a->m_frame.f_lineno = 8;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[40];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sklearn$utils$_show_versions;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[41];
        tmp_level_value_2 = mod_consts[42];
        frame_7745bf0dab273ef41cae610c5c80203a->m_frame.f_lineno = 10;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_sklearn$utils$_show_versions,
                mod_consts[26],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[26]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[30];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sklearn$utils$_show_versions;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[43];
        tmp_level_value_3 = mod_consts[42];
        frame_7745bf0dab273ef41cae610c5c80203a->m_frame.f_lineno = 11;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_sklearn$utils$_show_versions,
                mod_consts[8],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[8]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[44];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sklearn$utils$_show_versions;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[45];
        tmp_level_value_4 = mod_consts[46];
        frame_7745bf0dab273ef41cae610c5c80203a->m_frame.f_lineno = 14;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_sklearn$utils$_show_versions,
                mod_consts[25],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[25]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_8);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7745bf0dab273ef41cae610c5c80203a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7745bf0dab273ef41cae610c5c80203a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7745bf0dab273ef41cae610c5c80203a, exception_lineno);
    }



    assertFrameObject(frame_7745bf0dab273ef41cae610c5c80203a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_sklearn$utils$_show_versions$$$function__1__get_sys_info();

        UPDATE_STRING_DICT1(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_sklearn$utils$_show_versions$$$function__2__get_deps_info();

        UPDATE_STRING_DICT1(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_sklearn$utils$_show_versions$$$function__3_show_versions();

        UPDATE_STRING_DICT1(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_11);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sklearn.utils._show_versions", false);

    Py_INCREF(module_sklearn$utils$_show_versions);
    return module_sklearn$utils$_show_versions;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$utils$_show_versions, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("sklearn$utils$_show_versions", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
