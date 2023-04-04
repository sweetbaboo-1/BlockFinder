/* Generated code for Python module 'sklearn.externals._packaging._structures'
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

/* The "module_sklearn$externals$_packaging$_structures" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sklearn$externals$_packaging$_structures;
PyDictObject *moduledict_sklearn$externals$_packaging$_structures;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[55];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[55];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("sklearn.externals._packaging._structures"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 55; i++) {
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
void checkModuleConstants_sklearn$externals$_packaging$_structures(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 55; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0c20ec71ddb333d1e399af41d2242de9;
static PyCodeObject *codeobj_055a66bd58fc79611ce9f3f1fff2b6ab;
static PyCodeObject *codeobj_40a98a928bbffb6803ced8bb33b9fd9c;
static PyCodeObject *codeobj_3aa54d958da455dd5412c89f25b6435a;
static PyCodeObject *codeobj_c33f9e43aefb8c9aedf990a3db09a07b;
static PyCodeObject *codeobj_16034179d1bfd91d9ce274eacdccf88f;
static PyCodeObject *codeobj_f341297d1dfb22b1e1b988a88c38a529;
static PyCodeObject *codeobj_991d99f45f6c6bc1e8c6ef9fbea57ec2;
static PyCodeObject *codeobj_d25a4c33d60e2f54adf59ccdb5a1483c;
static PyCodeObject *codeobj_d5ca255461baf1f4f39251938d186ed3;
static PyCodeObject *codeobj_fd102941ed9ad88901d9bee20e693be2;
static PyCodeObject *codeobj_67e1b2a376101051cbcc61d746445359;
static PyCodeObject *codeobj_4ea7c2d1a711b231103c62a59a094dfa;
static PyCodeObject *codeobj_0faf2eb6196119a9b9a0981c833c044f;
static PyCodeObject *codeobj_94cec41b4a9b814b35e9ed2273c57078;
static PyCodeObject *codeobj_c510f73714bf72acb7607c5365f5feb6;
static PyCodeObject *codeobj_e360a450f3b3c4f4b02c0670266c66d4;
static PyCodeObject *codeobj_52e20470f9717fa7b36fca9a22cf802d;
static PyCodeObject *codeobj_07f0bd3e11724358e96a73a2915b65ba;
static PyCodeObject *codeobj_1ca8480c2794575264335b8ba4aa324c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[49]); CHECK_OBJECT(module_filename_obj);
    codeobj_0c20ec71ddb333d1e399af41d2242de9 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[50], mod_consts[50], NULL, NULL, 0, 0, 0);
    codeobj_055a66bd58fc79611ce9f3f1fff2b6ab = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[51], NULL, 0, 0, 0);
    codeobj_40a98a928bbffb6803ced8bb33b9fd9c = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[52], NULL, 2, 0, 0);
    codeobj_3aa54d958da455dd5412c89f25b6435a = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[52], NULL, 2, 0, 0);
    codeobj_c33f9e43aefb8c9aedf990a3db09a07b = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[30], mod_consts[52], NULL, 2, 0, 0);
    codeobj_16034179d1bfd91d9ce274eacdccf88f = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[30], mod_consts[52], NULL, 2, 0, 0);
    codeobj_f341297d1dfb22b1e1b988a88c38a529 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[52], NULL, 2, 0, 0);
    codeobj_991d99f45f6c6bc1e8c6ef9fbea57ec2 = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[52], NULL, 2, 0, 0);
    codeobj_d25a4c33d60e2f54adf59ccdb5a1483c = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[53], NULL, 1, 0, 0);
    codeobj_d5ca255461baf1f4f39251938d186ed3 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[53], NULL, 1, 0, 0);
    codeobj_fd102941ed9ad88901d9bee20e693be2 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[52], NULL, 2, 0, 0);
    codeobj_67e1b2a376101051cbcc61d746445359 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[52], NULL, 2, 0, 0);
    codeobj_4ea7c2d1a711b231103c62a59a094dfa = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[52], NULL, 2, 0, 0);
    codeobj_0faf2eb6196119a9b9a0981c833c044f = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[52], NULL, 2, 0, 0);
    codeobj_94cec41b4a9b814b35e9ed2273c57078 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[52], NULL, 2, 0, 0);
    codeobj_c510f73714bf72acb7607c5365f5feb6 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[52], NULL, 2, 0, 0);
    codeobj_e360a450f3b3c4f4b02c0670266c66d4 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[53], NULL, 1, 0, 0);
    codeobj_52e20470f9717fa7b36fca9a22cf802d = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[53], NULL, 1, 0, 0);
    codeobj_07f0bd3e11724358e96a73a2915b65ba = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[53], NULL, 1, 0, 0);
    codeobj_1ca8480c2794575264335b8ba4aa324c = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[53], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__10___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__11___hash__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__12___lt__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__13___le__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__14___eq__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__15___ne__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__16___gt__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__17___ge__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__18___neg__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__1___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__2___hash__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__3___lt__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__4___le__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__5___eq__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__6___ne__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__7___gt__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__8___ge__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__9___neg__(PyObject *annotations);


// The module function definitions.
static PyObject *impl_sklearn$externals$_packaging$_structures$$$function__2___hash__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d25a4c33d60e2f54adf59ccdb5a1483c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d25a4c33d60e2f54adf59ccdb5a1483c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d25a4c33d60e2f54adf59ccdb5a1483c)) {
        Py_XDECREF(cache_frame_d25a4c33d60e2f54adf59ccdb5a1483c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d25a4c33d60e2f54adf59ccdb5a1483c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d25a4c33d60e2f54adf59ccdb5a1483c = MAKE_FUNCTION_FRAME(codeobj_d25a4c33d60e2f54adf59ccdb5a1483c, module_sklearn$externals$_packaging$_structures, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d25a4c33d60e2f54adf59ccdb5a1483c->m_type_description == NULL);
    frame_d25a4c33d60e2f54adf59ccdb5a1483c = cache_frame_d25a4c33d60e2f54adf59ccdb5a1483c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d25a4c33d60e2f54adf59ccdb5a1483c);
    assert(Py_REFCNT(frame_d25a4c33d60e2f54adf59ccdb5a1483c) == 2);

    // Framed code:
    {
        PyObject *tmp_hash_arg_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_self);
        tmp_operand_value_1 = par_self;
        tmp_hash_arg_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
        if (tmp_hash_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_HASH(tmp_hash_arg_1);
        Py_DECREF(tmp_hash_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_d25a4c33d60e2f54adf59ccdb5a1483c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d25a4c33d60e2f54adf59ccdb5a1483c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d25a4c33d60e2f54adf59ccdb5a1483c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d25a4c33d60e2f54adf59ccdb5a1483c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d25a4c33d60e2f54adf59ccdb5a1483c == cache_frame_d25a4c33d60e2f54adf59ccdb5a1483c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d25a4c33d60e2f54adf59ccdb5a1483c);
        cache_frame_d25a4c33d60e2f54adf59ccdb5a1483c = NULL;
    }

    assertFrameObject(frame_d25a4c33d60e2f54adf59ccdb5a1483c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sklearn$externals$_packaging$_structures$$$function__5___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_40a98a928bbffb6803ced8bb33b9fd9c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_40a98a928bbffb6803ced8bb33b9fd9c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_40a98a928bbffb6803ced8bb33b9fd9c)) {
        Py_XDECREF(cache_frame_40a98a928bbffb6803ced8bb33b9fd9c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_40a98a928bbffb6803ced8bb33b9fd9c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_40a98a928bbffb6803ced8bb33b9fd9c = MAKE_FUNCTION_FRAME(codeobj_40a98a928bbffb6803ced8bb33b9fd9c, module_sklearn$externals$_packaging$_structures, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_40a98a928bbffb6803ced8bb33b9fd9c->m_type_description == NULL);
    frame_40a98a928bbffb6803ced8bb33b9fd9c = cache_frame_40a98a928bbffb6803ced8bb33b9fd9c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_40a98a928bbffb6803ced8bb33b9fd9c);
    assert(Py_REFCNT(frame_40a98a928bbffb6803ced8bb33b9fd9c) == 2);

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_other);
        tmp_isinstance_inst_1 = par_other;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_1);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_40a98a928bbffb6803ced8bb33b9fd9c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_40a98a928bbffb6803ced8bb33b9fd9c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_40a98a928bbffb6803ced8bb33b9fd9c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_40a98a928bbffb6803ced8bb33b9fd9c,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_40a98a928bbffb6803ced8bb33b9fd9c == cache_frame_40a98a928bbffb6803ced8bb33b9fd9c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_40a98a928bbffb6803ced8bb33b9fd9c);
        cache_frame_40a98a928bbffb6803ced8bb33b9fd9c = NULL;
    }

    assertFrameObject(frame_40a98a928bbffb6803ced8bb33b9fd9c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sklearn$externals$_packaging$_structures$$$function__6___ne__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_94cec41b4a9b814b35e9ed2273c57078;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_94cec41b4a9b814b35e9ed2273c57078 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_94cec41b4a9b814b35e9ed2273c57078)) {
        Py_XDECREF(cache_frame_94cec41b4a9b814b35e9ed2273c57078);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94cec41b4a9b814b35e9ed2273c57078 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94cec41b4a9b814b35e9ed2273c57078 = MAKE_FUNCTION_FRAME(codeobj_94cec41b4a9b814b35e9ed2273c57078, module_sklearn$externals$_packaging$_structures, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_94cec41b4a9b814b35e9ed2273c57078->m_type_description == NULL);
    frame_94cec41b4a9b814b35e9ed2273c57078 = cache_frame_94cec41b4a9b814b35e9ed2273c57078;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_94cec41b4a9b814b35e9ed2273c57078);
    assert(Py_REFCNT(frame_94cec41b4a9b814b35e9ed2273c57078) == 2);

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_other);
        tmp_isinstance_inst_1 = par_other;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_1);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_94cec41b4a9b814b35e9ed2273c57078, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94cec41b4a9b814b35e9ed2273c57078->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94cec41b4a9b814b35e9ed2273c57078, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94cec41b4a9b814b35e9ed2273c57078,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_94cec41b4a9b814b35e9ed2273c57078 == cache_frame_94cec41b4a9b814b35e9ed2273c57078) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_94cec41b4a9b814b35e9ed2273c57078);
        cache_frame_94cec41b4a9b814b35e9ed2273c57078 = NULL;
    }

    assertFrameObject(frame_94cec41b4a9b814b35e9ed2273c57078);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sklearn$externals$_packaging$_structures$$$function__9___neg__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e360a450f3b3c4f4b02c0670266c66d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e360a450f3b3c4f4b02c0670266c66d4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e360a450f3b3c4f4b02c0670266c66d4)) {
        Py_XDECREF(cache_frame_e360a450f3b3c4f4b02c0670266c66d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e360a450f3b3c4f4b02c0670266c66d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e360a450f3b3c4f4b02c0670266c66d4 = MAKE_FUNCTION_FRAME(codeobj_e360a450f3b3c4f4b02c0670266c66d4, module_sklearn$externals$_packaging$_structures, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e360a450f3b3c4f4b02c0670266c66d4->m_type_description == NULL);
    frame_e360a450f3b3c4f4b02c0670266c66d4 = cache_frame_e360a450f3b3c4f4b02c0670266c66d4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e360a450f3b3c4f4b02c0670266c66d4);
    assert(Py_REFCNT(frame_e360a450f3b3c4f4b02c0670266c66d4) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)mod_consts[0]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 55;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e360a450f3b3c4f4b02c0670266c66d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e360a450f3b3c4f4b02c0670266c66d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e360a450f3b3c4f4b02c0670266c66d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e360a450f3b3c4f4b02c0670266c66d4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e360a450f3b3c4f4b02c0670266c66d4 == cache_frame_e360a450f3b3c4f4b02c0670266c66d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e360a450f3b3c4f4b02c0670266c66d4);
        cache_frame_e360a450f3b3c4f4b02c0670266c66d4 = NULL;
    }

    assertFrameObject(frame_e360a450f3b3c4f4b02c0670266c66d4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sklearn$externals$_packaging$_structures$$$function__11___hash__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d5ca255461baf1f4f39251938d186ed3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d5ca255461baf1f4f39251938d186ed3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d5ca255461baf1f4f39251938d186ed3)) {
        Py_XDECREF(cache_frame_d5ca255461baf1f4f39251938d186ed3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d5ca255461baf1f4f39251938d186ed3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d5ca255461baf1f4f39251938d186ed3 = MAKE_FUNCTION_FRAME(codeobj_d5ca255461baf1f4f39251938d186ed3, module_sklearn$externals$_packaging$_structures, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d5ca255461baf1f4f39251938d186ed3->m_type_description == NULL);
    frame_d5ca255461baf1f4f39251938d186ed3 = cache_frame_d5ca255461baf1f4f39251938d186ed3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d5ca255461baf1f4f39251938d186ed3);
    assert(Py_REFCNT(frame_d5ca255461baf1f4f39251938d186ed3) == 2);

    // Framed code:
    {
        PyObject *tmp_hash_arg_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_self);
        tmp_operand_value_1 = par_self;
        tmp_hash_arg_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
        if (tmp_hash_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_HASH(tmp_hash_arg_1);
        Py_DECREF(tmp_hash_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_d5ca255461baf1f4f39251938d186ed3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d5ca255461baf1f4f39251938d186ed3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d5ca255461baf1f4f39251938d186ed3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d5ca255461baf1f4f39251938d186ed3,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d5ca255461baf1f4f39251938d186ed3 == cache_frame_d5ca255461baf1f4f39251938d186ed3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d5ca255461baf1f4f39251938d186ed3);
        cache_frame_d5ca255461baf1f4f39251938d186ed3 = NULL;
    }

    assertFrameObject(frame_d5ca255461baf1f4f39251938d186ed3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sklearn$externals$_packaging$_structures$$$function__14___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_3aa54d958da455dd5412c89f25b6435a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3aa54d958da455dd5412c89f25b6435a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3aa54d958da455dd5412c89f25b6435a)) {
        Py_XDECREF(cache_frame_3aa54d958da455dd5412c89f25b6435a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3aa54d958da455dd5412c89f25b6435a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3aa54d958da455dd5412c89f25b6435a = MAKE_FUNCTION_FRAME(codeobj_3aa54d958da455dd5412c89f25b6435a, module_sklearn$externals$_packaging$_structures, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3aa54d958da455dd5412c89f25b6435a->m_type_description == NULL);
    frame_3aa54d958da455dd5412c89f25b6435a = cache_frame_3aa54d958da455dd5412c89f25b6435a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3aa54d958da455dd5412c89f25b6435a);
    assert(Py_REFCNT(frame_3aa54d958da455dd5412c89f25b6435a) == 2);

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_other);
        tmp_isinstance_inst_1 = par_other;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_1);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_3aa54d958da455dd5412c89f25b6435a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3aa54d958da455dd5412c89f25b6435a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3aa54d958da455dd5412c89f25b6435a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3aa54d958da455dd5412c89f25b6435a,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_3aa54d958da455dd5412c89f25b6435a == cache_frame_3aa54d958da455dd5412c89f25b6435a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3aa54d958da455dd5412c89f25b6435a);
        cache_frame_3aa54d958da455dd5412c89f25b6435a = NULL;
    }

    assertFrameObject(frame_3aa54d958da455dd5412c89f25b6435a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sklearn$externals$_packaging$_structures$$$function__15___ne__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_c510f73714bf72acb7607c5365f5feb6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c510f73714bf72acb7607c5365f5feb6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c510f73714bf72acb7607c5365f5feb6)) {
        Py_XDECREF(cache_frame_c510f73714bf72acb7607c5365f5feb6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c510f73714bf72acb7607c5365f5feb6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c510f73714bf72acb7607c5365f5feb6 = MAKE_FUNCTION_FRAME(codeobj_c510f73714bf72acb7607c5365f5feb6, module_sklearn$externals$_packaging$_structures, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c510f73714bf72acb7607c5365f5feb6->m_type_description == NULL);
    frame_c510f73714bf72acb7607c5365f5feb6 = cache_frame_c510f73714bf72acb7607c5365f5feb6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c510f73714bf72acb7607c5365f5feb6);
    assert(Py_REFCNT(frame_c510f73714bf72acb7607c5365f5feb6) == 2);

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_other);
        tmp_isinstance_inst_1 = par_other;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_1);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_c510f73714bf72acb7607c5365f5feb6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c510f73714bf72acb7607c5365f5feb6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c510f73714bf72acb7607c5365f5feb6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c510f73714bf72acb7607c5365f5feb6,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_c510f73714bf72acb7607c5365f5feb6 == cache_frame_c510f73714bf72acb7607c5365f5feb6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c510f73714bf72acb7607c5365f5feb6);
        cache_frame_c510f73714bf72acb7607c5365f5feb6 = NULL;
    }

    assertFrameObject(frame_c510f73714bf72acb7607c5365f5feb6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sklearn$externals$_packaging$_structures$$$function__18___neg__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_52e20470f9717fa7b36fca9a22cf802d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_52e20470f9717fa7b36fca9a22cf802d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_52e20470f9717fa7b36fca9a22cf802d)) {
        Py_XDECREF(cache_frame_52e20470f9717fa7b36fca9a22cf802d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_52e20470f9717fa7b36fca9a22cf802d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_52e20470f9717fa7b36fca9a22cf802d = MAKE_FUNCTION_FRAME(codeobj_52e20470f9717fa7b36fca9a22cf802d, module_sklearn$externals$_packaging$_structures, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_52e20470f9717fa7b36fca9a22cf802d->m_type_description == NULL);
    frame_52e20470f9717fa7b36fca9a22cf802d = cache_frame_52e20470f9717fa7b36fca9a22cf802d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_52e20470f9717fa7b36fca9a22cf802d);
    assert(Py_REFCNT(frame_52e20470f9717fa7b36fca9a22cf802d) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)mod_consts[1]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 87;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_52e20470f9717fa7b36fca9a22cf802d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_52e20470f9717fa7b36fca9a22cf802d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_52e20470f9717fa7b36fca9a22cf802d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_52e20470f9717fa7b36fca9a22cf802d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_52e20470f9717fa7b36fca9a22cf802d == cache_frame_52e20470f9717fa7b36fca9a22cf802d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_52e20470f9717fa7b36fca9a22cf802d);
        cache_frame_52e20470f9717fa7b36fca9a22cf802d = NULL;
    }

    assertFrameObject(frame_52e20470f9717fa7b36fca9a22cf802d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__10___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[38],
#endif
        codeobj_1ca8480c2794575264335b8ba4aa324c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[37]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__11___hash__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$externals$_packaging$_structures$$$function__11___hash__,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[39],
#endif
        codeobj_d5ca255461baf1f4f39251938d186ed3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__12___lt__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[40],
#endif
        codeobj_0faf2eb6196119a9b9a0981c833c044f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__13___le__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[41],
#endif
        codeobj_67e1b2a376101051cbcc61d746445359,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__14___eq__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$externals$_packaging$_structures$$$function__14___eq__,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[42],
#endif
        codeobj_3aa54d958da455dd5412c89f25b6435a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__15___ne__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$externals$_packaging$_structures$$$function__15___ne__,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[43],
#endif
        codeobj_c510f73714bf72acb7607c5365f5feb6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__16___gt__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[44],
#endif
        codeobj_991d99f45f6c6bc1e8c6ef9fbea57ec2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__17___ge__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[45],
#endif
        codeobj_16034179d1bfd91d9ce274eacdccf88f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__18___neg__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$externals$_packaging$_structures$$$function__18___neg__,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[48],
#endif
        codeobj_52e20470f9717fa7b36fca9a22cf802d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__1___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[15],
#endif
        codeobj_07f0bd3e11724358e96a73a2915b65ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[1]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__2___hash__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$externals$_packaging$_structures$$$function__2___hash__,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[18],
#endif
        codeobj_d25a4c33d60e2f54adf59ccdb5a1483c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__3___lt__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[21],
#endif
        codeobj_4ea7c2d1a711b231103c62a59a094dfa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__4___le__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[23],
#endif
        codeobj_fd102941ed9ad88901d9bee20e693be2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__5___eq__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$externals$_packaging$_structures$$$function__5___eq__,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[25],
#endif
        codeobj_40a98a928bbffb6803ced8bb33b9fd9c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__6___ne__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$externals$_packaging$_structures$$$function__6___ne__,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[27],
#endif
        codeobj_94cec41b4a9b814b35e9ed2273c57078,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__7___gt__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[29],
#endif
        codeobj_f341297d1dfb22b1e1b988a88c38a529,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__8___ge__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[31],
#endif
        codeobj_c33f9e43aefb8c9aedf990a3db09a07b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__9___neg__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$externals$_packaging$_structures$$$function__9___neg__,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[34],
#endif
        codeobj_e360a450f3b3c4f4b02c0670266c66d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sklearn$externals$_packaging$_structures,
        NULL,
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

function_impl_code functable_sklearn$externals$_packaging$_structures[] = {
    NULL,
    impl_sklearn$externals$_packaging$_structures$$$function__2___hash__,
    NULL,
    NULL,
    impl_sklearn$externals$_packaging$_structures$$$function__5___eq__,
    impl_sklearn$externals$_packaging$_structures$$$function__6___ne__,
    NULL,
    NULL,
    impl_sklearn$externals$_packaging$_structures$$$function__9___neg__,
    NULL,
    impl_sklearn$externals$_packaging$_structures$$$function__11___hash__,
    NULL,
    NULL,
    impl_sklearn$externals$_packaging$_structures$$$function__14___eq__,
    impl_sklearn$externals$_packaging$_structures$$$function__15___ne__,
    NULL,
    NULL,
    impl_sklearn$externals$_packaging$_structures$$$function__18___neg__,
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

    function_impl_code *current = functable_sklearn$externals$_packaging$_structures;
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

    if (offset > sizeof(functable_sklearn$externals$_packaging$_structures) || offset < 0) {
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
        functable_sklearn$externals$_packaging$_structures[offset],
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
        module_sklearn$externals$_packaging$_structures,
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
PyObject *modulecode_sklearn$externals$_packaging$_structures(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sklearn.externals._packaging._structures");

    // Store the module for future use.
    module_sklearn$externals$_packaging$_structures = module;

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
        PRINT_STRING("sklearn.externals._packaging._structures: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sklearn.externals._packaging._structures: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sklearn.externals._packaging._structures: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsklearn$externals$_packaging$_structures\n");

    moduledict_sklearn$externals$_packaging$_structures = MODULE_DICT(module_sklearn$externals$_packaging$_structures);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sklearn$externals$_packaging$_structures,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sklearn$externals$_packaging$_structures,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[54]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sklearn$externals$_packaging$_structures,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sklearn$externals$_packaging$_structures,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sklearn$externals$_packaging$_structures,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sklearn$externals$_packaging$_structures);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_sklearn$externals$_packaging$_structures);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_0c20ec71ddb333d1e399af41d2242de9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
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
    PyObject *locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61 = NULL;
    struct Nuitka_FrameObject *frame_055a66bd58fc79611ce9f3f1fff2b6ab_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[2];
        UPDATE_STRING_DICT0(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_2);
    }
    frame_0c20ec71ddb333d1e399af41d2242de9 = MAKE_MODULE_FRAME(codeobj_0c20ec71ddb333d1e399af41d2242de9, module_sklearn$externals$_packaging$_structures);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0c20ec71ddb333d1e399af41d2242de9);
    assert(Py_REFCNT(frame_0c20ec71ddb333d1e399af41d2242de9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[7], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29, mod_consts[10], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[11];
        tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29, mod_consts[12], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_1;
            tmp_annotations_1 = DICT_COPY(mod_consts[13]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__1___repr__(tmp_annotations_1);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(mod_consts[16]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__2___hash__(tmp_annotations_2);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_3;
            tmp_annotations_3 = DICT_COPY(mod_consts[19]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__3___lt__(tmp_annotations_3);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_4;
            tmp_annotations_4 = DICT_COPY(mod_consts[19]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__4___le__(tmp_annotations_4);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_5;
            tmp_annotations_5 = DICT_COPY(mod_consts[19]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__5___eq__(tmp_annotations_5);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_6;
            tmp_annotations_6 = DICT_COPY(mod_consts[19]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__6___ne__(tmp_annotations_6);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_7;
            tmp_annotations_7 = DICT_COPY(mod_consts[19]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__7___gt__(tmp_annotations_7);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_8;
            tmp_annotations_8 = DICT_COPY(mod_consts[19]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__8___ge__(tmp_annotations_8);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29, mod_consts[30], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_9;
            tmp_annotations_9 = DICT_COPY(mod_consts[32]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__9___neg__(tmp_annotations_9);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[11];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_0c20ec71ddb333d1e399af41d2242de9->m_frame.f_lineno = 29;
            tmp_assign_source_7 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_7;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_6 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_6);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29);
        locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29 = NULL;
        goto try_return_handler_2;
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

        Py_DECREF(locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29);
        locals_sklearn$externals$_packaging$_structures$$$class__1_InfinityType_29 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
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
        exception_lineno = 29;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        assert(!(tmp_called_value_2 == NULL));
        frame_0c20ec71ddb333d1e399af41d2242de9->m_frame.f_lineno = 58;
        tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61, mod_consts[10], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[36];
        tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61, mod_consts[12], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_10;
            tmp_annotations_10 = DICT_COPY(mod_consts[13]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__10___repr__(tmp_annotations_10);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_11;
            tmp_annotations_11 = DICT_COPY(mod_consts[16]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__11___hash__(tmp_annotations_11);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_12;
            tmp_annotations_12 = DICT_COPY(mod_consts[19]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__12___lt__(tmp_annotations_12);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_13;
            tmp_annotations_13 = DICT_COPY(mod_consts[19]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__13___le__(tmp_annotations_13);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_14;
            tmp_annotations_14 = DICT_COPY(mod_consts[19]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__14___eq__(tmp_annotations_14);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_15;
            tmp_annotations_15 = DICT_COPY(mod_consts[19]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__15___ne__(tmp_annotations_15);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_16;
            tmp_annotations_16 = DICT_COPY(mod_consts[19]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__16___gt__(tmp_annotations_16);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_17;
            tmp_annotations_17 = DICT_COPY(mod_consts[19]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__17___ge__(tmp_annotations_17);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61, mod_consts[30], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_055a66bd58fc79611ce9f3f1fff2b6ab_2 = MAKE_CLASS_FRAME(codeobj_055a66bd58fc79611ce9f3f1fff2b6ab, module_sklearn$externals$_packaging$_structures, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_055a66bd58fc79611ce9f3f1fff2b6ab_2);
        assert(Py_REFCNT(frame_055a66bd58fc79611ce9f3f1fff2b6ab_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_dict_key_1 = mod_consts[46];
            tmp_dict_value_1 = (PyObject *)&PyBaseObject_Type;
            tmp_annotations_18 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[47];
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_18);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_sklearn$externals$_packaging$_structures$$$function__18___neg__(tmp_annotations_18);

            tmp_res = PyDict_SetItem(locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_055a66bd58fc79611ce9f3f1fff2b6ab_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_055a66bd58fc79611ce9f3f1fff2b6ab_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_055a66bd58fc79611ce9f3f1fff2b6ab_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_055a66bd58fc79611ce9f3f1fff2b6ab_2,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_055a66bd58fc79611ce9f3f1fff2b6ab_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_2 = mod_consts[36];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_0c20ec71ddb333d1e399af41d2242de9->m_frame.f_lineno = 61;
            tmp_assign_source_12 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_12;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_11 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_11);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61);
        locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61 = NULL;
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

        Py_DECREF(locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61);
        locals_sklearn$externals$_packaging$_structures$$$class__2_NegativeInfinityType_61 = NULL;
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
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
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
        exception_lineno = 61;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_11);
    }
    goto try_end_2;
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

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        assert(!(tmp_called_value_4 == NULL));
        frame_0c20ec71ddb333d1e399af41d2242de9->m_frame.f_lineno = 90;
        tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_13);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0c20ec71ddb333d1e399af41d2242de9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0c20ec71ddb333d1e399af41d2242de9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0c20ec71ddb333d1e399af41d2242de9, exception_lineno);
    }



    assertFrameObject(frame_0c20ec71ddb333d1e399af41d2242de9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sklearn.externals._packaging._structures", false);

    Py_INCREF(module_sklearn$externals$_packaging$_structures);
    return module_sklearn$externals$_packaging$_structures;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_packaging$_structures, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("sklearn$externals$_packaging$_structures", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
