/* Generated code for Python module 'slycot.analysis'
 * created by Nuitka version 0.6.18.1
 *
 * This code is in part copyright 2021 Kay Hayen.
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

/* The "module_slycot$analysis" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_slycot$analysis;
PyDictObject *moduledict_slycot$analysis;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[192];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[192];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("slycot.analysis"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 192; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if defined(_NUITKA_EXE) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_slycot$analysis(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 192; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0c59e6ef16c3a9eb5859a4222d0874a2;
static PyCodeObject *codeobj_7e725c7c68995842f293e8ac06aadeb5;
static PyCodeObject *codeobj_fe1062295054712ff7ad4d9618ea3466;
static PyCodeObject *codeobj_e47fe528dd35b9bb3f7a47a05f073d9e;
static PyCodeObject *codeobj_e6e6334f50d97feee41067cd2675f96d;
static PyCodeObject *codeobj_d5ac3998aa245ae3dcf3723bcda4cb8b;
static PyCodeObject *codeobj_d75cff994e7b3526a11fcc33f954da61;
static PyCodeObject *codeobj_032104e1c48d8e007e2d99d4dcbc1afd;
static PyCodeObject *codeobj_a7a3157639b101b75b4d0333d5f1128c;
static PyCodeObject *codeobj_4261d17cb04906378d0998da5e6da459;
static PyCodeObject *codeobj_648858c5756a53e68126f92e58ca2137;
static PyCodeObject *codeobj_e474fc2f4d830ee101f37c542592b1e3;
static PyCodeObject *codeobj_d5e13a0da9019e3028f5e7752d1e1811;
static PyCodeObject *codeobj_2f6333c5e53c9977fd4e648f880807b3;
static PyCodeObject *codeobj_2280b17bbeaf03908740e2c663cf32c8;
static PyCodeObject *codeobj_1a19f61d6737b2cb561c486d73cb607d;
static PyCodeObject *codeobj_6d174432c81aa63c1d2d0d6fdfe34e2b;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[175]); CHECK_OBJECT(module_filename_obj);
    codeobj_0c59e6ef16c3a9eb5859a4222d0874a2 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[176], NULL, NULL, 0, 0, 0);
    codeobj_7e725c7c68995842f293e8ac06aadeb5 = MAKE_CODEOBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[177], NULL, 7, 0, 0);
    codeobj_fe1062295054712ff7ad4d9618ea3466 = MAKE_CODEOBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[178], NULL, 14, 0, 0);
    codeobj_e47fe528dd35b9bb3f7a47a05f073d9e = MAKE_CODEOBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[179], NULL, 14, 0, 0);
    codeobj_e6e6334f50d97feee41067cd2675f96d = MAKE_CODEOBJECT(module_filename_obj, 317, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[180], NULL, 7, 0, 0);
    codeobj_d5ac3998aa245ae3dcf3723bcda4cb8b = MAKE_CODEOBJECT(module_filename_obj, 384, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], mod_consts[181], NULL, 10, 0, 0);
    codeobj_d75cff994e7b3526a11fcc33f954da61 = MAKE_CODEOBJECT(module_filename_obj, 468, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[182], NULL, 10, 0, 0);
    codeobj_032104e1c48d8e007e2d99d4dcbc1afd = MAKE_CODEOBJECT(module_filename_obj, 576, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[183], NULL, 12, 0, 0);
    codeobj_a7a3157639b101b75b4d0333d5f1128c = MAKE_CODEOBJECT(module_filename_obj, 696, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[107], mod_consts[184], NULL, 11, 0, 0);
    codeobj_4261d17cb04906378d0998da5e6da459 = MAKE_CODEOBJECT(module_filename_obj, 822, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[185], NULL, 14, 0, 0);
    codeobj_648858c5756a53e68126f92e58ca2137 = MAKE_CODEOBJECT(module_filename_obj, 967, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[119], mod_consts[186], NULL, 13, 0, 0);
    codeobj_e474fc2f4d830ee101f37c542592b1e3 = MAKE_CODEOBJECT(module_filename_obj, 1135, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[122], mod_consts[187], NULL, 15, 0, 0);
    codeobj_d5e13a0da9019e3028f5e7752d1e1811 = MAKE_CODEOBJECT(module_filename_obj, 1301, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[124], mod_consts[188], NULL, 10, 0, 0);
    codeobj_2f6333c5e53c9977fd4e648f880807b3 = MAKE_CODEOBJECT(module_filename_obj, 1389, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[189], NULL, 13, 0, 0);
    codeobj_2280b17bbeaf03908740e2c663cf32c8 = MAKE_CODEOBJECT(module_filename_obj, 1503, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[190], NULL, 3, 0, 0);
    codeobj_1a19f61d6737b2cb561c486d73cb607d = MAKE_CODEOBJECT(module_filename_obj, 1562, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[146], mod_consts[190], NULL, 3, 0, 0);
    codeobj_6d174432c81aa63c1d2d0d6fdfe34e2b = MAKE_CODEOBJECT(module_filename_obj, 1631, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], mod_consts[191], NULL, 12, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__10_ab09md(PyObject *defaults);


static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__11_ab09nd(PyObject *defaults);


static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__12_ab13bd(PyObject *defaults);


static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__13_ab13dd(PyObject *defaults);


static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__14_ab13ed(PyObject *defaults);


static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__15_ab13fd(PyObject *defaults);


static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__16_ag08bd(PyObject *defaults);


static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__1_ab01nd(PyObject *defaults);


static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__2_ab05md(PyObject *defaults);


static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__3_ab05nd(PyObject *defaults);


static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__4_ab07nd(PyObject *defaults);


static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__5_ab08nd(PyObject *defaults);


static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__6_ab08nz(PyObject *defaults);


static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__7_ab09ad(PyObject *defaults);


static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__8_ab09ax(PyObject *defaults);


static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__9_ab09bd(PyObject *defaults);


// The module function definitions.
static PyObject *impl_slycot$analysis$$$function__1_ab01nd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    PyObject *par_m = python_pars[1];
    PyObject *par_A = python_pars[2];
    PyObject *par_B = python_pars[3];
    PyObject *par_jobz = python_pars[4];
    PyObject *par_tol = python_pars[5];
    PyObject *par_ldwork = python_pars[6];
    PyObject *var_arg_list = NULL;
    PyObject *var_Ac = NULL;
    PyObject *var_Bc = NULL;
    PyObject *var_ncont = NULL;
    PyObject *var_indcon = NULL;
    PyObject *var_nblk = NULL;
    PyObject *var_Z = NULL;
    PyObject *var_tau = NULL;
    PyObject *var_info = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__element_8 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_7e725c7c68995842f293e8ac06aadeb5;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7e725c7c68995842f293e8ac06aadeb5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY(mod_consts[0]);
        assert(var_arg_list == NULL);
        var_arg_list = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_7e725c7c68995842f293e8ac06aadeb5)) {
        Py_XDECREF(cache_frame_7e725c7c68995842f293e8ac06aadeb5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7e725c7c68995842f293e8ac06aadeb5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7e725c7c68995842f293e8ac06aadeb5 = MAKE_FUNCTION_FRAME(codeobj_7e725c7c68995842f293e8ac06aadeb5, module_slycot$analysis, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7e725c7c68995842f293e8ac06aadeb5->m_type_description == NULL);
    frame_7e725c7c68995842f293e8ac06aadeb5 = cache_frame_7e725c7c68995842f293e8ac06aadeb5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7e725c7c68995842f293e8ac06aadeb5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7e725c7c68995842f293e8ac06aadeb5) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_ldwork);
        tmp_compexpr_left_1 = par_ldwork;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_n);
        tmp_args_element_value_1 = par_n;
        tmp_left_value_1 = mod_consts[2];
        CHECK_OBJECT(par_m);
        tmp_right_value_1 = par_m;
        tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooNooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7e725c7c68995842f293e8ac06aadeb5->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooNooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ldwork;
            assert(old != NULL);
            par_ldwork = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooNooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooNooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_jobz);
        tmp_kw_call_arg_value_0_1 = par_jobz;
        CHECK_OBJECT(par_n);
        tmp_kw_call_arg_value_1_1 = par_n;
        if (par_m == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "oooooooNooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_arg_value_2_1 = par_m;
        CHECK_OBJECT(par_A);
        tmp_kw_call_arg_value_3_1 = par_A;
        CHECK_OBJECT(par_B);
        tmp_kw_call_arg_value_4_1 = par_B;
        CHECK_OBJECT(par_tol);
        tmp_kw_call_dict_value_0_1 = par_tol;
        CHECK_OBJECT(par_ldwork);
        tmp_kw_call_dict_value_1_1 = par_ldwork;
        frame_7e725c7c68995842f293e8ac06aadeb5->m_frame.f_lineno = 132;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[6]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooNooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooNooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 8);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNooooooooo";
            exception_lineno = 132;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 8);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNooooooooo";
            exception_lineno = 132;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_3, 2, 8);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNooooooooo";
            exception_lineno = 132;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_4, 3, 8);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNooooooooo";
            exception_lineno = 132;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_5, 4, 8);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNooooooooo";
            exception_lineno = 132;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_6, 5, 8);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNooooooooo";
            exception_lineno = 132;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_6 == NULL);
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_7, 6, 8);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNooooooooo";
            exception_lineno = 132;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_7 == NULL);
        tmp_tuple_unpack_1__element_7 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_8, 7, 8);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNooooooooo";
            exception_lineno = 132;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_8 == NULL);
        tmp_tuple_unpack_1__element_8 = tmp_assign_source_11;
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

                    type_description_1 = "oooooooNooooooooo";
                    exception_lineno = 132;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[7];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooNooooooooo";
            exception_lineno = 132;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        assert(var_Ac == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_Ac = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
        assert(var_Bc == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_Bc = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_3;
        assert(var_ncont == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_ncont = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_4;
        assert(var_indcon == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_indcon = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_5;
        assert(var_nblk == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_nblk = tmp_assign_source_16;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_6;
        assert(var_Z == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_Z = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_7;
        assert(var_tau == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_tau = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_8);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_8;
        assert(var_info == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_info = tmp_assign_source_19;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;

    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooNooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_info);
        tmp_args_element_value_3 = var_info;
        CHECK_OBJECT(var_arg_list);
        tmp_args_element_value_4 = var_arg_list;
        frame_7e725c7c68995842f293e8ac06aadeb5->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooNooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_jobz);
        tmp_compexpr_left_2 = par_jobz;
        tmp_compexpr_right_2 = mod_consts[9];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooNooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 136;
            type_description_1 = "oooooooNooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = Py_None;
        {
            PyObject *old = var_Z;
            assert(old != NULL);
            var_Z = tmp_assign_source_20;
            Py_INCREF(var_Z);
            Py_DECREF(old);
        }

    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7e725c7c68995842f293e8ac06aadeb5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7e725c7c68995842f293e8ac06aadeb5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7e725c7c68995842f293e8ac06aadeb5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7e725c7c68995842f293e8ac06aadeb5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7e725c7c68995842f293e8ac06aadeb5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7e725c7c68995842f293e8ac06aadeb5,
        type_description_1,
        par_n,
        par_m,
        par_A,
        par_B,
        par_jobz,
        par_tol,
        par_ldwork,
        NULL,
        var_arg_list,
        var_Ac,
        var_Bc,
        var_ncont,
        var_indcon,
        var_nblk,
        var_Z,
        var_tau,
        var_info
    );


    // Release cached frame if used for exception.
    if (frame_7e725c7c68995842f293e8ac06aadeb5 == cache_frame_7e725c7c68995842f293e8ac06aadeb5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7e725c7c68995842f293e8ac06aadeb5);
        cache_frame_7e725c7c68995842f293e8ac06aadeb5 = NULL;
    }

    assertFrameObject(frame_7e725c7c68995842f293e8ac06aadeb5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_Ac);
        tmp_tuple_element_1 = var_Ac;
        tmp_return_value = PyTuple_New(7);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_Bc);
        tmp_tuple_element_1 = var_Bc;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_ncont);
        tmp_tuple_element_1 = var_ncont;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        CHECK_OBJECT(var_indcon);
        tmp_tuple_element_1 = var_indcon;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_1);
        CHECK_OBJECT(var_nblk);
        tmp_tuple_element_1 = var_nblk;
        PyTuple_SET_ITEM0(tmp_return_value, 4, tmp_tuple_element_1);
        CHECK_OBJECT(var_Z);
        tmp_tuple_element_1 = var_Z;
        PyTuple_SET_ITEM0(tmp_return_value, 5, tmp_tuple_element_1);
        CHECK_OBJECT(var_tau);
        tmp_tuple_element_1 = var_tau;
        PyTuple_SET_ITEM0(tmp_return_value, 6, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_ldwork);
    Py_DECREF(par_ldwork);
    par_ldwork = NULL;
    CHECK_OBJECT(var_arg_list);
    Py_DECREF(var_arg_list);
    var_arg_list = NULL;
    CHECK_OBJECT(var_Ac);
    Py_DECREF(var_Ac);
    var_Ac = NULL;
    CHECK_OBJECT(var_Bc);
    Py_DECREF(var_Bc);
    var_Bc = NULL;
    CHECK_OBJECT(var_ncont);
    Py_DECREF(var_ncont);
    var_ncont = NULL;
    CHECK_OBJECT(var_indcon);
    Py_DECREF(var_indcon);
    var_indcon = NULL;
    CHECK_OBJECT(var_nblk);
    Py_DECREF(var_nblk);
    var_nblk = NULL;
    CHECK_OBJECT(var_Z);
    Py_DECREF(var_Z);
    var_Z = NULL;
    CHECK_OBJECT(var_tau);
    Py_DECREF(var_tau);
    var_tau = NULL;
    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;
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

    Py_XDECREF(par_ldwork);
    par_ldwork = NULL;
    Py_XDECREF(var_arg_list);
    var_arg_list = NULL;
    Py_XDECREF(var_Ac);
    var_Ac = NULL;
    Py_XDECREF(var_Bc);
    var_Bc = NULL;
    Py_XDECREF(var_ncont);
    var_ncont = NULL;
    Py_XDECREF(var_indcon);
    var_indcon = NULL;
    Py_XDECREF(var_nblk);
    var_nblk = NULL;
    Py_XDECREF(var_Z);
    var_Z = NULL;
    Py_XDECREF(var_tau);
    var_tau = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
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
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_jobz);
    Py_DECREF(par_jobz);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_jobz);
    Py_DECREF(par_jobz);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_slycot$analysis$$$function__2_ab05md(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n1 = python_pars[0];
    PyObject *par_m1 = python_pars[1];
    PyObject *par_p1 = python_pars[2];
    PyObject *par_n2 = python_pars[3];
    PyObject *par_p2 = python_pars[4];
    PyObject *par_A1 = python_pars[5];
    PyObject *par_B1 = python_pars[6];
    PyObject *par_C1 = python_pars[7];
    PyObject *par_D1 = python_pars[8];
    PyObject *par_A2 = python_pars[9];
    PyObject *par_B2 = python_pars[10];
    PyObject *par_C2 = python_pars[11];
    PyObject *par_D2 = python_pars[12];
    PyObject *par_uplo = python_pars[13];
    PyObject *var_arg_list = NULL;
    PyObject *var_out = NULL;
    struct Nuitka_FrameObject *frame_fe1062295054712ff7ad4d9618ea3466;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fe1062295054712ff7ad4d9618ea3466 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY(mod_consts[11]);
        assert(var_arg_list == NULL);
        var_arg_list = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_fe1062295054712ff7ad4d9618ea3466)) {
        Py_XDECREF(cache_frame_fe1062295054712ff7ad4d9618ea3466);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fe1062295054712ff7ad4d9618ea3466 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fe1062295054712ff7ad4d9618ea3466 = MAKE_FUNCTION_FRAME(codeobj_fe1062295054712ff7ad4d9618ea3466, module_slycot$analysis, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_fe1062295054712ff7ad4d9618ea3466->m_type_description == NULL);
    frame_fe1062295054712ff7ad4d9618ea3466 = cache_frame_fe1062295054712ff7ad4d9618ea3466;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fe1062295054712ff7ad4d9618ea3466);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fe1062295054712ff7ad4d9618ea3466) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_kw_call_arg_value_5_1;
        PyObject *tmp_kw_call_arg_value_6_1;
        PyObject *tmp_kw_call_arg_value_7_1;
        PyObject *tmp_kw_call_arg_value_8_1;
        PyObject *tmp_kw_call_arg_value_9_1;
        PyObject *tmp_kw_call_arg_value_10_1;
        PyObject *tmp_kw_call_arg_value_11_1;
        PyObject *tmp_kw_call_arg_value_12_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n1);
        tmp_kw_call_arg_value_0_1 = par_n1;
        CHECK_OBJECT(par_m1);
        tmp_kw_call_arg_value_1_1 = par_m1;
        CHECK_OBJECT(par_p1);
        tmp_kw_call_arg_value_2_1 = par_p1;
        CHECK_OBJECT(par_n2);
        tmp_kw_call_arg_value_3_1 = par_n2;
        CHECK_OBJECT(par_p2);
        tmp_kw_call_arg_value_4_1 = par_p2;
        CHECK_OBJECT(par_A1);
        tmp_kw_call_arg_value_5_1 = par_A1;
        CHECK_OBJECT(par_B1);
        tmp_kw_call_arg_value_6_1 = par_B1;
        CHECK_OBJECT(par_C1);
        tmp_kw_call_arg_value_7_1 = par_C1;
        CHECK_OBJECT(par_D1);
        tmp_kw_call_arg_value_8_1 = par_D1;
        CHECK_OBJECT(par_A2);
        tmp_kw_call_arg_value_9_1 = par_A2;
        CHECK_OBJECT(par_B2);
        tmp_kw_call_arg_value_10_1 = par_B2;
        CHECK_OBJECT(par_C2);
        tmp_kw_call_arg_value_11_1 = par_C2;
        CHECK_OBJECT(par_D2);
        tmp_kw_call_arg_value_12_1 = par_D2;
        CHECK_OBJECT(par_uplo);
        tmp_kw_call_dict_value_0_1 = par_uplo;
        frame_fe1062295054712ff7ad4d9618ea3466->m_frame.f_lineno = 221;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1, tmp_kw_call_arg_value_7_1, tmp_kw_call_arg_value_8_1, tmp_kw_call_arg_value_9_1, tmp_kw_call_arg_value_10_1, tmp_kw_call_arg_value_11_1, tmp_kw_call_arg_value_12_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS13_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooNoo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_out);
        tmp_expression_value_2 = var_out;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, -1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arg_list);
        tmp_args_element_value_2 = var_arg_list;
        frame_fe1062295054712ff7ad4d9618ea3466->m_frame.f_lineno = 222;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooooNoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_out);
        tmp_expression_value_3 = var_out;
        tmp_subscript_value_2 = mod_consts[15];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooNoo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fe1062295054712ff7ad4d9618ea3466);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_fe1062295054712ff7ad4d9618ea3466);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fe1062295054712ff7ad4d9618ea3466);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fe1062295054712ff7ad4d9618ea3466, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fe1062295054712ff7ad4d9618ea3466->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fe1062295054712ff7ad4d9618ea3466, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fe1062295054712ff7ad4d9618ea3466,
        type_description_1,
        par_n1,
        par_m1,
        par_p1,
        par_n2,
        par_p2,
        par_A1,
        par_B1,
        par_C1,
        par_D1,
        par_A2,
        par_B2,
        par_C2,
        par_D2,
        par_uplo,
        NULL,
        var_arg_list,
        var_out
    );


    // Release cached frame if used for exception.
    if (frame_fe1062295054712ff7ad4d9618ea3466 == cache_frame_fe1062295054712ff7ad4d9618ea3466) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_fe1062295054712ff7ad4d9618ea3466);
        cache_frame_fe1062295054712ff7ad4d9618ea3466 = NULL;
    }

    assertFrameObject(frame_fe1062295054712ff7ad4d9618ea3466);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_arg_list);
    Py_DECREF(var_arg_list);
    var_arg_list = NULL;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
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

    Py_XDECREF(var_arg_list);
    var_arg_list = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
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
    CHECK_OBJECT(par_n1);
    Py_DECREF(par_n1);
    CHECK_OBJECT(par_m1);
    Py_DECREF(par_m1);
    CHECK_OBJECT(par_p1);
    Py_DECREF(par_p1);
    CHECK_OBJECT(par_n2);
    Py_DECREF(par_n2);
    CHECK_OBJECT(par_p2);
    Py_DECREF(par_p2);
    CHECK_OBJECT(par_A1);
    Py_DECREF(par_A1);
    CHECK_OBJECT(par_B1);
    Py_DECREF(par_B1);
    CHECK_OBJECT(par_C1);
    Py_DECREF(par_C1);
    CHECK_OBJECT(par_D1);
    Py_DECREF(par_D1);
    CHECK_OBJECT(par_A2);
    Py_DECREF(par_A2);
    CHECK_OBJECT(par_B2);
    Py_DECREF(par_B2);
    CHECK_OBJECT(par_C2);
    Py_DECREF(par_C2);
    CHECK_OBJECT(par_D2);
    Py_DECREF(par_D2);
    CHECK_OBJECT(par_uplo);
    Py_DECREF(par_uplo);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n1);
    Py_DECREF(par_n1);
    CHECK_OBJECT(par_m1);
    Py_DECREF(par_m1);
    CHECK_OBJECT(par_p1);
    Py_DECREF(par_p1);
    CHECK_OBJECT(par_n2);
    Py_DECREF(par_n2);
    CHECK_OBJECT(par_p2);
    Py_DECREF(par_p2);
    CHECK_OBJECT(par_A1);
    Py_DECREF(par_A1);
    CHECK_OBJECT(par_B1);
    Py_DECREF(par_B1);
    CHECK_OBJECT(par_C1);
    Py_DECREF(par_C1);
    CHECK_OBJECT(par_D1);
    Py_DECREF(par_D1);
    CHECK_OBJECT(par_A2);
    Py_DECREF(par_A2);
    CHECK_OBJECT(par_B2);
    Py_DECREF(par_B2);
    CHECK_OBJECT(par_C2);
    Py_DECREF(par_C2);
    CHECK_OBJECT(par_D2);
    Py_DECREF(par_D2);
    CHECK_OBJECT(par_uplo);
    Py_DECREF(par_uplo);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_slycot$analysis$$$function__3_ab05nd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n1 = python_pars[0];
    PyObject *par_m1 = python_pars[1];
    PyObject *par_p1 = python_pars[2];
    PyObject *par_n2 = python_pars[3];
    PyObject *par_A1 = python_pars[4];
    PyObject *par_B1 = python_pars[5];
    PyObject *par_C1 = python_pars[6];
    PyObject *par_D1 = python_pars[7];
    PyObject *par_A2 = python_pars[8];
    PyObject *par_B2 = python_pars[9];
    PyObject *par_C2 = python_pars[10];
    PyObject *par_D2 = python_pars[11];
    PyObject *par_alpha = python_pars[12];
    PyObject *par_ldwork = python_pars[13];
    PyObject *var_hidden = NULL;
    PyObject *var_arg_list = NULL;
    PyObject *var_out = NULL;
    struct Nuitka_FrameObject *frame_e47fe528dd35b9bb3f7a47a05f073d9e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *locals_slycot$analysis$$$function__3_ab05nd = NULL;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e47fe528dd35b9bb3f7a47a05f073d9e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[17];
        assert(var_hidden == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_hidden = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        tmp_left_value_1 = mod_consts[18];
        CHECK_OBJECT(var_hidden);
        tmp_right_value_1 = var_hidden;
        tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_1, tmp_right_value_1);
        assert(!(tmp_list_element_1 == NULL));
        tmp_assign_source_2 = PyList_New(35);
        {
            PyObject *tmp_left_value_2;
            PyObject *tmp_right_value_2;
            PyObject *tmp_left_value_3;
            PyObject *tmp_right_value_3;
            PyObject *tmp_left_value_4;
            PyObject *tmp_right_value_4;
            PyObject *tmp_left_value_5;
            PyObject *tmp_right_value_5;
            PyObject *tmp_left_value_6;
            PyObject *tmp_right_value_6;
            PyObject *tmp_left_value_7;
            PyObject *tmp_right_value_7;
            PyObject *tmp_left_value_8;
            PyObject *tmp_right_value_8;
            PyObject *tmp_left_value_9;
            PyObject *tmp_right_value_9;
            PyObject *tmp_left_value_10;
            PyObject *tmp_right_value_10;
            PyObject *tmp_left_value_11;
            PyObject *tmp_right_value_11;
            PyObject *tmp_left_value_12;
            PyObject *tmp_right_value_12;
            PyObject *tmp_left_value_13;
            PyObject *tmp_right_value_13;
            PyObject *tmp_left_value_14;
            PyObject *tmp_right_value_14;
            PyObject *tmp_left_value_15;
            PyObject *tmp_right_value_15;
            PyObject *tmp_left_value_16;
            PyObject *tmp_right_value_16;
            PyList_SET_ITEM(tmp_assign_source_2, 0, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[19];
            PyList_SET_ITEM0(tmp_assign_source_2, 1, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[20];
            PyList_SET_ITEM0(tmp_assign_source_2, 2, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[21];
            PyList_SET_ITEM0(tmp_assign_source_2, 3, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[22];
            PyList_SET_ITEM0(tmp_assign_source_2, 4, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[23];
            PyList_SET_ITEM0(tmp_assign_source_2, 5, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[24];
            PyList_SET_ITEM0(tmp_assign_source_2, 6, tmp_list_element_1);
            tmp_left_value_2 = mod_consts[25];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_2 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_2, tmp_right_value_2);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 7, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[26];
            PyList_SET_ITEM0(tmp_assign_source_2, 8, tmp_list_element_1);
            tmp_left_value_3 = mod_consts[27];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_3 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_3, tmp_right_value_3);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 9, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[28];
            PyList_SET_ITEM0(tmp_assign_source_2, 10, tmp_list_element_1);
            tmp_left_value_4 = mod_consts[29];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_4 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_4, tmp_right_value_4);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 11, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[30];
            PyList_SET_ITEM0(tmp_assign_source_2, 12, tmp_list_element_1);
            tmp_left_value_5 = mod_consts[31];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_5 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_5, tmp_right_value_5);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 13, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[32];
            PyList_SET_ITEM0(tmp_assign_source_2, 14, tmp_list_element_1);
            tmp_left_value_6 = mod_consts[33];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_6 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_6, tmp_right_value_6);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 15, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[34];
            PyList_SET_ITEM0(tmp_assign_source_2, 16, tmp_list_element_1);
            tmp_left_value_7 = mod_consts[35];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_7 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_7, tmp_right_value_7);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 17, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[36];
            PyList_SET_ITEM0(tmp_assign_source_2, 18, tmp_list_element_1);
            tmp_left_value_8 = mod_consts[37];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_8 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_8, tmp_right_value_8);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 19, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[38];
            PyList_SET_ITEM0(tmp_assign_source_2, 20, tmp_list_element_1);
            tmp_left_value_9 = mod_consts[39];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_9 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_9, tmp_right_value_9);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 21, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[40];
            PyList_SET_ITEM0(tmp_assign_source_2, 22, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[41];
            PyList_SET_ITEM0(tmp_assign_source_2, 23, tmp_list_element_1);
            tmp_left_value_10 = mod_consts[42];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_10 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_10, tmp_right_value_10);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 24, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[43];
            PyList_SET_ITEM0(tmp_assign_source_2, 25, tmp_list_element_1);
            tmp_left_value_11 = mod_consts[44];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_11 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_11, tmp_right_value_11);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 26, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[45];
            PyList_SET_ITEM0(tmp_assign_source_2, 27, tmp_list_element_1);
            tmp_left_value_12 = mod_consts[46];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_12 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_12, tmp_right_value_12);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 28, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[47];
            PyList_SET_ITEM0(tmp_assign_source_2, 29, tmp_list_element_1);
            tmp_left_value_13 = mod_consts[48];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_13 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_13, tmp_right_value_13);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 30, tmp_list_element_1);
            tmp_left_value_14 = mod_consts[49];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_14 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_14, tmp_right_value_14);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 31, tmp_list_element_1);
            tmp_left_value_15 = mod_consts[50];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_15 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_15, tmp_right_value_15);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 32, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[51];
            PyList_SET_ITEM0(tmp_assign_source_2, 33, tmp_list_element_1);
            tmp_left_value_16 = mod_consts[52];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_16 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_16, tmp_right_value_16);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 34, tmp_list_element_1);
        }
        assert(var_arg_list == NULL);
        var_arg_list = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_e47fe528dd35b9bb3f7a47a05f073d9e)) {
        Py_XDECREF(cache_frame_e47fe528dd35b9bb3f7a47a05f073d9e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e47fe528dd35b9bb3f7a47a05f073d9e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e47fe528dd35b9bb3f7a47a05f073d9e = MAKE_FUNCTION_FRAME(codeobj_e47fe528dd35b9bb3f7a47a05f073d9e, module_slycot$analysis, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e47fe528dd35b9bb3f7a47a05f073d9e->m_type_description == NULL);
    frame_e47fe528dd35b9bb3f7a47a05f073d9e = cache_frame_e47fe528dd35b9bb3f7a47a05f073d9e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e47fe528dd35b9bb3f7a47a05f073d9e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e47fe528dd35b9bb3f7a47a05f073d9e) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_ldwork);
        tmp_compexpr_left_1 = par_ldwork;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_left_value_17;
        PyObject *tmp_right_value_17;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_left_value_18;
        PyObject *tmp_right_value_18;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_left_value_19;
        PyObject *tmp_right_value_19;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_p1);
        tmp_left_value_17 = par_p1;
        CHECK_OBJECT(par_p1);
        tmp_right_value_17 = par_p1;
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_17, tmp_right_value_17);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_m1);
        tmp_left_value_18 = par_m1;
        CHECK_OBJECT(par_m1);
        tmp_right_value_18 = par_m1;
        tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_18, tmp_right_value_18);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 312;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n1);
        tmp_left_value_19 = par_n1;
        CHECK_OBJECT(par_p1);
        tmp_right_value_19 = par_p1;
        tmp_args_element_value_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_19, tmp_right_value_19);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 312;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e47fe528dd35b9bb3f7a47a05f073d9e->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ldwork;
            assert(old != NULL);
            par_ldwork = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_kw_call_arg_value_5_1;
        PyObject *tmp_kw_call_arg_value_6_1;
        PyObject *tmp_kw_call_arg_value_7_1;
        PyObject *tmp_kw_call_arg_value_8_1;
        PyObject *tmp_kw_call_arg_value_9_1;
        PyObject *tmp_kw_call_arg_value_10_1;
        PyObject *tmp_kw_call_arg_value_11_1;
        PyObject *tmp_kw_call_arg_value_12_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[53]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_n1 == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_n1;
        if (par_m1 == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_1 = par_m1;
        if (par_p1 == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_2_1 = par_p1;
        CHECK_OBJECT(par_n2);
        tmp_kw_call_arg_value_3_1 = par_n2;
        CHECK_OBJECT(par_alpha);
        tmp_kw_call_arg_value_4_1 = par_alpha;
        CHECK_OBJECT(par_A1);
        tmp_kw_call_arg_value_5_1 = par_A1;
        CHECK_OBJECT(par_B1);
        tmp_kw_call_arg_value_6_1 = par_B1;
        CHECK_OBJECT(par_C1);
        tmp_kw_call_arg_value_7_1 = par_C1;
        CHECK_OBJECT(par_D1);
        tmp_kw_call_arg_value_8_1 = par_D1;
        CHECK_OBJECT(par_A2);
        tmp_kw_call_arg_value_9_1 = par_A2;
        CHECK_OBJECT(par_B2);
        tmp_kw_call_arg_value_10_1 = par_B2;
        CHECK_OBJECT(par_C2);
        tmp_kw_call_arg_value_11_1 = par_C2;
        CHECK_OBJECT(par_D2);
        tmp_kw_call_arg_value_12_1 = par_D2;
        CHECK_OBJECT(par_ldwork);
        tmp_kw_call_dict_value_0_1 = par_ldwork;
        frame_e47fe528dd35b9bb3f7a47a05f073d9e->m_frame.f_lineno = 313;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1, tmp_kw_call_arg_value_7_1, tmp_kw_call_arg_value_8_1, tmp_kw_call_arg_value_9_1, tmp_kw_call_arg_value_10_1, tmp_kw_call_arg_value_11_1, tmp_kw_call_arg_value_12_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS13_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[54]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_out);
        tmp_expression_value_2 = var_out;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, -1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arg_list);
        tmp_args_element_value_5 = var_arg_list;
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (locals_slycot$analysis$$$function__3_ab05nd == NULL) locals_slycot$analysis$$$function__3_ab05nd = PyDict_New();
        tmp_args_element_value_7 = locals_slycot$analysis$$$function__3_ab05nd;
        Py_INCREF(tmp_args_element_value_7);
        if (par_n1 != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_n1);
            value = par_n1;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_7, (Nuitka_StringObject *)mod_consts[19], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_7, mod_consts[19]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_m1 != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_m1);
            value = par_m1;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_7, (Nuitka_StringObject *)mod_consts[20], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_7, mod_consts[20]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_p1 != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_p1);
            value = par_p1;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_7, (Nuitka_StringObject *)mod_consts[21], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_7, mod_consts[21]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_n2 != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_n2);
            value = par_n2;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_7, (Nuitka_StringObject *)mod_consts[22], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_7, mod_consts[22]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_A1 != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_A1);
            value = par_A1;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_7, (Nuitka_StringObject *)mod_consts[24], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_7, mod_consts[24]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_B1 != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_B1);
            value = par_B1;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_7, (Nuitka_StringObject *)mod_consts[26], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_7, mod_consts[26]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_C1 != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_C1);
            value = par_C1;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_7, (Nuitka_StringObject *)mod_consts[28], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_7, mod_consts[28]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_D1 != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_D1);
            value = par_D1;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_7, (Nuitka_StringObject *)mod_consts[30], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_7, mod_consts[30]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_A2 != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_A2);
            value = par_A2;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_7, (Nuitka_StringObject *)mod_consts[32], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_7, mod_consts[32]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_B2 != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_B2);
            value = par_B2;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_7, (Nuitka_StringObject *)mod_consts[34], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_7, mod_consts[34]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_C2 != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_C2);
            value = par_C2;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_7, (Nuitka_StringObject *)mod_consts[36], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_7, mod_consts[36]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_D2 != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_D2);
            value = par_D2;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_7, (Nuitka_StringObject *)mod_consts[38], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_7, mod_consts[38]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_alpha != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_alpha);
            value = par_alpha;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_7, (Nuitka_StringObject *)mod_consts[23], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_7, mod_consts[23]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_ldwork != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_ldwork);
            value = par_ldwork;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_7, (Nuitka_StringObject *)mod_consts[51], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_7, mod_consts[51]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_hidden != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_hidden);
            value = var_hidden;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_7, (Nuitka_StringObject *)mod_consts[55], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_7, mod_consts[55]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_arg_list != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_arg_list);
            value = var_arg_list;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_7, (Nuitka_StringObject *)mod_consts[56], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_7, mod_consts[56]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_out != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_out);
            value = var_out;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_7, (Nuitka_StringObject *)mod_consts[57], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_7, mod_consts[57]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        frame_e47fe528dd35b9bb3f7a47a05f073d9e->m_frame.f_lineno = 314;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_out);
        tmp_expression_value_3 = var_out;
        tmp_subscript_value_2 = mod_consts[15];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e47fe528dd35b9bb3f7a47a05f073d9e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e47fe528dd35b9bb3f7a47a05f073d9e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e47fe528dd35b9bb3f7a47a05f073d9e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e47fe528dd35b9bb3f7a47a05f073d9e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e47fe528dd35b9bb3f7a47a05f073d9e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e47fe528dd35b9bb3f7a47a05f073d9e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e47fe528dd35b9bb3f7a47a05f073d9e,
        type_description_1,
        par_n1,
        par_m1,
        par_p1,
        par_n2,
        par_A1,
        par_B1,
        par_C1,
        par_D1,
        par_A2,
        par_B2,
        par_C2,
        par_D2,
        par_alpha,
        par_ldwork,
        var_hidden,
        var_arg_list,
        var_out
    );


    // Release cached frame if used for exception.
    if (frame_e47fe528dd35b9bb3f7a47a05f073d9e == cache_frame_e47fe528dd35b9bb3f7a47a05f073d9e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e47fe528dd35b9bb3f7a47a05f073d9e);
        cache_frame_e47fe528dd35b9bb3f7a47a05f073d9e = NULL;
    }

    assertFrameObject(frame_e47fe528dd35b9bb3f7a47a05f073d9e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_ldwork);
    Py_DECREF(par_ldwork);
    par_ldwork = NULL;
    CHECK_OBJECT(var_hidden);
    Py_DECREF(var_hidden);
    var_hidden = NULL;
    CHECK_OBJECT(var_arg_list);
    Py_DECREF(var_arg_list);
    var_arg_list = NULL;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
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

    Py_XDECREF(par_ldwork);
    par_ldwork = NULL;
    Py_XDECREF(var_hidden);
    var_hidden = NULL;
    Py_XDECREF(var_arg_list);
    var_arg_list = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
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
    Py_XDECREF(locals_slycot$analysis$$$function__3_ab05nd);

    CHECK_OBJECT(par_n1);
    Py_DECREF(par_n1);
    CHECK_OBJECT(par_m1);
    Py_DECREF(par_m1);
    CHECK_OBJECT(par_p1);
    Py_DECREF(par_p1);
    CHECK_OBJECT(par_n2);
    Py_DECREF(par_n2);
    CHECK_OBJECT(par_A1);
    Py_DECREF(par_A1);
    CHECK_OBJECT(par_B1);
    Py_DECREF(par_B1);
    CHECK_OBJECT(par_C1);
    Py_DECREF(par_C1);
    CHECK_OBJECT(par_D1);
    Py_DECREF(par_D1);
    CHECK_OBJECT(par_A2);
    Py_DECREF(par_A2);
    CHECK_OBJECT(par_B2);
    Py_DECREF(par_B2);
    CHECK_OBJECT(par_C2);
    Py_DECREF(par_C2);
    CHECK_OBJECT(par_D2);
    Py_DECREF(par_D2);
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_slycot$analysis$$$function__3_ab05nd);

    CHECK_OBJECT(par_n1);
    Py_DECREF(par_n1);
    CHECK_OBJECT(par_m1);
    Py_DECREF(par_m1);
    CHECK_OBJECT(par_p1);
    Py_DECREF(par_p1);
    CHECK_OBJECT(par_n2);
    Py_DECREF(par_n2);
    CHECK_OBJECT(par_A1);
    Py_DECREF(par_A1);
    CHECK_OBJECT(par_B1);
    Py_DECREF(par_B1);
    CHECK_OBJECT(par_C1);
    Py_DECREF(par_C1);
    CHECK_OBJECT(par_D1);
    Py_DECREF(par_D1);
    CHECK_OBJECT(par_A2);
    Py_DECREF(par_A2);
    CHECK_OBJECT(par_B2);
    Py_DECREF(par_B2);
    CHECK_OBJECT(par_C2);
    Py_DECREF(par_C2);
    CHECK_OBJECT(par_D2);
    Py_DECREF(par_D2);
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_slycot$analysis$$$function__4_ab07nd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    PyObject *par_m = python_pars[1];
    PyObject *par_A = python_pars[2];
    PyObject *par_B = python_pars[3];
    PyObject *par_C = python_pars[4];
    PyObject *par_D = python_pars[5];
    PyObject *par_ldwork = python_pars[6];
    PyObject *var_hidden = NULL;
    PyObject *var_arg_list = NULL;
    PyObject *var_out = NULL;
    struct Nuitka_FrameObject *frame_e6e6334f50d97feee41067cd2675f96d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *locals_slycot$analysis$$$function__4_ab07nd = NULL;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e6e6334f50d97feee41067cd2675f96d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[17];
        assert(var_hidden == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_hidden = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = mod_consts[40];
        tmp_assign_source_2 = PyList_New(15);
        {
            PyObject *tmp_left_value_1;
            PyObject *tmp_right_value_1;
            PyObject *tmp_left_value_2;
            PyObject *tmp_right_value_2;
            PyObject *tmp_left_value_3;
            PyObject *tmp_right_value_3;
            PyObject *tmp_left_value_4;
            PyObject *tmp_right_value_4;
            PyObject *tmp_left_value_5;
            PyObject *tmp_right_value_5;
            PyObject *tmp_left_value_6;
            PyObject *tmp_right_value_6;
            PyObject *tmp_left_value_7;
            PyObject *tmp_right_value_7;
            PyList_SET_ITEM0(tmp_assign_source_2, 0, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[5];
            PyList_SET_ITEM0(tmp_assign_source_2, 1, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[41];
            PyList_SET_ITEM0(tmp_assign_source_2, 2, tmp_list_element_1);
            tmp_left_value_1 = mod_consts[42];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_1 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_1, tmp_right_value_1);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 3, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[43];
            PyList_SET_ITEM0(tmp_assign_source_2, 4, tmp_list_element_1);
            tmp_left_value_2 = mod_consts[44];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_2 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_2, tmp_right_value_2);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 5, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[45];
            PyList_SET_ITEM0(tmp_assign_source_2, 6, tmp_list_element_1);
            tmp_left_value_3 = mod_consts[46];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_3 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_3, tmp_right_value_3);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 7, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[47];
            PyList_SET_ITEM0(tmp_assign_source_2, 8, tmp_list_element_1);
            tmp_left_value_4 = mod_consts[48];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_4 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_4, tmp_right_value_4);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 9, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[59];
            PyList_SET_ITEM0(tmp_assign_source_2, 10, tmp_list_element_1);
            tmp_left_value_5 = mod_consts[49];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_5 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_5, tmp_right_value_5);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 11, tmp_list_element_1);
            tmp_left_value_6 = mod_consts[50];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_6 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_6, tmp_right_value_6);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 12, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[51];
            PyList_SET_ITEM0(tmp_assign_source_2, 13, tmp_list_element_1);
            tmp_left_value_7 = mod_consts[60];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_7 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_7, tmp_right_value_7);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 14, tmp_list_element_1);
        }
        assert(var_arg_list == NULL);
        var_arg_list = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_e6e6334f50d97feee41067cd2675f96d)) {
        Py_XDECREF(cache_frame_e6e6334f50d97feee41067cd2675f96d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e6e6334f50d97feee41067cd2675f96d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e6e6334f50d97feee41067cd2675f96d = MAKE_FUNCTION_FRAME(codeobj_e6e6334f50d97feee41067cd2675f96d, module_slycot$analysis, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e6e6334f50d97feee41067cd2675f96d->m_type_description == NULL);
    frame_e6e6334f50d97feee41067cd2675f96d = cache_frame_e6e6334f50d97feee41067cd2675f96d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e6e6334f50d97feee41067cd2675f96d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e6e6334f50d97feee41067cd2675f96d) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_ldwork);
        tmp_compexpr_left_1 = par_ldwork;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_left_value_8;
        PyObject *tmp_right_value_8;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_1 != NULL);
        tmp_args_element_value_1 = mod_consts[61];
        tmp_left_value_8 = mod_consts[62];
        CHECK_OBJECT(par_m);
        tmp_right_value_8 = par_m;
        tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_8, tmp_right_value_8);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e6e6334f50d97feee41067cd2675f96d->m_frame.f_lineno = 378;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ldwork;
            assert(old != NULL);
            par_ldwork = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_kw_call_arg_value_5_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_kw_call_arg_value_0_1 = par_n;
        if (par_m == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 379;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_1 = par_m;
        CHECK_OBJECT(par_A);
        tmp_kw_call_arg_value_2_1 = par_A;
        CHECK_OBJECT(par_B);
        tmp_kw_call_arg_value_3_1 = par_B;
        CHECK_OBJECT(par_C);
        tmp_kw_call_arg_value_4_1 = par_C;
        CHECK_OBJECT(par_D);
        tmp_kw_call_arg_value_5_1 = par_D;
        CHECK_OBJECT(par_ldwork);
        tmp_kw_call_dict_value_0_1 = par_ldwork;
        frame_e6e6334f50d97feee41067cd2675f96d->m_frame.f_lineno = 379;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS6_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[54]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_out);
        tmp_expression_value_2 = var_out;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, -1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arg_list);
        tmp_args_element_value_4 = var_arg_list;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 380;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[64]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 380;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (locals_slycot$analysis$$$function__4_ab07nd == NULL) locals_slycot$analysis$$$function__4_ab07nd = PyDict_New();
        tmp_args_element_value_6 = locals_slycot$analysis$$$function__4_ab07nd;
        Py_INCREF(tmp_args_element_value_6);
        if (par_n != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_n);
            value = par_n;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_6, (Nuitka_StringObject *)mod_consts[40], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_6, mod_consts[40]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_m != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_m);
            value = par_m;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_6, (Nuitka_StringObject *)mod_consts[5], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_6, mod_consts[5]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_A != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_A);
            value = par_A;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_6, (Nuitka_StringObject *)mod_consts[41], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_6, mod_consts[41]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_B != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_B);
            value = par_B;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_6, (Nuitka_StringObject *)mod_consts[43], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_6, mod_consts[43]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_C != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_C);
            value = par_C;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_6, (Nuitka_StringObject *)mod_consts[45], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_6, mod_consts[45]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_D != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_D);
            value = par_D;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_6, (Nuitka_StringObject *)mod_consts[47], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_6, mod_consts[47]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_ldwork != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_ldwork);
            value = par_ldwork;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_6, (Nuitka_StringObject *)mod_consts[51], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_6, mod_consts[51]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_hidden != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_hidden);
            value = var_hidden;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_6, (Nuitka_StringObject *)mod_consts[55], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_6, mod_consts[55]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_arg_list != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_arg_list);
            value = var_arg_list;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_6, (Nuitka_StringObject *)mod_consts[56], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_6, mod_consts[56]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_out != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_out);
            value = var_out;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_6, (Nuitka_StringObject *)mod_consts[57], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_6, mod_consts[57]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        frame_e6e6334f50d97feee41067cd2675f96d->m_frame.f_lineno = 380;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_out);
        tmp_expression_value_4 = var_out;
        tmp_subscript_value_2 = mod_consts[15];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6e6334f50d97feee41067cd2675f96d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6e6334f50d97feee41067cd2675f96d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6e6334f50d97feee41067cd2675f96d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e6e6334f50d97feee41067cd2675f96d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e6e6334f50d97feee41067cd2675f96d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6e6334f50d97feee41067cd2675f96d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e6e6334f50d97feee41067cd2675f96d,
        type_description_1,
        par_n,
        par_m,
        par_A,
        par_B,
        par_C,
        par_D,
        par_ldwork,
        var_hidden,
        var_arg_list,
        var_out
    );


    // Release cached frame if used for exception.
    if (frame_e6e6334f50d97feee41067cd2675f96d == cache_frame_e6e6334f50d97feee41067cd2675f96d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e6e6334f50d97feee41067cd2675f96d);
        cache_frame_e6e6334f50d97feee41067cd2675f96d = NULL;
    }

    assertFrameObject(frame_e6e6334f50d97feee41067cd2675f96d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_ldwork);
    Py_DECREF(par_ldwork);
    par_ldwork = NULL;
    CHECK_OBJECT(var_hidden);
    Py_DECREF(var_hidden);
    var_hidden = NULL;
    CHECK_OBJECT(var_arg_list);
    Py_DECREF(var_arg_list);
    var_arg_list = NULL;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
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

    Py_XDECREF(par_ldwork);
    par_ldwork = NULL;
    Py_XDECREF(var_hidden);
    var_hidden = NULL;
    Py_XDECREF(var_arg_list);
    var_arg_list = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
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
    Py_XDECREF(locals_slycot$analysis$$$function__4_ab07nd);

    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    CHECK_OBJECT(par_D);
    Py_DECREF(par_D);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_slycot$analysis$$$function__4_ab07nd);

    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    CHECK_OBJECT(par_D);
    Py_DECREF(par_D);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_slycot$analysis$$$function__5_ab08nd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    PyObject *par_m = python_pars[1];
    PyObject *par_p = python_pars[2];
    PyObject *par_A = python_pars[3];
    PyObject *par_B = python_pars[4];
    PyObject *par_C = python_pars[5];
    PyObject *par_D = python_pars[6];
    PyObject *par_equil = python_pars[7];
    PyObject *par_tol = python_pars[8];
    PyObject *par_ldwork = python_pars[9];
    PyObject *var_arg_list = NULL;
    PyObject *var_out = NULL;
    struct Nuitka_FrameObject *frame_d5ac3998aa245ae3dcf3723bcda4cb8b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d5ac3998aa245ae3dcf3723bcda4cb8b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY(mod_consts[66]);
        assert(var_arg_list == NULL);
        var_arg_list = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_d5ac3998aa245ae3dcf3723bcda4cb8b)) {
        Py_XDECREF(cache_frame_d5ac3998aa245ae3dcf3723bcda4cb8b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d5ac3998aa245ae3dcf3723bcda4cb8b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d5ac3998aa245ae3dcf3723bcda4cb8b = MAKE_FUNCTION_FRAME(codeobj_d5ac3998aa245ae3dcf3723bcda4cb8b, module_slycot$analysis, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d5ac3998aa245ae3dcf3723bcda4cb8b->m_type_description == NULL);
    frame_d5ac3998aa245ae3dcf3723bcda4cb8b = cache_frame_d5ac3998aa245ae3dcf3723bcda4cb8b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d5ac3998aa245ae3dcf3723bcda4cb8b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d5ac3998aa245ae3dcf3723bcda4cb8b) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_ldwork);
        tmp_compexpr_left_1 = par_ldwork;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_n);
        tmp_left_value_1 = par_n;
        tmp_left_value_2 = mod_consts[2];
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_m);
        tmp_args_element_value_1 = par_m;
        CHECK_OBJECT(par_p);
        tmp_args_element_value_2 = par_p;
        frame_d5ac3998aa245ae3dcf3723bcda4cb8b->m_frame.f_lineno = 463;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_right_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ldwork;
            assert(old != NULL);
            par_ldwork = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_kw_call_arg_value_5_1;
        PyObject *tmp_kw_call_arg_value_6_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[67]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooooooNoo";
            goto frame_exception_exit_1;
        }
        if (par_n == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 464;
            type_description_1 = "ooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_n;
        CHECK_OBJECT(par_m);
        tmp_kw_call_arg_value_1_1 = par_m;
        CHECK_OBJECT(par_p);
        tmp_kw_call_arg_value_2_1 = par_p;
        CHECK_OBJECT(par_A);
        tmp_kw_call_arg_value_3_1 = par_A;
        CHECK_OBJECT(par_B);
        tmp_kw_call_arg_value_4_1 = par_B;
        CHECK_OBJECT(par_C);
        tmp_kw_call_arg_value_5_1 = par_C;
        CHECK_OBJECT(par_D);
        tmp_kw_call_arg_value_6_1 = par_D;
        CHECK_OBJECT(par_equil);
        tmp_kw_call_dict_value_0_1 = par_equil;
        CHECK_OBJECT(par_tol);
        tmp_kw_call_dict_value_1_1 = par_tol;
        CHECK_OBJECT(par_ldwork);
        tmp_kw_call_dict_value_2_1 = par_ldwork;
        frame_d5ac3998aa245ae3dcf3723bcda4cb8b->m_frame.f_lineno = 464;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS7_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[68]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooooooNoo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooooooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_out);
        tmp_expression_value_2 = var_out;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, -1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooooooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arg_list);
        tmp_args_element_value_4 = var_arg_list;
        frame_d5ac3998aa245ae3dcf3723bcda4cb8b->m_frame.f_lineno = 465;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooooooNoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_out);
        tmp_expression_value_3 = var_out;
        tmp_subscript_value_2 = mod_consts[15];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooooooooooNoo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d5ac3998aa245ae3dcf3723bcda4cb8b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d5ac3998aa245ae3dcf3723bcda4cb8b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d5ac3998aa245ae3dcf3723bcda4cb8b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d5ac3998aa245ae3dcf3723bcda4cb8b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d5ac3998aa245ae3dcf3723bcda4cb8b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d5ac3998aa245ae3dcf3723bcda4cb8b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d5ac3998aa245ae3dcf3723bcda4cb8b,
        type_description_1,
        par_n,
        par_m,
        par_p,
        par_A,
        par_B,
        par_C,
        par_D,
        par_equil,
        par_tol,
        par_ldwork,
        NULL,
        var_arg_list,
        var_out
    );


    // Release cached frame if used for exception.
    if (frame_d5ac3998aa245ae3dcf3723bcda4cb8b == cache_frame_d5ac3998aa245ae3dcf3723bcda4cb8b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d5ac3998aa245ae3dcf3723bcda4cb8b);
        cache_frame_d5ac3998aa245ae3dcf3723bcda4cb8b = NULL;
    }

    assertFrameObject(frame_d5ac3998aa245ae3dcf3723bcda4cb8b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_ldwork);
    Py_DECREF(par_ldwork);
    par_ldwork = NULL;
    CHECK_OBJECT(var_arg_list);
    Py_DECREF(var_arg_list);
    var_arg_list = NULL;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
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

    Py_XDECREF(par_ldwork);
    par_ldwork = NULL;
    Py_XDECREF(var_arg_list);
    var_arg_list = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
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
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    CHECK_OBJECT(par_D);
    Py_DECREF(par_D);
    CHECK_OBJECT(par_equil);
    Py_DECREF(par_equil);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    CHECK_OBJECT(par_D);
    Py_DECREF(par_D);
    CHECK_OBJECT(par_equil);
    Py_DECREF(par_equil);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_slycot$analysis$$$function__6_ab08nz(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    PyObject *par_m = python_pars[1];
    PyObject *par_p = python_pars[2];
    PyObject *par_A = python_pars[3];
    PyObject *par_B = python_pars[4];
    PyObject *par_C = python_pars[5];
    PyObject *par_D = python_pars[6];
    PyObject *par_equil = python_pars[7];
    PyObject *par_tol = python_pars[8];
    PyObject *par_lzwork = python_pars[9];
    PyObject *var_arg_list = NULL;
    PyObject *var_nu = NULL;
    PyObject *var_rank = NULL;
    PyObject *var_dinfz = NULL;
    PyObject *var_nkror = NULL;
    PyObject *var_nkrol = NULL;
    PyObject *var_infz = NULL;
    PyObject *var_kronr = NULL;
    PyObject *var_kronl = NULL;
    PyObject *var_Af = NULL;
    PyObject *var_Bf = NULL;
    PyObject *var_zwork = NULL;
    PyObject *var_info = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_10 = NULL;
    PyObject *tmp_tuple_unpack_1__element_11 = NULL;
    PyObject *tmp_tuple_unpack_1__element_12 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__element_8 = NULL;
    PyObject *tmp_tuple_unpack_1__element_9 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d75cff994e7b3526a11fcc33f954da61;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d75cff994e7b3526a11fcc33f954da61 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY(mod_consts[70]);
        assert(var_arg_list == NULL);
        var_arg_list = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_d75cff994e7b3526a11fcc33f954da61)) {
        Py_XDECREF(cache_frame_d75cff994e7b3526a11fcc33f954da61);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d75cff994e7b3526a11fcc33f954da61 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d75cff994e7b3526a11fcc33f954da61 = MAKE_FUNCTION_FRAME(codeobj_d75cff994e7b3526a11fcc33f954da61, module_slycot$analysis, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d75cff994e7b3526a11fcc33f954da61->m_type_description == NULL);
    frame_d75cff994e7b3526a11fcc33f954da61 = cache_frame_d75cff994e7b3526a11fcc33f954da61;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d75cff994e7b3526a11fcc33f954da61);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d75cff994e7b3526a11fcc33f954da61) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_lzwork);
        tmp_compexpr_left_1 = par_lzwork;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_right_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_left_value_2;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_2;
        PyObject *tmp_right_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_left_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_right_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_left_value_5;
        PyObject *tmp_left_value_6;
        PyObject *tmp_right_value_5;
        PyObject *tmp_right_value_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_left_value_7;
        PyObject *tmp_right_value_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_left_value_8;
        PyObject *tmp_right_value_8;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_left_value_9;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_right_value_9;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_left_value_10;
        PyObject *tmp_left_value_11;
        PyObject *tmp_right_value_10;
        PyObject *tmp_right_value_11;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_left_value_12;
        PyObject *tmp_right_value_12;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_1 != NULL);
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[71]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(par_p);
        tmp_args_element_value_2 = par_p;
        CHECK_OBJECT(par_m);
        tmp_args_element_value_3 = par_m;
        frame_d75cff994e7b3526a11fcc33f954da61->m_frame.f_lineno = 563;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_left_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_3 != NULL);
        tmp_left_value_3 = mod_consts[2];
        CHECK_OBJECT(par_m);
        tmp_right_value_2 = par_m;
        tmp_left_value_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_3, tmp_right_value_2);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 563;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_3 = mod_consts[61];
        tmp_args_element_value_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_2, tmp_right_value_3);
        Py_DECREF(tmp_left_value_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 563;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_value_5 = par_n;
        frame_d75cff994e7b3526a11fcc33f954da61->m_frame.f_lineno = 563;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_right_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 563;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[71]);
        assert(tmp_called_value_4 != NULL);
        CHECK_OBJECT(par_p);
        tmp_args_element_value_7 = par_p;
        CHECK_OBJECT(par_n);
        tmp_args_element_value_8 = par_n;
        frame_d75cff994e7b3526a11fcc33f954da61->m_frame.f_lineno = 564;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_left_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_left_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 564;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_5 != NULL);
        tmp_left_value_6 = mod_consts[2];
        CHECK_OBJECT(par_p);
        tmp_right_value_5 = par_p;
        tmp_left_value_5 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_6, tmp_right_value_5);
        if (tmp_left_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_left_value_4);

            exception_lineno = 564;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_6 = mod_consts[61];
        tmp_args_element_value_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_5, tmp_right_value_6);
        Py_DECREF(tmp_left_value_5);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_left_value_4);

            exception_lineno = 564;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_left_value_7 = par_n;
        CHECK_OBJECT(par_p);
        tmp_right_value_7 = par_p;
        tmp_args_element_value_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_7, tmp_right_value_7);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_left_value_4);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 564;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_left_value_8 = par_n;
        CHECK_OBJECT(par_m);
        tmp_right_value_8 = par_m;
        tmp_args_element_value_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_8, tmp_right_value_8);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_left_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 564;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d75cff994e7b3526a11fcc33f954da61->m_frame.f_lineno = 564;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_right_value_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_right_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_left_value_4);

            exception_lineno = 564;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_4, tmp_right_value_4);
        Py_DECREF(tmp_left_value_4);
        Py_DECREF(tmp_right_value_4);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 564;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[71]);
        assert(tmp_called_value_6 != NULL);
        CHECK_OBJECT(par_m);
        tmp_args_element_value_13 = par_m;
        CHECK_OBJECT(par_n);
        tmp_args_element_value_14 = par_n;
        frame_d75cff994e7b3526a11fcc33f954da61->m_frame.f_lineno = 565;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_left_value_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        if (tmp_left_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 565;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_7 != NULL);
        tmp_left_value_11 = mod_consts[2];
        CHECK_OBJECT(par_m);
        tmp_right_value_10 = par_m;
        tmp_left_value_10 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_11, tmp_right_value_10);
        if (tmp_left_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_left_value_9);

            exception_lineno = 565;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_11 = mod_consts[61];
        tmp_args_element_value_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_10, tmp_right_value_11);
        Py_DECREF(tmp_left_value_10);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_left_value_9);

            exception_lineno = 565;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_left_value_12 = par_n;
        CHECK_OBJECT(par_m);
        tmp_right_value_12 = par_m;
        tmp_args_element_value_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_12, tmp_right_value_12);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_left_value_9);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 565;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d75cff994e7b3526a11fcc33f954da61->m_frame.f_lineno = 565;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_right_value_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_right_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_left_value_9);

            exception_lineno = 565;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_9, tmp_right_value_9);
        Py_DECREF(tmp_left_value_9);
        Py_DECREF(tmp_right_value_9);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 565;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d75cff994e7b3526a11fcc33f954da61->m_frame.f_lineno = 563;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_6, tmp_args_element_value_12};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_lzwork;
            assert(old != NULL);
            par_lzwork = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_kw_call_arg_value_5_1;
        PyObject *tmp_kw_call_arg_value_6_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[72]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_n == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 568;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_arg_value_0_1 = par_n;
        if (par_m == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 568;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_arg_value_1_1 = par_m;
        if (par_p == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 568;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_arg_value_2_1 = par_p;
        CHECK_OBJECT(par_A);
        tmp_kw_call_arg_value_3_1 = par_A;
        CHECK_OBJECT(par_B);
        tmp_kw_call_arg_value_4_1 = par_B;
        CHECK_OBJECT(par_C);
        tmp_kw_call_arg_value_5_1 = par_C;
        CHECK_OBJECT(par_D);
        tmp_kw_call_arg_value_6_1 = par_D;
        CHECK_OBJECT(par_equil);
        tmp_kw_call_dict_value_0_1 = par_equil;
        CHECK_OBJECT(par_tol);
        tmp_kw_call_dict_value_1_1 = par_tol;
        CHECK_OBJECT(par_lzwork);
        tmp_kw_call_dict_value_2_1 = par_lzwork;
        frame_d75cff994e7b3526a11fcc33f954da61->m_frame.f_lineno = 568;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS7_KWSPLIT(tmp_called_value_8, args, kw_values, mod_consts[74]);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 12);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooNooooooooooooo";
            exception_lineno = 567;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 12);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooNooooooooooooo";
            exception_lineno = 567;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_3, 2, 12);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooNooooooooooooo";
            exception_lineno = 567;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_4, 3, 12);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooNooooooooooooo";
            exception_lineno = 567;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_5, 4, 12);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooNooooooooooooo";
            exception_lineno = 567;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_6, 5, 12);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooNooooooooooooo";
            exception_lineno = 567;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_6 == NULL);
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_7, 6, 12);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooNooooooooooooo";
            exception_lineno = 567;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_7 == NULL);
        tmp_tuple_unpack_1__element_7 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_8, 7, 12);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooNooooooooooooo";
            exception_lineno = 567;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_8 == NULL);
        tmp_tuple_unpack_1__element_8 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_9, 8, 12);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooNooooooooooooo";
            exception_lineno = 567;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_9 == NULL);
        tmp_tuple_unpack_1__element_9 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_10, 9, 12);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooNooooooooooooo";
            exception_lineno = 567;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_10 == NULL);
        tmp_tuple_unpack_1__element_10 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_11, 10, 12);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooNooooooooooooo";
            exception_lineno = 567;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_11 == NULL);
        tmp_tuple_unpack_1__element_11 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_12, 11, 12);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooNooooooooooooo";
            exception_lineno = 567;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_12 == NULL);
        tmp_tuple_unpack_1__element_12 = tmp_assign_source_15;
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

                    type_description_1 = "ooooooooooNooooooooooooo";
                    exception_lineno = 567;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[75];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooNooooooooooooo";
            exception_lineno = 567;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_9);
    tmp_tuple_unpack_1__element_9 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_10);
    tmp_tuple_unpack_1__element_10 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_11);
    tmp_tuple_unpack_1__element_11 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_12);
    tmp_tuple_unpack_1__element_12 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_1;
        assert(var_nu == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_nu = tmp_assign_source_16;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_2;
        assert(var_rank == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_rank = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_3;
        assert(var_dinfz == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_dinfz = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_4;
        assert(var_nkror == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_nkror = tmp_assign_source_19;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_5;
        assert(var_nkrol == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_nkrol = tmp_assign_source_20;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_6;
        assert(var_infz == NULL);
        Py_INCREF(tmp_assign_source_21);
        var_infz = tmp_assign_source_21;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_7;
        assert(var_kronr == NULL);
        Py_INCREF(tmp_assign_source_22);
        var_kronr = tmp_assign_source_22;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_8);
        tmp_assign_source_23 = tmp_tuple_unpack_1__element_8;
        assert(var_kronl == NULL);
        Py_INCREF(tmp_assign_source_23);
        var_kronl = tmp_assign_source_23;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_9);
        tmp_assign_source_24 = tmp_tuple_unpack_1__element_9;
        assert(var_Af == NULL);
        Py_INCREF(tmp_assign_source_24);
        var_Af = tmp_assign_source_24;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_9);
    tmp_tuple_unpack_1__element_9 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_10);
        tmp_assign_source_25 = tmp_tuple_unpack_1__element_10;
        assert(var_Bf == NULL);
        Py_INCREF(tmp_assign_source_25);
        var_Bf = tmp_assign_source_25;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_10);
    tmp_tuple_unpack_1__element_10 = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_11);
        tmp_assign_source_26 = tmp_tuple_unpack_1__element_11;
        assert(var_zwork == NULL);
        Py_INCREF(tmp_assign_source_26);
        var_zwork = tmp_assign_source_26;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_11);
    tmp_tuple_unpack_1__element_11 = NULL;

    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_12);
        tmp_assign_source_27 = tmp_tuple_unpack_1__element_12;
        assert(var_info == NULL);
        Py_INCREF(tmp_assign_source_27);
        var_info = tmp_assign_source_27;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_12);
    tmp_tuple_unpack_1__element_12 = NULL;

    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_info);
        tmp_args_element_value_17 = var_info;
        CHECK_OBJECT(var_arg_list);
        tmp_args_element_value_18 = var_arg_list;
        frame_d75cff994e7b3526a11fcc33f954da61->m_frame.f_lineno = 571;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "ooooooooooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_nu);
        tmp_tuple_element_1 = var_nu;
        tmp_return_value = PyTuple_New(11);
        {
            PyObject *tmp_int_arg_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_rank);
            tmp_tuple_element_1 = var_rank;
            PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_dinfz);
            tmp_tuple_element_1 = var_dinfz;
            PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_nkror);
            tmp_tuple_element_1 = var_nkror;
            PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_1);
            CHECK_OBJECT(var_nkrol);
            tmp_tuple_element_1 = var_nkrol;
            PyTuple_SET_ITEM0(tmp_return_value, 4, tmp_tuple_element_1);
            CHECK_OBJECT(var_infz);
            tmp_tuple_element_1 = var_infz;
            PyTuple_SET_ITEM0(tmp_return_value, 5, tmp_tuple_element_1);
            CHECK_OBJECT(var_kronr);
            tmp_tuple_element_1 = var_kronr;
            PyTuple_SET_ITEM0(tmp_return_value, 6, tmp_tuple_element_1);
            CHECK_OBJECT(var_kronl);
            tmp_tuple_element_1 = var_kronl;
            PyTuple_SET_ITEM0(tmp_return_value, 7, tmp_tuple_element_1);
            CHECK_OBJECT(var_Af);
            tmp_tuple_element_1 = var_Af;
            PyTuple_SET_ITEM0(tmp_return_value, 8, tmp_tuple_element_1);
            CHECK_OBJECT(var_Bf);
            tmp_tuple_element_1 = var_Bf;
            PyTuple_SET_ITEM0(tmp_return_value, 9, tmp_tuple_element_1);
            CHECK_OBJECT(var_zwork);
            tmp_expression_value_3 = var_zwork;
            tmp_subscript_value_1 = mod_consts[76];
            tmp_expression_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;
                type_description_1 = "ooooooooooNooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_int_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[77]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_int_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;
                type_description_1 = "ooooooooooNooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = PyNumber_Int(tmp_int_arg_1);
            Py_DECREF(tmp_int_arg_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;
                type_description_1 = "ooooooooooNooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 10, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d75cff994e7b3526a11fcc33f954da61);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d75cff994e7b3526a11fcc33f954da61);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d75cff994e7b3526a11fcc33f954da61);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d75cff994e7b3526a11fcc33f954da61, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d75cff994e7b3526a11fcc33f954da61->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d75cff994e7b3526a11fcc33f954da61, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d75cff994e7b3526a11fcc33f954da61,
        type_description_1,
        par_n,
        par_m,
        par_p,
        par_A,
        par_B,
        par_C,
        par_D,
        par_equil,
        par_tol,
        par_lzwork,
        NULL,
        var_arg_list,
        var_nu,
        var_rank,
        var_dinfz,
        var_nkror,
        var_nkrol,
        var_infz,
        var_kronr,
        var_kronl,
        var_Af,
        var_Bf,
        var_zwork,
        var_info
    );


    // Release cached frame if used for exception.
    if (frame_d75cff994e7b3526a11fcc33f954da61 == cache_frame_d75cff994e7b3526a11fcc33f954da61) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d75cff994e7b3526a11fcc33f954da61);
        cache_frame_d75cff994e7b3526a11fcc33f954da61 = NULL;
    }

    assertFrameObject(frame_d75cff994e7b3526a11fcc33f954da61);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_lzwork);
    Py_DECREF(par_lzwork);
    par_lzwork = NULL;
    CHECK_OBJECT(var_arg_list);
    Py_DECREF(var_arg_list);
    var_arg_list = NULL;
    CHECK_OBJECT(var_nu);
    Py_DECREF(var_nu);
    var_nu = NULL;
    CHECK_OBJECT(var_rank);
    Py_DECREF(var_rank);
    var_rank = NULL;
    CHECK_OBJECT(var_dinfz);
    Py_DECREF(var_dinfz);
    var_dinfz = NULL;
    CHECK_OBJECT(var_nkror);
    Py_DECREF(var_nkror);
    var_nkror = NULL;
    CHECK_OBJECT(var_nkrol);
    Py_DECREF(var_nkrol);
    var_nkrol = NULL;
    CHECK_OBJECT(var_infz);
    Py_DECREF(var_infz);
    var_infz = NULL;
    CHECK_OBJECT(var_kronr);
    Py_DECREF(var_kronr);
    var_kronr = NULL;
    CHECK_OBJECT(var_kronl);
    Py_DECREF(var_kronl);
    var_kronl = NULL;
    CHECK_OBJECT(var_Af);
    Py_DECREF(var_Af);
    var_Af = NULL;
    CHECK_OBJECT(var_Bf);
    Py_DECREF(var_Bf);
    var_Bf = NULL;
    CHECK_OBJECT(var_zwork);
    Py_DECREF(var_zwork);
    var_zwork = NULL;
    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;
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

    Py_XDECREF(par_lzwork);
    par_lzwork = NULL;
    Py_XDECREF(var_arg_list);
    var_arg_list = NULL;
    Py_XDECREF(var_nu);
    var_nu = NULL;
    Py_XDECREF(var_rank);
    var_rank = NULL;
    Py_XDECREF(var_dinfz);
    var_dinfz = NULL;
    Py_XDECREF(var_nkror);
    var_nkror = NULL;
    Py_XDECREF(var_nkrol);
    var_nkrol = NULL;
    Py_XDECREF(var_infz);
    var_infz = NULL;
    Py_XDECREF(var_kronr);
    var_kronr = NULL;
    Py_XDECREF(var_kronl);
    var_kronl = NULL;
    Py_XDECREF(var_Af);
    var_Af = NULL;
    Py_XDECREF(var_Bf);
    var_Bf = NULL;
    Py_XDECREF(var_zwork);
    var_zwork = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
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
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    CHECK_OBJECT(par_D);
    Py_DECREF(par_D);
    CHECK_OBJECT(par_equil);
    Py_DECREF(par_equil);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    CHECK_OBJECT(par_D);
    Py_DECREF(par_D);
    CHECK_OBJECT(par_equil);
    Py_DECREF(par_equil);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_slycot$analysis$$$function__7_ab09ad(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dico = python_pars[0];
    PyObject *par_job = python_pars[1];
    PyObject *par_equil = python_pars[2];
    PyObject *par_n = python_pars[3];
    PyObject *par_m = python_pars[4];
    PyObject *par_p = python_pars[5];
    PyObject *par_A = python_pars[6];
    PyObject *par_B = python_pars[7];
    PyObject *par_C = python_pars[8];
    PyObject *par_nr = python_pars[9];
    PyObject *par_tol = python_pars[10];
    PyObject *par_ldwork = python_pars[11];
    PyObject *var_hidden = NULL;
    PyObject *var_arg_list = NULL;
    PyObject *var_ordsel = NULL;
    PyObject *var_out = NULL;
    PyObject *var_Nr = NULL;
    PyObject *var_hsv = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_032104e1c48d8e007e2d99d4dcbc1afd;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *locals_slycot$analysis$$$function__7_ab09ad = NULL;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_032104e1c48d8e007e2d99d4dcbc1afd = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[17];
        assert(var_hidden == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_hidden = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = mod_consts[79];
        tmp_assign_source_2 = PyList_New(21);
        {
            PyObject *tmp_left_value_1;
            PyObject *tmp_right_value_1;
            PyObject *tmp_left_value_2;
            PyObject *tmp_right_value_2;
            PyObject *tmp_left_value_3;
            PyObject *tmp_right_value_3;
            PyObject *tmp_left_value_4;
            PyObject *tmp_right_value_4;
            PyObject *tmp_left_value_5;
            PyObject *tmp_right_value_5;
            PyList_SET_ITEM0(tmp_assign_source_2, 0, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[80];
            PyList_SET_ITEM0(tmp_assign_source_2, 1, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[81];
            PyList_SET_ITEM0(tmp_assign_source_2, 2, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[82];
            PyList_SET_ITEM0(tmp_assign_source_2, 3, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[40];
            PyList_SET_ITEM0(tmp_assign_source_2, 4, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[5];
            PyList_SET_ITEM0(tmp_assign_source_2, 5, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[73];
            PyList_SET_ITEM0(tmp_assign_source_2, 6, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[83];
            PyList_SET_ITEM0(tmp_assign_source_2, 7, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[41];
            PyList_SET_ITEM0(tmp_assign_source_2, 8, tmp_list_element_1);
            tmp_left_value_1 = mod_consts[84];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_1 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_1, tmp_right_value_1);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 9, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[43];
            PyList_SET_ITEM0(tmp_assign_source_2, 10, tmp_list_element_1);
            tmp_left_value_2 = mod_consts[85];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_2 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_2, tmp_right_value_2);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 11, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[45];
            PyList_SET_ITEM0(tmp_assign_source_2, 12, tmp_list_element_1);
            tmp_left_value_3 = mod_consts[86];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_3 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_3, tmp_right_value_3);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 13, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[87];
            PyList_SET_ITEM0(tmp_assign_source_2, 14, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[88];
            PyList_SET_ITEM0(tmp_assign_source_2, 15, tmp_list_element_1);
            tmp_left_value_4 = mod_consts[89];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_4 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_4, tmp_right_value_4);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 16, tmp_list_element_1);
            tmp_left_value_5 = mod_consts[90];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_5 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_5, tmp_right_value_5);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 17, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[51];
            PyList_SET_ITEM0(tmp_assign_source_2, 18, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[91];
            PyList_SET_ITEM0(tmp_assign_source_2, 19, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[52];
            PyList_SET_ITEM0(tmp_assign_source_2, 20, tmp_list_element_1);
        }
        assert(var_arg_list == NULL);
        var_arg_list = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_032104e1c48d8e007e2d99d4dcbc1afd)) {
        Py_XDECREF(cache_frame_032104e1c48d8e007e2d99d4dcbc1afd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_032104e1c48d8e007e2d99d4dcbc1afd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_032104e1c48d8e007e2d99d4dcbc1afd = MAKE_FUNCTION_FRAME(codeobj_032104e1c48d8e007e2d99d4dcbc1afd, module_slycot$analysis, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_032104e1c48d8e007e2d99d4dcbc1afd->m_type_description == NULL);
    frame_032104e1c48d8e007e2d99d4dcbc1afd = cache_frame_032104e1c48d8e007e2d99d4dcbc1afd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_032104e1c48d8e007e2d99d4dcbc1afd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_032104e1c48d8e007e2d99d4dcbc1afd) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_ldwork);
        tmp_compexpr_left_1 = par_ldwork;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_left_value_6;
        PyObject *tmp_left_value_7;
        PyObject *tmp_right_value_6;
        PyObject *tmp_left_value_8;
        PyObject *tmp_left_value_9;
        PyObject *tmp_left_value_10;
        PyObject *tmp_right_value_7;
        PyObject *tmp_right_value_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_right_value_9;
        PyObject *tmp_right_value_10;
        PyObject *tmp_left_value_11;
        PyObject *tmp_left_value_12;
        PyObject *tmp_right_value_11;
        PyObject *tmp_left_value_13;
        PyObject *tmp_right_value_12;
        PyObject *tmp_right_value_13;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_1 != NULL);
        tmp_args_element_value_1 = mod_consts[61];
        CHECK_OBJECT(par_n);
        tmp_left_value_7 = par_n;
        tmp_left_value_10 = mod_consts[92];
        CHECK_OBJECT(par_n);
        tmp_right_value_7 = par_n;
        tmp_left_value_9 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_10, tmp_right_value_7);
        if (tmp_left_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(par_n);
        tmp_args_element_value_3 = par_n;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_3 != NULL);
        CHECK_OBJECT(par_m);
        tmp_args_element_value_5 = par_m;
        CHECK_OBJECT(par_p);
        tmp_args_element_value_6 = par_p;
        frame_032104e1c48d8e007e2d99d4dcbc1afd->m_frame.f_lineno = 683;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_9);

            exception_lineno = 683;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_032104e1c48d8e007e2d99d4dcbc1afd->m_frame.f_lineno = 683;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_right_value_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_right_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_9);

            exception_lineno = 683;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_9, tmp_right_value_8);
        Py_DECREF(tmp_left_value_9);
        Py_DECREF(tmp_right_value_8);
        if (tmp_left_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_9 = mod_consts[93];
        tmp_right_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_8, tmp_right_value_9);
        Py_DECREF(tmp_left_value_8);
        if (tmp_right_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_7, tmp_right_value_6);
        Py_DECREF(tmp_right_value_6);
        if (tmp_left_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_left_value_12 = par_n;
        CHECK_OBJECT(par_n);
        tmp_left_value_13 = par_n;
        tmp_right_value_12 = mod_consts[61];
        tmp_right_value_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_13, tmp_right_value_12);
        if (tmp_right_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_6);

            exception_lineno = 683;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_11 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_12, tmp_right_value_11);
        Py_DECREF(tmp_right_value_11);
        if (tmp_left_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_6);

            exception_lineno = 683;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_13 = mod_consts[92];
        tmp_right_value_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_11, tmp_right_value_13);
        Py_DECREF(tmp_left_value_11);
        if (tmp_right_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_6);

            exception_lineno = 683;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_6, tmp_right_value_10);
        Py_DECREF(tmp_left_value_6);
        Py_DECREF(tmp_right_value_10);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_032104e1c48d8e007e2d99d4dcbc1afd->m_frame.f_lineno = 683;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ldwork;
            assert(old != NULL);
            par_ldwork = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_nr);
        tmp_compexpr_left_2 = par_nr;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[41];
        assert(var_ordsel == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_ordsel = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[76];
        {
            PyObject *old = par_nr;
            assert(old != NULL);
            par_nr = tmp_assign_source_5;
            Py_INCREF(par_nr);
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[94];
        assert(var_ordsel == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_ordsel = tmp_assign_source_6;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 689;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[95]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 689;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dico);
        tmp_args_element_value_7 = par_dico;
        CHECK_OBJECT(par_job);
        tmp_args_element_value_8 = par_job;
        CHECK_OBJECT(par_equil);
        tmp_args_element_value_9 = par_equil;
        CHECK_OBJECT(var_ordsel);
        tmp_args_element_value_10 = var_ordsel;
        if (par_n == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 690;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_11 = par_n;
        CHECK_OBJECT(par_m);
        tmp_args_element_value_12 = par_m;
        CHECK_OBJECT(par_p);
        tmp_args_element_value_13 = par_p;
        CHECK_OBJECT(par_nr);
        tmp_args_element_value_14 = par_nr;
        CHECK_OBJECT(par_A);
        tmp_args_element_value_15 = par_A;
        CHECK_OBJECT(par_B);
        tmp_args_element_value_16 = par_B;
        CHECK_OBJECT(par_C);
        tmp_args_element_value_17 = par_C;
        CHECK_OBJECT(par_tol);
        tmp_args_element_value_18 = par_tol;
        CHECK_OBJECT(par_ldwork);
        tmp_args_element_value_19 = par_ldwork;
        frame_032104e1c48d8e007e2d99d4dcbc1afd->m_frame.f_lineno = 689;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS13(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 689;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_out);
        tmp_expression_value_2 = var_out;
        tmp_subscript_value_1 = mod_consts[96];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 691;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 691;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_1, 0, 5);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 691;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_2, 1, 5);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 691;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_3, 2, 5);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 691;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_4, 3, 5);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 691;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_5, 4, 5);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 691;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_13;
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

                    type_description_1 = "oooooooooooooooooo";
                    exception_lineno = 691;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[97];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 691;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;
        assert(var_Nr == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_Nr = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_A;
            assert(old != NULL);
            par_A = tmp_assign_source_15;
            Py_INCREF(par_A);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_B;
            assert(old != NULL);
            par_B = tmp_assign_source_16;
            Py_INCREF(par_B);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = par_C;
            assert(old != NULL);
            par_C = tmp_assign_source_17;
            Py_INCREF(par_C);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_5;
        assert(var_hsv == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_hsv = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_23;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 692;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_out);
        tmp_expression_value_3 = var_out;
        tmp_subscript_value_2 = mod_consts[98];
        tmp_args_element_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 692;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arg_list);
        tmp_args_element_value_21 = var_arg_list;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 692;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[64]);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 692;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (locals_slycot$analysis$$$function__7_ab09ad == NULL) locals_slycot$analysis$$$function__7_ab09ad = PyDict_New();
        tmp_args_element_value_23 = locals_slycot$analysis$$$function__7_ab09ad;
        Py_INCREF(tmp_args_element_value_23);
        if (par_dico != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_dico);
            value = par_dico;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[79], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[79]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_job != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_job);
            value = par_job;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[80], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[80]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_equil != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_equil);
            value = par_equil;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[81], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[81]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_n != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_n);
            value = par_n;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[40], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[40]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_m != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_m);
            value = par_m;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[5], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[5]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_p != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_p);
            value = par_p;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[73], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[73]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_A != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_A);
            value = par_A;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[41], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[41]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_B != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_B);
            value = par_B;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[43], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[43]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_C != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_C);
            value = par_C;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[45], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[45]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_nr != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_nr);
            value = par_nr;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[83], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[83]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_tol != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_tol);
            value = par_tol;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[88], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[88]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_ldwork != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_ldwork);
            value = par_ldwork;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[51], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[51]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_hidden != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_hidden);
            value = var_hidden;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[55], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[55]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_arg_list != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_arg_list);
            value = var_arg_list;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[56], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[56]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_ordsel != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_ordsel);
            value = var_ordsel;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[82], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[82]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_out != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_out);
            value = var_out;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[57], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[57]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_Nr != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_Nr);
            value = var_Nr;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[99], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[99]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_hsv != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_hsv);
            value = var_hsv;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_23, (Nuitka_StringObject *)mod_consts[87], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_23, mod_consts[87]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        frame_032104e1c48d8e007e2d99d4dcbc1afd->m_frame.f_lineno = 692;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 692;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_Nr);
        tmp_tuple_element_1 = var_Nr;
        tmp_return_value = PyTuple_New(5);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_stop_value_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_stop_value_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_tuple_element_4;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_A);
            tmp_expression_value_5 = par_A;
            CHECK_OBJECT(var_Nr);
            tmp_stop_value_1 = var_Nr;
            tmp_tuple_element_2 = MAKE_SLICEOBJ1(tmp_stop_value_1);
            assert(!(tmp_tuple_element_2 == NULL));
            tmp_subscript_value_3 = PyTuple_New(2);
            {
                PyObject *tmp_stop_value_2;
                PyTuple_SET_ITEM(tmp_subscript_value_3, 0, tmp_tuple_element_2);
                CHECK_OBJECT(var_Nr);
                tmp_stop_value_2 = var_Nr;
                tmp_tuple_element_2 = MAKE_SLICEOBJ1(tmp_stop_value_2);
                assert(!(tmp_tuple_element_2 == NULL));
                PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_2);
            }
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 693;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_B);
            tmp_expression_value_6 = par_B;
            CHECK_OBJECT(var_Nr);
            tmp_stop_value_3 = var_Nr;
            tmp_tuple_element_3 = MAKE_SLICEOBJ1(tmp_stop_value_3);
            assert(!(tmp_tuple_element_3 == NULL));
            tmp_subscript_value_4 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[100];
            PyTuple_SET_ITEM0(tmp_subscript_value_4, 1, tmp_tuple_element_3);
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_4);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 693;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_C);
            tmp_expression_value_7 = par_C;
            tmp_tuple_element_4 = mod_consts[100];
            tmp_subscript_value_5 = PyTuple_New(2);
            {
                PyObject *tmp_stop_value_4;
                PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_4);
                CHECK_OBJECT(var_Nr);
                tmp_stop_value_4 = var_Nr;
                tmp_tuple_element_4 = MAKE_SLICEOBJ1(tmp_stop_value_4);
                assert(!(tmp_tuple_element_4 == NULL));
                PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_4);
            }
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_5);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 693;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 3, tmp_tuple_element_1);
            CHECK_OBJECT(var_hsv);
            tmp_tuple_element_1 = var_hsv;
            PyTuple_SET_ITEM0(tmp_return_value, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_032104e1c48d8e007e2d99d4dcbc1afd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_032104e1c48d8e007e2d99d4dcbc1afd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_032104e1c48d8e007e2d99d4dcbc1afd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_032104e1c48d8e007e2d99d4dcbc1afd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_032104e1c48d8e007e2d99d4dcbc1afd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_032104e1c48d8e007e2d99d4dcbc1afd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_032104e1c48d8e007e2d99d4dcbc1afd,
        type_description_1,
        par_dico,
        par_job,
        par_equil,
        par_n,
        par_m,
        par_p,
        par_A,
        par_B,
        par_C,
        par_nr,
        par_tol,
        par_ldwork,
        var_hidden,
        var_arg_list,
        var_ordsel,
        var_out,
        var_Nr,
        var_hsv
    );


    // Release cached frame if used for exception.
    if (frame_032104e1c48d8e007e2d99d4dcbc1afd == cache_frame_032104e1c48d8e007e2d99d4dcbc1afd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_032104e1c48d8e007e2d99d4dcbc1afd);
        cache_frame_032104e1c48d8e007e2d99d4dcbc1afd = NULL;
    }

    assertFrameObject(frame_032104e1c48d8e007e2d99d4dcbc1afd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    par_A = NULL;
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    par_B = NULL;
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    par_C = NULL;
    CHECK_OBJECT(par_nr);
    Py_DECREF(par_nr);
    par_nr = NULL;
    CHECK_OBJECT(par_ldwork);
    Py_DECREF(par_ldwork);
    par_ldwork = NULL;
    CHECK_OBJECT(var_hidden);
    Py_DECREF(var_hidden);
    var_hidden = NULL;
    CHECK_OBJECT(var_arg_list);
    Py_DECREF(var_arg_list);
    var_arg_list = NULL;
    CHECK_OBJECT(var_ordsel);
    Py_DECREF(var_ordsel);
    var_ordsel = NULL;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
    CHECK_OBJECT(var_Nr);
    Py_DECREF(var_Nr);
    var_Nr = NULL;
    CHECK_OBJECT(var_hsv);
    Py_DECREF(var_hsv);
    var_hsv = NULL;
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

    Py_XDECREF(par_A);
    par_A = NULL;
    Py_XDECREF(par_B);
    par_B = NULL;
    Py_XDECREF(par_C);
    par_C = NULL;
    Py_XDECREF(par_nr);
    par_nr = NULL;
    Py_XDECREF(par_ldwork);
    par_ldwork = NULL;
    Py_XDECREF(var_hidden);
    var_hidden = NULL;
    Py_XDECREF(var_arg_list);
    var_arg_list = NULL;
    Py_XDECREF(var_ordsel);
    var_ordsel = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_Nr);
    var_Nr = NULL;
    Py_XDECREF(var_hsv);
    var_hsv = NULL;
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
    Py_XDECREF(locals_slycot$analysis$$$function__7_ab09ad);

    CHECK_OBJECT(par_dico);
    Py_DECREF(par_dico);
    CHECK_OBJECT(par_job);
    Py_DECREF(par_job);
    CHECK_OBJECT(par_equil);
    Py_DECREF(par_equil);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_slycot$analysis$$$function__7_ab09ad);

    CHECK_OBJECT(par_dico);
    Py_DECREF(par_dico);
    CHECK_OBJECT(par_job);
    Py_DECREF(par_job);
    CHECK_OBJECT(par_equil);
    Py_DECREF(par_equil);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_slycot$analysis$$$function__8_ab09ax(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dico = python_pars[0];
    PyObject *par_job = python_pars[1];
    PyObject *par_n = python_pars[2];
    PyObject *par_m = python_pars[3];
    PyObject *par_p = python_pars[4];
    PyObject *par_A = python_pars[5];
    PyObject *par_B = python_pars[6];
    PyObject *par_C = python_pars[7];
    PyObject *par_nr = python_pars[8];
    PyObject *par_tol = python_pars[9];
    PyObject *par_ldwork = python_pars[10];
    PyObject *var_hidden = NULL;
    PyObject *var_arg_list = NULL;
    PyObject *var_ordsel = NULL;
    PyObject *var_out = NULL;
    PyObject *var_Nr = NULL;
    PyObject *var_hsv = NULL;
    PyObject *var_T = NULL;
    PyObject *var_Ti = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a7a3157639b101b75b4d0333d5f1128c;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *locals_slycot$analysis$$$function__8_ab09ax = NULL;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a7a3157639b101b75b4d0333d5f1128c = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[17];
        assert(var_hidden == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_hidden = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = mod_consts[79];
        tmp_assign_source_2 = PyList_New(24);
        {
            PyObject *tmp_left_value_1;
            PyObject *tmp_right_value_1;
            PyObject *tmp_left_value_2;
            PyObject *tmp_right_value_2;
            PyObject *tmp_left_value_3;
            PyObject *tmp_right_value_3;
            PyObject *tmp_left_value_4;
            PyObject *tmp_right_value_4;
            PyObject *tmp_left_value_5;
            PyObject *tmp_right_value_5;
            PyObject *tmp_left_value_6;
            PyObject *tmp_right_value_6;
            PyObject *tmp_left_value_7;
            PyObject *tmp_right_value_7;
            PyList_SET_ITEM0(tmp_assign_source_2, 0, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[80];
            PyList_SET_ITEM0(tmp_assign_source_2, 1, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[82];
            PyList_SET_ITEM0(tmp_assign_source_2, 2, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[40];
            PyList_SET_ITEM0(tmp_assign_source_2, 3, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[5];
            PyList_SET_ITEM0(tmp_assign_source_2, 4, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[73];
            PyList_SET_ITEM0(tmp_assign_source_2, 5, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[83];
            PyList_SET_ITEM0(tmp_assign_source_2, 6, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[41];
            PyList_SET_ITEM0(tmp_assign_source_2, 7, tmp_list_element_1);
            tmp_left_value_1 = mod_consts[84];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_1 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_1, tmp_right_value_1);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 8, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[43];
            PyList_SET_ITEM0(tmp_assign_source_2, 9, tmp_list_element_1);
            tmp_left_value_2 = mod_consts[85];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_2 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_2, tmp_right_value_2);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 10, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[45];
            PyList_SET_ITEM0(tmp_assign_source_2, 11, tmp_list_element_1);
            tmp_left_value_3 = mod_consts[86];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_3 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_3, tmp_right_value_3);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 12, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[87];
            PyList_SET_ITEM0(tmp_assign_source_2, 13, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[102];
            PyList_SET_ITEM0(tmp_assign_source_2, 14, tmp_list_element_1);
            tmp_left_value_4 = mod_consts[103];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_4 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_4, tmp_right_value_4);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 15, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[104];
            PyList_SET_ITEM0(tmp_assign_source_2, 16, tmp_list_element_1);
            tmp_left_value_5 = mod_consts[105];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_5 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_5, tmp_right_value_5);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 17, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[88];
            PyList_SET_ITEM0(tmp_assign_source_2, 18, tmp_list_element_1);
            tmp_left_value_6 = mod_consts[89];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_6 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_6, tmp_right_value_6);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 19, tmp_list_element_1);
            tmp_left_value_7 = mod_consts[106];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_7 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_7, tmp_right_value_7);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 20, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[51];
            PyList_SET_ITEM0(tmp_assign_source_2, 21, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[91];
            PyList_SET_ITEM0(tmp_assign_source_2, 22, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[52];
            PyList_SET_ITEM0(tmp_assign_source_2, 23, tmp_list_element_1);
        }
        assert(var_arg_list == NULL);
        var_arg_list = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_a7a3157639b101b75b4d0333d5f1128c)) {
        Py_XDECREF(cache_frame_a7a3157639b101b75b4d0333d5f1128c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a7a3157639b101b75b4d0333d5f1128c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a7a3157639b101b75b4d0333d5f1128c = MAKE_FUNCTION_FRAME(codeobj_a7a3157639b101b75b4d0333d5f1128c, module_slycot$analysis, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a7a3157639b101b75b4d0333d5f1128c->m_type_description == NULL);
    frame_a7a3157639b101b75b4d0333d5f1128c = cache_frame_a7a3157639b101b75b4d0333d5f1128c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a7a3157639b101b75b4d0333d5f1128c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a7a3157639b101b75b4d0333d5f1128c) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_ldwork);
        tmp_compexpr_left_1 = par_ldwork;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_left_value_8;
        PyObject *tmp_left_value_9;
        PyObject *tmp_right_value_8;
        PyObject *tmp_left_value_10;
        PyObject *tmp_left_value_11;
        PyObject *tmp_left_value_12;
        PyObject *tmp_right_value_9;
        PyObject *tmp_right_value_10;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_right_value_11;
        PyObject *tmp_right_value_12;
        PyObject *tmp_left_value_13;
        PyObject *tmp_left_value_14;
        PyObject *tmp_right_value_13;
        PyObject *tmp_left_value_15;
        PyObject *tmp_right_value_14;
        PyObject *tmp_right_value_15;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_1 != NULL);
        tmp_args_element_value_1 = mod_consts[61];
        CHECK_OBJECT(par_n);
        tmp_left_value_9 = par_n;
        tmp_left_value_12 = mod_consts[92];
        CHECK_OBJECT(par_n);
        tmp_right_value_9 = par_n;
        tmp_left_value_11 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_12, tmp_right_value_9);
        if (tmp_left_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(par_n);
        tmp_args_element_value_3 = par_n;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_3 != NULL);
        CHECK_OBJECT(par_m);
        tmp_args_element_value_5 = par_m;
        CHECK_OBJECT(par_p);
        tmp_args_element_value_6 = par_p;
        frame_a7a3157639b101b75b4d0333d5f1128c->m_frame.f_lineno = 811;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_11);

            exception_lineno = 811;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7a3157639b101b75b4d0333d5f1128c->m_frame.f_lineno = 811;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_right_value_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_right_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_11);

            exception_lineno = 811;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_11, tmp_right_value_10);
        Py_DECREF(tmp_left_value_11);
        Py_DECREF(tmp_right_value_10);
        if (tmp_left_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_11 = mod_consts[93];
        tmp_right_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_10, tmp_right_value_11);
        Py_DECREF(tmp_left_value_10);
        if (tmp_right_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_9, tmp_right_value_8);
        Py_DECREF(tmp_right_value_8);
        if (tmp_left_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_left_value_14 = par_n;
        CHECK_OBJECT(par_n);
        tmp_left_value_15 = par_n;
        tmp_right_value_14 = mod_consts[61];
        tmp_right_value_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_15, tmp_right_value_14);
        if (tmp_right_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_8);

            exception_lineno = 811;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_14, tmp_right_value_13);
        Py_DECREF(tmp_right_value_13);
        if (tmp_left_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_8);

            exception_lineno = 811;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_15 = mod_consts[92];
        tmp_right_value_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_13, tmp_right_value_15);
        Py_DECREF(tmp_left_value_13);
        if (tmp_right_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_8);

            exception_lineno = 811;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_8, tmp_right_value_12);
        Py_DECREF(tmp_left_value_8);
        Py_DECREF(tmp_right_value_12);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7a3157639b101b75b4d0333d5f1128c->m_frame.f_lineno = 811;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ldwork;
            assert(old != NULL);
            par_ldwork = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_nr);
        tmp_compexpr_left_2 = par_nr;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[41];
        assert(var_ordsel == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_ordsel = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[76];
        {
            PyObject *old = par_nr;
            assert(old != NULL);
            par_nr = tmp_assign_source_5;
            Py_INCREF(par_nr);
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[94];
        assert(var_ordsel == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_ordsel = tmp_assign_source_6;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 817;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[107]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 817;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dico);
        tmp_args_element_value_7 = par_dico;
        CHECK_OBJECT(par_job);
        tmp_args_element_value_8 = par_job;
        CHECK_OBJECT(var_ordsel);
        tmp_args_element_value_9 = var_ordsel;
        if (par_n == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 817;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = par_n;
        CHECK_OBJECT(par_m);
        tmp_args_element_value_11 = par_m;
        CHECK_OBJECT(par_p);
        tmp_args_element_value_12 = par_p;
        CHECK_OBJECT(par_nr);
        tmp_args_element_value_13 = par_nr;
        CHECK_OBJECT(par_A);
        tmp_args_element_value_14 = par_A;
        CHECK_OBJECT(par_B);
        tmp_args_element_value_15 = par_B;
        CHECK_OBJECT(par_C);
        tmp_args_element_value_16 = par_C;
        CHECK_OBJECT(par_tol);
        tmp_args_element_value_17 = par_tol;
        CHECK_OBJECT(par_ldwork);
        tmp_args_element_value_18 = par_ldwork;
        frame_a7a3157639b101b75b4d0333d5f1128c->m_frame.f_lineno = 817;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS12(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 817;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_out);
        tmp_expression_value_2 = var_out;
        tmp_subscript_value_1 = mod_consts[96];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 818;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 818;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_1, 0, 7);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 818;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_2, 1, 7);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 818;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_3, 2, 7);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 818;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_4, 3, 7);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 818;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_5, 4, 7);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 818;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_6, 5, 7);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 818;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_6 == NULL);
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_7, 6, 7);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 818;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_7 == NULL);
        tmp_tuple_unpack_1__element_7 = tmp_assign_source_15;
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

                    type_description_1 = "ooooooooooooooooooo";
                    exception_lineno = 818;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[108];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 818;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_1;
        assert(var_Nr == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_Nr = tmp_assign_source_16;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_A;
            assert(old != NULL);
            par_A = tmp_assign_source_17;
            Py_INCREF(par_A);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_B;
            assert(old != NULL);
            par_B = tmp_assign_source_18;
            Py_INCREF(par_B);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = par_C;
            assert(old != NULL);
            par_C = tmp_assign_source_19;
            Py_INCREF(par_C);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_5;
        assert(var_hsv == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_hsv = tmp_assign_source_20;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_6;
        assert(var_T == NULL);
        Py_INCREF(tmp_assign_source_21);
        var_T = tmp_assign_source_21;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_7;
        assert(var_Ti == NULL);
        Py_INCREF(tmp_assign_source_22);
        var_Ti = tmp_assign_source_22;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_22;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_out);
        tmp_expression_value_3 = var_out;
        tmp_subscript_value_2 = mod_consts[98];
        tmp_args_element_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arg_list);
        tmp_args_element_value_20 = var_arg_list;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 819;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[64]);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 819;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (locals_slycot$analysis$$$function__8_ab09ax == NULL) locals_slycot$analysis$$$function__8_ab09ax = PyDict_New();
        tmp_args_element_value_22 = locals_slycot$analysis$$$function__8_ab09ax;
        Py_INCREF(tmp_args_element_value_22);
        if (par_dico != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_dico);
            value = par_dico;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[79], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[79]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_job != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_job);
            value = par_job;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[80], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[80]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_n != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_n);
            value = par_n;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[40], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[40]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_m != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_m);
            value = par_m;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[5], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[5]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_p != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_p);
            value = par_p;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[73], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[73]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_A != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_A);
            value = par_A;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[41], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[41]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_B != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_B);
            value = par_B;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[43], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[43]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_C != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_C);
            value = par_C;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[45], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[45]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_nr != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_nr);
            value = par_nr;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[83], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[83]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_tol != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_tol);
            value = par_tol;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[88], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[88]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_ldwork != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_ldwork);
            value = par_ldwork;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[51], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[51]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_hidden != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_hidden);
            value = var_hidden;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[55], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[55]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_arg_list != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_arg_list);
            value = var_arg_list;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[56], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[56]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_ordsel != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_ordsel);
            value = var_ordsel;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[82], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[82]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_out != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_out);
            value = var_out;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[57], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[57]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_Nr != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_Nr);
            value = var_Nr;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[99], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[99]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_hsv != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_hsv);
            value = var_hsv;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[87], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[87]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_T != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_T);
            value = var_T;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[102], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[102]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_Ti != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_Ti);
            value = var_Ti;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_22, (Nuitka_StringObject *)mod_consts[104], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_22, mod_consts[104]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        frame_a7a3157639b101b75b4d0333d5f1128c->m_frame.f_lineno = 819;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_Nr);
        tmp_tuple_element_1 = var_Nr;
        tmp_return_value = PyTuple_New(7);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_stop_value_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_stop_value_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_stop_value_6;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_A);
            tmp_expression_value_5 = par_A;
            CHECK_OBJECT(var_Nr);
            tmp_stop_value_1 = var_Nr;
            tmp_tuple_element_2 = MAKE_SLICEOBJ1(tmp_stop_value_1);
            assert(!(tmp_tuple_element_2 == NULL));
            tmp_subscript_value_3 = PyTuple_New(2);
            {
                PyObject *tmp_stop_value_2;
                PyTuple_SET_ITEM(tmp_subscript_value_3, 0, tmp_tuple_element_2);
                CHECK_OBJECT(var_Nr);
                tmp_stop_value_2 = var_Nr;
                tmp_tuple_element_2 = MAKE_SLICEOBJ1(tmp_stop_value_2);
                assert(!(tmp_tuple_element_2 == NULL));
                PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_2);
            }
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 820;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_B);
            tmp_expression_value_6 = par_B;
            CHECK_OBJECT(var_Nr);
            tmp_stop_value_3 = var_Nr;
            tmp_tuple_element_3 = MAKE_SLICEOBJ1(tmp_stop_value_3);
            assert(!(tmp_tuple_element_3 == NULL));
            tmp_subscript_value_4 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[100];
            PyTuple_SET_ITEM0(tmp_subscript_value_4, 1, tmp_tuple_element_3);
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_4);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 820;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_C);
            tmp_expression_value_7 = par_C;
            tmp_tuple_element_4 = mod_consts[100];
            tmp_subscript_value_5 = PyTuple_New(2);
            {
                PyObject *tmp_stop_value_4;
                PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_4);
                CHECK_OBJECT(var_Nr);
                tmp_stop_value_4 = var_Nr;
                tmp_tuple_element_4 = MAKE_SLICEOBJ1(tmp_stop_value_4);
                assert(!(tmp_tuple_element_4 == NULL));
                PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_4);
            }
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_5);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 820;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 3, tmp_tuple_element_1);
            CHECK_OBJECT(var_hsv);
            tmp_tuple_element_1 = var_hsv;
            PyTuple_SET_ITEM0(tmp_return_value, 4, tmp_tuple_element_1);
            CHECK_OBJECT(var_T);
            tmp_expression_value_8 = var_T;
            tmp_tuple_element_5 = mod_consts[100];
            tmp_subscript_value_6 = PyTuple_New(2);
            {
                PyObject *tmp_stop_value_5;
                PyTuple_SET_ITEM0(tmp_subscript_value_6, 0, tmp_tuple_element_5);
                CHECK_OBJECT(var_Nr);
                tmp_stop_value_5 = var_Nr;
                tmp_tuple_element_5 = MAKE_SLICEOBJ1(tmp_stop_value_5);
                assert(!(tmp_tuple_element_5 == NULL));
                PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_5);
            }
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_6);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 820;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 5, tmp_tuple_element_1);
            CHECK_OBJECT(var_Ti);
            tmp_expression_value_9 = var_Ti;
            CHECK_OBJECT(var_Nr);
            tmp_stop_value_6 = var_Nr;
            tmp_tuple_element_6 = MAKE_SLICEOBJ1(tmp_stop_value_6);
            assert(!(tmp_tuple_element_6 == NULL));
            tmp_subscript_value_7 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_subscript_value_7, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[100];
            PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_6);
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_7);
            Py_DECREF(tmp_subscript_value_7);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 820;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 6, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7a3157639b101b75b4d0333d5f1128c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7a3157639b101b75b4d0333d5f1128c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7a3157639b101b75b4d0333d5f1128c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a7a3157639b101b75b4d0333d5f1128c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a7a3157639b101b75b4d0333d5f1128c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7a3157639b101b75b4d0333d5f1128c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a7a3157639b101b75b4d0333d5f1128c,
        type_description_1,
        par_dico,
        par_job,
        par_n,
        par_m,
        par_p,
        par_A,
        par_B,
        par_C,
        par_nr,
        par_tol,
        par_ldwork,
        var_hidden,
        var_arg_list,
        var_ordsel,
        var_out,
        var_Nr,
        var_hsv,
        var_T,
        var_Ti
    );


    // Release cached frame if used for exception.
    if (frame_a7a3157639b101b75b4d0333d5f1128c == cache_frame_a7a3157639b101b75b4d0333d5f1128c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a7a3157639b101b75b4d0333d5f1128c);
        cache_frame_a7a3157639b101b75b4d0333d5f1128c = NULL;
    }

    assertFrameObject(frame_a7a3157639b101b75b4d0333d5f1128c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    par_A = NULL;
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    par_B = NULL;
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    par_C = NULL;
    CHECK_OBJECT(par_nr);
    Py_DECREF(par_nr);
    par_nr = NULL;
    CHECK_OBJECT(par_ldwork);
    Py_DECREF(par_ldwork);
    par_ldwork = NULL;
    CHECK_OBJECT(var_hidden);
    Py_DECREF(var_hidden);
    var_hidden = NULL;
    CHECK_OBJECT(var_arg_list);
    Py_DECREF(var_arg_list);
    var_arg_list = NULL;
    CHECK_OBJECT(var_ordsel);
    Py_DECREF(var_ordsel);
    var_ordsel = NULL;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
    CHECK_OBJECT(var_Nr);
    Py_DECREF(var_Nr);
    var_Nr = NULL;
    CHECK_OBJECT(var_hsv);
    Py_DECREF(var_hsv);
    var_hsv = NULL;
    CHECK_OBJECT(var_T);
    Py_DECREF(var_T);
    var_T = NULL;
    CHECK_OBJECT(var_Ti);
    Py_DECREF(var_Ti);
    var_Ti = NULL;
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

    Py_XDECREF(par_A);
    par_A = NULL;
    Py_XDECREF(par_B);
    par_B = NULL;
    Py_XDECREF(par_C);
    par_C = NULL;
    Py_XDECREF(par_nr);
    par_nr = NULL;
    Py_XDECREF(par_ldwork);
    par_ldwork = NULL;
    Py_XDECREF(var_hidden);
    var_hidden = NULL;
    Py_XDECREF(var_arg_list);
    var_arg_list = NULL;
    Py_XDECREF(var_ordsel);
    var_ordsel = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_Nr);
    var_Nr = NULL;
    Py_XDECREF(var_hsv);
    var_hsv = NULL;
    Py_XDECREF(var_T);
    var_T = NULL;
    Py_XDECREF(var_Ti);
    var_Ti = NULL;
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
    Py_XDECREF(locals_slycot$analysis$$$function__8_ab09ax);

    CHECK_OBJECT(par_dico);
    Py_DECREF(par_dico);
    CHECK_OBJECT(par_job);
    Py_DECREF(par_job);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_slycot$analysis$$$function__8_ab09ax);

    CHECK_OBJECT(par_dico);
    Py_DECREF(par_dico);
    CHECK_OBJECT(par_job);
    Py_DECREF(par_job);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_slycot$analysis$$$function__9_ab09bd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dico = python_pars[0];
    PyObject *par_job = python_pars[1];
    PyObject *par_equil = python_pars[2];
    PyObject *par_n = python_pars[3];
    PyObject *par_m = python_pars[4];
    PyObject *par_p = python_pars[5];
    PyObject *par_A = python_pars[6];
    PyObject *par_B = python_pars[7];
    PyObject *par_C = python_pars[8];
    PyObject *par_D = python_pars[9];
    PyObject *par_nr = python_pars[10];
    PyObject *par_tol1 = python_pars[11];
    PyObject *par_tol2 = python_pars[12];
    PyObject *par_ldwork = python_pars[13];
    PyObject *var_hidden = NULL;
    PyObject *var_arg_list = NULL;
    PyObject *var_ordsel = NULL;
    PyObject *var_out = NULL;
    PyObject *var_Nr = NULL;
    PyObject *var_hsv = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4261d17cb04906378d0998da5e6da459;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *locals_slycot$analysis$$$function__9_ab09bd = NULL;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4261d17cb04906378d0998da5e6da459 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[17];
        assert(var_hidden == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_hidden = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = mod_consts[79];
        tmp_assign_source_2 = PyList_New(24);
        {
            PyObject *tmp_left_value_1;
            PyObject *tmp_right_value_1;
            PyObject *tmp_left_value_2;
            PyObject *tmp_right_value_2;
            PyObject *tmp_left_value_3;
            PyObject *tmp_right_value_3;
            PyObject *tmp_left_value_4;
            PyObject *tmp_right_value_4;
            PyObject *tmp_left_value_5;
            PyObject *tmp_right_value_5;
            PyObject *tmp_left_value_6;
            PyObject *tmp_right_value_6;
            PyList_SET_ITEM0(tmp_assign_source_2, 0, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[80];
            PyList_SET_ITEM0(tmp_assign_source_2, 1, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[81];
            PyList_SET_ITEM0(tmp_assign_source_2, 2, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[82];
            PyList_SET_ITEM0(tmp_assign_source_2, 3, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[40];
            PyList_SET_ITEM0(tmp_assign_source_2, 4, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[5];
            PyList_SET_ITEM0(tmp_assign_source_2, 5, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[73];
            PyList_SET_ITEM0(tmp_assign_source_2, 6, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[83];
            PyList_SET_ITEM0(tmp_assign_source_2, 7, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[41];
            PyList_SET_ITEM0(tmp_assign_source_2, 8, tmp_list_element_1);
            tmp_left_value_1 = mod_consts[84];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_1 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_1, tmp_right_value_1);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 9, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[43];
            PyList_SET_ITEM0(tmp_assign_source_2, 10, tmp_list_element_1);
            tmp_left_value_2 = mod_consts[85];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_2 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_2, tmp_right_value_2);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 11, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[45];
            PyList_SET_ITEM0(tmp_assign_source_2, 12, tmp_list_element_1);
            tmp_left_value_3 = mod_consts[86];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_3 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_3, tmp_right_value_3);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 13, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[47];
            PyList_SET_ITEM0(tmp_assign_source_2, 14, tmp_list_element_1);
            tmp_left_value_4 = mod_consts[110];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_4 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_4, tmp_right_value_4);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 15, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[87];
            PyList_SET_ITEM0(tmp_assign_source_2, 16, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[111];
            PyList_SET_ITEM0(tmp_assign_source_2, 17, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[112];
            PyList_SET_ITEM0(tmp_assign_source_2, 18, tmp_list_element_1);
            tmp_left_value_5 = mod_consts[89];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_5 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_5, tmp_right_value_5);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 19, tmp_list_element_1);
            tmp_left_value_6 = mod_consts[106];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_6 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_6, tmp_right_value_6);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 20, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[51];
            PyList_SET_ITEM0(tmp_assign_source_2, 21, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[91];
            PyList_SET_ITEM0(tmp_assign_source_2, 22, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[52];
            PyList_SET_ITEM0(tmp_assign_source_2, 23, tmp_list_element_1);
        }
        assert(var_arg_list == NULL);
        var_arg_list = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_4261d17cb04906378d0998da5e6da459)) {
        Py_XDECREF(cache_frame_4261d17cb04906378d0998da5e6da459);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4261d17cb04906378d0998da5e6da459 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4261d17cb04906378d0998da5e6da459 = MAKE_FUNCTION_FRAME(codeobj_4261d17cb04906378d0998da5e6da459, module_slycot$analysis, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4261d17cb04906378d0998da5e6da459->m_type_description == NULL);
    frame_4261d17cb04906378d0998da5e6da459 = cache_frame_4261d17cb04906378d0998da5e6da459;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4261d17cb04906378d0998da5e6da459);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4261d17cb04906378d0998da5e6da459) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_ldwork);
        tmp_compexpr_left_1 = par_ldwork;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_left_value_7;
        PyObject *tmp_left_value_8;
        PyObject *tmp_right_value_7;
        PyObject *tmp_left_value_9;
        PyObject *tmp_left_value_10;
        PyObject *tmp_left_value_11;
        PyObject *tmp_right_value_8;
        PyObject *tmp_right_value_9;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_right_value_10;
        PyObject *tmp_right_value_11;
        PyObject *tmp_left_value_12;
        PyObject *tmp_left_value_13;
        PyObject *tmp_right_value_12;
        PyObject *tmp_left_value_14;
        PyObject *tmp_right_value_13;
        PyObject *tmp_right_value_14;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_1 != NULL);
        tmp_args_element_value_1 = mod_consts[61];
        CHECK_OBJECT(par_n);
        tmp_left_value_8 = par_n;
        tmp_left_value_11 = mod_consts[92];
        CHECK_OBJECT(par_n);
        tmp_right_value_8 = par_n;
        tmp_left_value_10 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_11, tmp_right_value_8);
        if (tmp_left_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 955;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(par_n);
        tmp_args_element_value_3 = par_n;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_3 != NULL);
        CHECK_OBJECT(par_m);
        tmp_args_element_value_5 = par_m;
        CHECK_OBJECT(par_p);
        tmp_args_element_value_6 = par_p;
        frame_4261d17cb04906378d0998da5e6da459->m_frame.f_lineno = 955;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_10);

            exception_lineno = 955;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4261d17cb04906378d0998da5e6da459->m_frame.f_lineno = 955;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_right_value_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_right_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_10);

            exception_lineno = 955;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_10, tmp_right_value_9);
        Py_DECREF(tmp_left_value_10);
        Py_DECREF(tmp_right_value_9);
        if (tmp_left_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 955;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_10 = mod_consts[93];
        tmp_right_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_9, tmp_right_value_10);
        Py_DECREF(tmp_left_value_9);
        if (tmp_right_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 955;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_8, tmp_right_value_7);
        Py_DECREF(tmp_right_value_7);
        if (tmp_left_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 955;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_left_value_13 = par_n;
        CHECK_OBJECT(par_n);
        tmp_left_value_14 = par_n;
        tmp_right_value_13 = mod_consts[61];
        tmp_right_value_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_14, tmp_right_value_13);
        if (tmp_right_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_7);

            exception_lineno = 955;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_12 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_13, tmp_right_value_12);
        Py_DECREF(tmp_right_value_12);
        if (tmp_left_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_7);

            exception_lineno = 955;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_14 = mod_consts[92];
        tmp_right_value_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_12, tmp_right_value_14);
        Py_DECREF(tmp_left_value_12);
        if (tmp_right_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_7);

            exception_lineno = 955;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_7, tmp_right_value_11);
        Py_DECREF(tmp_left_value_7);
        Py_DECREF(tmp_right_value_11);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 955;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4261d17cb04906378d0998da5e6da459->m_frame.f_lineno = 955;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 955;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ldwork;
            assert(old != NULL);
            par_ldwork = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_nr);
        tmp_compexpr_left_2 = par_nr;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[41];
        assert(var_ordsel == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_ordsel = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[76];
        {
            PyObject *old = par_nr;
            assert(old != NULL);
            par_nr = tmp_assign_source_5;
            Py_INCREF(par_nr);
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[94];
        assert(var_ordsel == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_ordsel = tmp_assign_source_6;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 961;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[113]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 961;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dico);
        tmp_args_element_value_7 = par_dico;
        CHECK_OBJECT(par_job);
        tmp_args_element_value_8 = par_job;
        CHECK_OBJECT(par_equil);
        tmp_args_element_value_9 = par_equil;
        CHECK_OBJECT(var_ordsel);
        tmp_args_element_value_10 = var_ordsel;
        if (par_n == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 962;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_11 = par_n;
        CHECK_OBJECT(par_m);
        tmp_args_element_value_12 = par_m;
        CHECK_OBJECT(par_p);
        tmp_args_element_value_13 = par_p;
        CHECK_OBJECT(par_nr);
        tmp_args_element_value_14 = par_nr;
        CHECK_OBJECT(par_A);
        tmp_args_element_value_15 = par_A;
        CHECK_OBJECT(par_B);
        tmp_args_element_value_16 = par_B;
        CHECK_OBJECT(par_C);
        tmp_args_element_value_17 = par_C;
        CHECK_OBJECT(par_D);
        tmp_args_element_value_18 = par_D;
        CHECK_OBJECT(par_tol1);
        tmp_args_element_value_19 = par_tol1;
        CHECK_OBJECT(par_tol2);
        tmp_args_element_value_20 = par_tol2;
        CHECK_OBJECT(par_ldwork);
        tmp_args_element_value_21 = par_ldwork;
        frame_4261d17cb04906378d0998da5e6da459->m_frame.f_lineno = 961;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS15(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 961;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_out);
        tmp_expression_value_2 = var_out;
        tmp_subscript_value_1 = mod_consts[96];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 963;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 963;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_1, 0, 6);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 963;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_2, 1, 6);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 963;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_3, 2, 6);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 963;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_4, 3, 6);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 963;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_5, 4, 6);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 963;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_6, 5, 6);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 963;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_6 == NULL);
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_14;
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

                    type_description_1 = "oooooooooooooooooooo";
                    exception_lineno = 963;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[114];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 963;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_1;
        assert(var_Nr == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_Nr = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_A;
            assert(old != NULL);
            par_A = tmp_assign_source_16;
            Py_INCREF(par_A);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_B;
            assert(old != NULL);
            par_B = tmp_assign_source_17;
            Py_INCREF(par_B);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = par_C;
            assert(old != NULL);
            par_C = tmp_assign_source_18;
            Py_INCREF(par_C);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_5;
        {
            PyObject *old = par_D;
            assert(old != NULL);
            par_D = tmp_assign_source_19;
            Py_INCREF(par_D);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_6;
        assert(var_hsv == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_hsv = tmp_assign_source_20;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_25;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 964;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_out);
        tmp_expression_value_3 = var_out;
        tmp_subscript_value_2 = mod_consts[98];
        tmp_args_element_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 964;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arg_list);
        tmp_args_element_value_23 = var_arg_list;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_22);

            exception_lineno = 964;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[64]);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_22);

            exception_lineno = 964;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (locals_slycot$analysis$$$function__9_ab09bd == NULL) locals_slycot$analysis$$$function__9_ab09bd = PyDict_New();
        tmp_args_element_value_25 = locals_slycot$analysis$$$function__9_ab09bd;
        Py_INCREF(tmp_args_element_value_25);
        if (par_dico != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_dico);
            value = par_dico;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[79], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[79]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_job != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_job);
            value = par_job;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[80], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[80]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_equil != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_equil);
            value = par_equil;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[81], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[81]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_n != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_n);
            value = par_n;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[40], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[40]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_m != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_m);
            value = par_m;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[5], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[5]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_p != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_p);
            value = par_p;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[73], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[73]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_A != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_A);
            value = par_A;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[41], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[41]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_B != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_B);
            value = par_B;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[43], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[43]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_C != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_C);
            value = par_C;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[45], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[45]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_D != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_D);
            value = par_D;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[47], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[47]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_nr != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_nr);
            value = par_nr;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[83], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[83]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_tol1 != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_tol1);
            value = par_tol1;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[111], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[111]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_tol2 != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_tol2);
            value = par_tol2;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[112], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[112]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_ldwork != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_ldwork);
            value = par_ldwork;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[51], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[51]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_hidden != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_hidden);
            value = var_hidden;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[55], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[55]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_arg_list != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_arg_list);
            value = var_arg_list;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[56], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[56]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_ordsel != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_ordsel);
            value = var_ordsel;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[82], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[82]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_out != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_out);
            value = var_out;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[57], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[57]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_Nr != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_Nr);
            value = var_Nr;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[99], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[99]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_hsv != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_hsv);
            value = var_hsv;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_25, (Nuitka_StringObject *)mod_consts[87], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_25, mod_consts[87]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        frame_4261d17cb04906378d0998da5e6da459->m_frame.f_lineno = 964;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_24);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 964;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_Nr);
        tmp_tuple_element_1 = var_Nr;
        tmp_return_value = PyTuple_New(6);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_stop_value_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_stop_value_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_6;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_A);
            tmp_expression_value_5 = par_A;
            CHECK_OBJECT(var_Nr);
            tmp_stop_value_1 = var_Nr;
            tmp_tuple_element_2 = MAKE_SLICEOBJ1(tmp_stop_value_1);
            assert(!(tmp_tuple_element_2 == NULL));
            tmp_subscript_value_3 = PyTuple_New(2);
            {
                PyObject *tmp_stop_value_2;
                PyTuple_SET_ITEM(tmp_subscript_value_3, 0, tmp_tuple_element_2);
                CHECK_OBJECT(var_Nr);
                tmp_stop_value_2 = var_Nr;
                tmp_tuple_element_2 = MAKE_SLICEOBJ1(tmp_stop_value_2);
                assert(!(tmp_tuple_element_2 == NULL));
                PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_2);
            }
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 965;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_B);
            tmp_expression_value_6 = par_B;
            CHECK_OBJECT(var_Nr);
            tmp_stop_value_3 = var_Nr;
            tmp_tuple_element_3 = MAKE_SLICEOBJ1(tmp_stop_value_3);
            assert(!(tmp_tuple_element_3 == NULL));
            tmp_subscript_value_4 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[100];
            PyTuple_SET_ITEM0(tmp_subscript_value_4, 1, tmp_tuple_element_3);
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_4);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 965;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_C);
            tmp_expression_value_7 = par_C;
            tmp_tuple_element_4 = mod_consts[100];
            tmp_subscript_value_5 = PyTuple_New(2);
            {
                PyObject *tmp_stop_value_4;
                PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_4);
                CHECK_OBJECT(var_Nr);
                tmp_stop_value_4 = var_Nr;
                tmp_tuple_element_4 = MAKE_SLICEOBJ1(tmp_stop_value_4);
                assert(!(tmp_tuple_element_4 == NULL));
                PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_4);
            }
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_5);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 965;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_D);
            tmp_expression_value_8 = par_D;
            tmp_subscript_value_6 = mod_consts[115];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_6);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 965;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 4, tmp_tuple_element_1);
            CHECK_OBJECT(var_hsv);
            tmp_tuple_element_1 = var_hsv;
            PyTuple_SET_ITEM0(tmp_return_value, 5, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4261d17cb04906378d0998da5e6da459);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4261d17cb04906378d0998da5e6da459);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4261d17cb04906378d0998da5e6da459);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4261d17cb04906378d0998da5e6da459, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4261d17cb04906378d0998da5e6da459->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4261d17cb04906378d0998da5e6da459, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4261d17cb04906378d0998da5e6da459,
        type_description_1,
        par_dico,
        par_job,
        par_equil,
        par_n,
        par_m,
        par_p,
        par_A,
        par_B,
        par_C,
        par_D,
        par_nr,
        par_tol1,
        par_tol2,
        par_ldwork,
        var_hidden,
        var_arg_list,
        var_ordsel,
        var_out,
        var_Nr,
        var_hsv
    );


    // Release cached frame if used for exception.
    if (frame_4261d17cb04906378d0998da5e6da459 == cache_frame_4261d17cb04906378d0998da5e6da459) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4261d17cb04906378d0998da5e6da459);
        cache_frame_4261d17cb04906378d0998da5e6da459 = NULL;
    }

    assertFrameObject(frame_4261d17cb04906378d0998da5e6da459);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    par_A = NULL;
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    par_B = NULL;
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    par_C = NULL;
    CHECK_OBJECT(par_D);
    Py_DECREF(par_D);
    par_D = NULL;
    CHECK_OBJECT(par_nr);
    Py_DECREF(par_nr);
    par_nr = NULL;
    CHECK_OBJECT(par_ldwork);
    Py_DECREF(par_ldwork);
    par_ldwork = NULL;
    CHECK_OBJECT(var_hidden);
    Py_DECREF(var_hidden);
    var_hidden = NULL;
    CHECK_OBJECT(var_arg_list);
    Py_DECREF(var_arg_list);
    var_arg_list = NULL;
    CHECK_OBJECT(var_ordsel);
    Py_DECREF(var_ordsel);
    var_ordsel = NULL;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
    CHECK_OBJECT(var_Nr);
    Py_DECREF(var_Nr);
    var_Nr = NULL;
    CHECK_OBJECT(var_hsv);
    Py_DECREF(var_hsv);
    var_hsv = NULL;
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

    Py_XDECREF(par_A);
    par_A = NULL;
    Py_XDECREF(par_B);
    par_B = NULL;
    Py_XDECREF(par_C);
    par_C = NULL;
    Py_XDECREF(par_D);
    par_D = NULL;
    Py_XDECREF(par_nr);
    par_nr = NULL;
    Py_XDECREF(par_ldwork);
    par_ldwork = NULL;
    Py_XDECREF(var_hidden);
    var_hidden = NULL;
    Py_XDECREF(var_arg_list);
    var_arg_list = NULL;
    Py_XDECREF(var_ordsel);
    var_ordsel = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_Nr);
    var_Nr = NULL;
    Py_XDECREF(var_hsv);
    var_hsv = NULL;
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
    Py_XDECREF(locals_slycot$analysis$$$function__9_ab09bd);

    CHECK_OBJECT(par_dico);
    Py_DECREF(par_dico);
    CHECK_OBJECT(par_job);
    Py_DECREF(par_job);
    CHECK_OBJECT(par_equil);
    Py_DECREF(par_equil);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_tol1);
    Py_DECREF(par_tol1);
    CHECK_OBJECT(par_tol2);
    Py_DECREF(par_tol2);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_slycot$analysis$$$function__9_ab09bd);

    CHECK_OBJECT(par_dico);
    Py_DECREF(par_dico);
    CHECK_OBJECT(par_job);
    Py_DECREF(par_job);
    CHECK_OBJECT(par_equil);
    Py_DECREF(par_equil);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_tol1);
    Py_DECREF(par_tol1);
    CHECK_OBJECT(par_tol2);
    Py_DECREF(par_tol2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_slycot$analysis$$$function__10_ab09md(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dico = python_pars[0];
    PyObject *par_job = python_pars[1];
    PyObject *par_equil = python_pars[2];
    PyObject *par_n = python_pars[3];
    PyObject *par_m = python_pars[4];
    PyObject *par_p = python_pars[5];
    PyObject *par_A = python_pars[6];
    PyObject *par_B = python_pars[7];
    PyObject *par_C = python_pars[8];
    PyObject *par_alpha = python_pars[9];
    PyObject *par_nr = python_pars[10];
    PyObject *par_tol = python_pars[11];
    PyObject *par_ldwork = python_pars[12];
    PyObject *var_hidden = NULL;
    PyObject *var_arg_list = NULL;
    PyObject *var_ordsel = NULL;
    PyObject *var_out = NULL;
    PyObject *var_Nr = NULL;
    PyObject *var_Ns = NULL;
    PyObject *var_hsv = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_648858c5756a53e68126f92e58ca2137;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *locals_slycot$analysis$$$function__10_ab09md = NULL;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_648858c5756a53e68126f92e58ca2137 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[17];
        assert(var_hidden == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_hidden = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = mod_consts[79];
        tmp_assign_source_2 = PyList_New(23);
        {
            PyObject *tmp_left_value_1;
            PyObject *tmp_right_value_1;
            PyObject *tmp_left_value_2;
            PyObject *tmp_right_value_2;
            PyObject *tmp_left_value_3;
            PyObject *tmp_right_value_3;
            PyObject *tmp_left_value_4;
            PyObject *tmp_right_value_4;
            PyObject *tmp_left_value_5;
            PyObject *tmp_right_value_5;
            PyList_SET_ITEM0(tmp_assign_source_2, 0, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[80];
            PyList_SET_ITEM0(tmp_assign_source_2, 1, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[81];
            PyList_SET_ITEM0(tmp_assign_source_2, 2, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[82];
            PyList_SET_ITEM0(tmp_assign_source_2, 3, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[40];
            PyList_SET_ITEM0(tmp_assign_source_2, 4, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[5];
            PyList_SET_ITEM0(tmp_assign_source_2, 5, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[73];
            PyList_SET_ITEM0(tmp_assign_source_2, 6, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[83];
            PyList_SET_ITEM0(tmp_assign_source_2, 7, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[23];
            PyList_SET_ITEM0(tmp_assign_source_2, 8, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[41];
            PyList_SET_ITEM0(tmp_assign_source_2, 9, tmp_list_element_1);
            tmp_left_value_1 = mod_consts[84];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_1 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_1, tmp_right_value_1);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 10, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[43];
            PyList_SET_ITEM0(tmp_assign_source_2, 11, tmp_list_element_1);
            tmp_left_value_2 = mod_consts[85];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_2 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_2, tmp_right_value_2);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 12, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[45];
            PyList_SET_ITEM0(tmp_assign_source_2, 13, tmp_list_element_1);
            tmp_left_value_3 = mod_consts[86];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_3 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_3, tmp_right_value_3);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 14, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[117];
            PyList_SET_ITEM0(tmp_assign_source_2, 15, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[87];
            PyList_SET_ITEM0(tmp_assign_source_2, 16, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[88];
            PyList_SET_ITEM0(tmp_assign_source_2, 17, tmp_list_element_1);
            tmp_left_value_4 = mod_consts[89];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_4 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_4, tmp_right_value_4);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 18, tmp_list_element_1);
            tmp_left_value_5 = mod_consts[106];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_5 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_5, tmp_right_value_5);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 19, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[51];
            PyList_SET_ITEM0(tmp_assign_source_2, 20, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[91];
            PyList_SET_ITEM0(tmp_assign_source_2, 21, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[52];
            PyList_SET_ITEM0(tmp_assign_source_2, 22, tmp_list_element_1);
        }
        assert(var_arg_list == NULL);
        var_arg_list = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_648858c5756a53e68126f92e58ca2137)) {
        Py_XDECREF(cache_frame_648858c5756a53e68126f92e58ca2137);

#if _DEBUG_REFCOUNTS
        if (cache_frame_648858c5756a53e68126f92e58ca2137 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_648858c5756a53e68126f92e58ca2137 = MAKE_FUNCTION_FRAME(codeobj_648858c5756a53e68126f92e58ca2137, module_slycot$analysis, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_648858c5756a53e68126f92e58ca2137->m_type_description == NULL);
    frame_648858c5756a53e68126f92e58ca2137 = cache_frame_648858c5756a53e68126f92e58ca2137;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_648858c5756a53e68126f92e58ca2137);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_648858c5756a53e68126f92e58ca2137) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_ldwork);
        tmp_compexpr_left_1 = par_ldwork;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_left_value_6;
        PyObject *tmp_left_value_7;
        PyObject *tmp_right_value_6;
        PyObject *tmp_left_value_8;
        PyObject *tmp_left_value_9;
        PyObject *tmp_left_value_10;
        PyObject *tmp_right_value_7;
        PyObject *tmp_right_value_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_right_value_9;
        PyObject *tmp_right_value_10;
        PyObject *tmp_left_value_11;
        PyObject *tmp_left_value_12;
        PyObject *tmp_right_value_11;
        PyObject *tmp_left_value_13;
        PyObject *tmp_right_value_12;
        PyObject *tmp_right_value_13;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_1 != NULL);
        tmp_args_element_value_1 = mod_consts[61];
        CHECK_OBJECT(par_n);
        tmp_left_value_7 = par_n;
        tmp_left_value_10 = mod_consts[92];
        CHECK_OBJECT(par_n);
        tmp_right_value_7 = par_n;
        tmp_left_value_9 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_10, tmp_right_value_7);
        if (tmp_left_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1121;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(par_n);
        tmp_args_element_value_3 = par_n;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_3 != NULL);
        CHECK_OBJECT(par_m);
        tmp_args_element_value_5 = par_m;
        CHECK_OBJECT(par_p);
        tmp_args_element_value_6 = par_p;
        frame_648858c5756a53e68126f92e58ca2137->m_frame.f_lineno = 1121;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_9);

            exception_lineno = 1121;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_648858c5756a53e68126f92e58ca2137->m_frame.f_lineno = 1121;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_right_value_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_right_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_9);

            exception_lineno = 1121;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_9, tmp_right_value_8);
        Py_DECREF(tmp_left_value_9);
        Py_DECREF(tmp_right_value_8);
        if (tmp_left_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1121;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_9 = mod_consts[93];
        tmp_right_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_8, tmp_right_value_9);
        Py_DECREF(tmp_left_value_8);
        if (tmp_right_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1121;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_7, tmp_right_value_6);
        Py_DECREF(tmp_right_value_6);
        if (tmp_left_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1121;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_left_value_12 = par_n;
        CHECK_OBJECT(par_n);
        tmp_left_value_13 = par_n;
        tmp_right_value_12 = mod_consts[61];
        tmp_right_value_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_13, tmp_right_value_12);
        if (tmp_right_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_6);

            exception_lineno = 1121;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_11 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_12, tmp_right_value_11);
        Py_DECREF(tmp_right_value_11);
        if (tmp_left_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_6);

            exception_lineno = 1121;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_13 = mod_consts[92];
        tmp_right_value_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_11, tmp_right_value_13);
        Py_DECREF(tmp_left_value_11);
        if (tmp_right_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_6);

            exception_lineno = 1121;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_6, tmp_right_value_10);
        Py_DECREF(tmp_left_value_6);
        Py_DECREF(tmp_right_value_10);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1121;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_648858c5756a53e68126f92e58ca2137->m_frame.f_lineno = 1121;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1121;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ldwork;
            assert(old != NULL);
            par_ldwork = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_nr);
        tmp_compexpr_left_2 = par_nr;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[41];
        assert(var_ordsel == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_ordsel = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[76];
        {
            PyObject *old = par_nr;
            assert(old != NULL);
            par_nr = tmp_assign_source_5;
            Py_INCREF(par_nr);
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[94];
        assert(var_ordsel == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_ordsel = tmp_assign_source_6;
    }
    branch_end_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(par_alpha);
        tmp_compexpr_left_3 = par_alpha;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = PyDict_Copy(mod_consts[118]);
        CHECK_OBJECT(par_dico);
        tmp_subscript_value_1 = par_dico;
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1128;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_alpha;
            assert(old != NULL);
            par_alpha = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1129;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[119]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1129;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dico);
        tmp_args_element_value_7 = par_dico;
        CHECK_OBJECT(par_job);
        tmp_args_element_value_8 = par_job;
        CHECK_OBJECT(par_equil);
        tmp_args_element_value_9 = par_equil;
        CHECK_OBJECT(var_ordsel);
        tmp_args_element_value_10 = var_ordsel;
        if (par_n == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1130;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_11 = par_n;
        CHECK_OBJECT(par_m);
        tmp_args_element_value_12 = par_m;
        CHECK_OBJECT(par_p);
        tmp_args_element_value_13 = par_p;
        CHECK_OBJECT(par_nr);
        tmp_args_element_value_14 = par_nr;
        CHECK_OBJECT(par_alpha);
        tmp_args_element_value_15 = par_alpha;
        CHECK_OBJECT(par_A);
        tmp_args_element_value_16 = par_A;
        CHECK_OBJECT(par_B);
        tmp_args_element_value_17 = par_B;
        CHECK_OBJECT(par_C);
        tmp_args_element_value_18 = par_C;
        CHECK_OBJECT(par_tol);
        tmp_args_element_value_19 = par_tol;
        CHECK_OBJECT(par_ldwork);
        tmp_args_element_value_20 = par_ldwork;
        frame_648858c5756a53e68126f92e58ca2137->m_frame.f_lineno = 1129;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS14(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1129;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_out);
        tmp_expression_value_3 = var_out;
        tmp_subscript_value_2 = mod_consts[96];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_1, 0, 6);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 1131;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_2, 1, 6);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 1131;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_3, 2, 6);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 1131;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_4, 3, 6);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 1131;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_5, 4, 6);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 1131;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_6, 5, 6);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 1131;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_6 == NULL);
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_15;
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

                    type_description_1 = "oooooooooooooooooooo";
                    exception_lineno = 1131;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[114];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 1131;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_1;
        assert(var_Nr == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_Nr = tmp_assign_source_16;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_A;
            assert(old != NULL);
            par_A = tmp_assign_source_17;
            Py_INCREF(par_A);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_B;
            assert(old != NULL);
            par_B = tmp_assign_source_18;
            Py_INCREF(par_B);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = par_C;
            assert(old != NULL);
            par_C = tmp_assign_source_19;
            Py_INCREF(par_C);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_5;
        assert(var_Ns == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_Ns = tmp_assign_source_20;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_6;
        assert(var_hsv == NULL);
        Py_INCREF(tmp_assign_source_21);
        var_hsv = tmp_assign_source_21;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_24;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1132;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_out);
        tmp_expression_value_4 = var_out;
        tmp_subscript_value_3 = mod_consts[98];
        tmp_args_element_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1132;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arg_list);
        tmp_args_element_value_22 = var_arg_list;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 1132;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[64]);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 1132;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (locals_slycot$analysis$$$function__10_ab09md == NULL) locals_slycot$analysis$$$function__10_ab09md = PyDict_New();
        tmp_args_element_value_24 = locals_slycot$analysis$$$function__10_ab09md;
        Py_INCREF(tmp_args_element_value_24);
        if (par_dico != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_dico);
            value = par_dico;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[79], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[79]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_job != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_job);
            value = par_job;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[80], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[80]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_equil != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_equil);
            value = par_equil;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[81], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[81]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_n != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_n);
            value = par_n;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[40], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[40]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_m != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_m);
            value = par_m;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[5], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[5]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_p != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_p);
            value = par_p;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[73], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[73]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_A != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_A);
            value = par_A;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[41], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[41]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_B != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_B);
            value = par_B;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[43], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[43]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_C != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_C);
            value = par_C;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[45], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[45]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_alpha != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_alpha);
            value = par_alpha;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[23], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[23]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_nr != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_nr);
            value = par_nr;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[83], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[83]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_tol != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_tol);
            value = par_tol;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[88], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[88]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_ldwork != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_ldwork);
            value = par_ldwork;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[51], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[51]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_hidden != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_hidden);
            value = var_hidden;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[55], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[55]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_arg_list != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_arg_list);
            value = var_arg_list;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[56], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[56]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_ordsel != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_ordsel);
            value = var_ordsel;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[82], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[82]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_out != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_out);
            value = var_out;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[57], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[57]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_Nr != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_Nr);
            value = var_Nr;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[99], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[99]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_Ns != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_Ns);
            value = var_Ns;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[120], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[120]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_hsv != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_hsv);
            value = var_hsv;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_24, (Nuitka_StringObject *)mod_consts[87], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_24, mod_consts[87]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        frame_648858c5756a53e68126f92e58ca2137->m_frame.f_lineno = 1132;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1132;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_Nr);
        tmp_tuple_element_1 = var_Nr;
        tmp_return_value = PyTuple_New(6);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_stop_value_1;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_stop_value_3;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_tuple_element_4;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_A);
            tmp_expression_value_6 = par_A;
            CHECK_OBJECT(var_Nr);
            tmp_stop_value_1 = var_Nr;
            tmp_tuple_element_2 = MAKE_SLICEOBJ1(tmp_stop_value_1);
            assert(!(tmp_tuple_element_2 == NULL));
            tmp_subscript_value_4 = PyTuple_New(2);
            {
                PyObject *tmp_stop_value_2;
                PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_2);
                CHECK_OBJECT(var_Nr);
                tmp_stop_value_2 = var_Nr;
                tmp_tuple_element_2 = MAKE_SLICEOBJ1(tmp_stop_value_2);
                assert(!(tmp_tuple_element_2 == NULL));
                PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_2);
            }
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_4);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1133;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_B);
            tmp_expression_value_7 = par_B;
            CHECK_OBJECT(var_Nr);
            tmp_stop_value_3 = var_Nr;
            tmp_tuple_element_3 = MAKE_SLICEOBJ1(tmp_stop_value_3);
            assert(!(tmp_tuple_element_3 == NULL));
            tmp_subscript_value_5 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_subscript_value_5, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[100];
            PyTuple_SET_ITEM0(tmp_subscript_value_5, 1, tmp_tuple_element_3);
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_5);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1133;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_C);
            tmp_expression_value_8 = par_C;
            tmp_tuple_element_4 = mod_consts[100];
            tmp_subscript_value_6 = PyTuple_New(2);
            {
                PyObject *tmp_stop_value_4;
                PyTuple_SET_ITEM0(tmp_subscript_value_6, 0, tmp_tuple_element_4);
                CHECK_OBJECT(var_Nr);
                tmp_stop_value_4 = var_Nr;
                tmp_tuple_element_4 = MAKE_SLICEOBJ1(tmp_stop_value_4);
                assert(!(tmp_tuple_element_4 == NULL));
                PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_4);
            }
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_6);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1133;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 3, tmp_tuple_element_1);
            CHECK_OBJECT(var_Ns);
            tmp_tuple_element_1 = var_Ns;
            PyTuple_SET_ITEM0(tmp_return_value, 4, tmp_tuple_element_1);
            CHECK_OBJECT(var_hsv);
            tmp_tuple_element_1 = var_hsv;
            PyTuple_SET_ITEM0(tmp_return_value, 5, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_648858c5756a53e68126f92e58ca2137);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_648858c5756a53e68126f92e58ca2137);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_648858c5756a53e68126f92e58ca2137);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_648858c5756a53e68126f92e58ca2137, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_648858c5756a53e68126f92e58ca2137->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_648858c5756a53e68126f92e58ca2137, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_648858c5756a53e68126f92e58ca2137,
        type_description_1,
        par_dico,
        par_job,
        par_equil,
        par_n,
        par_m,
        par_p,
        par_A,
        par_B,
        par_C,
        par_alpha,
        par_nr,
        par_tol,
        par_ldwork,
        var_hidden,
        var_arg_list,
        var_ordsel,
        var_out,
        var_Nr,
        var_Ns,
        var_hsv
    );


    // Release cached frame if used for exception.
    if (frame_648858c5756a53e68126f92e58ca2137 == cache_frame_648858c5756a53e68126f92e58ca2137) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_648858c5756a53e68126f92e58ca2137);
        cache_frame_648858c5756a53e68126f92e58ca2137 = NULL;
    }

    assertFrameObject(frame_648858c5756a53e68126f92e58ca2137);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    par_A = NULL;
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    par_B = NULL;
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    par_C = NULL;
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);
    par_alpha = NULL;
    CHECK_OBJECT(par_nr);
    Py_DECREF(par_nr);
    par_nr = NULL;
    CHECK_OBJECT(par_ldwork);
    Py_DECREF(par_ldwork);
    par_ldwork = NULL;
    CHECK_OBJECT(var_hidden);
    Py_DECREF(var_hidden);
    var_hidden = NULL;
    CHECK_OBJECT(var_arg_list);
    Py_DECREF(var_arg_list);
    var_arg_list = NULL;
    CHECK_OBJECT(var_ordsel);
    Py_DECREF(var_ordsel);
    var_ordsel = NULL;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
    CHECK_OBJECT(var_Nr);
    Py_DECREF(var_Nr);
    var_Nr = NULL;
    CHECK_OBJECT(var_Ns);
    Py_DECREF(var_Ns);
    var_Ns = NULL;
    CHECK_OBJECT(var_hsv);
    Py_DECREF(var_hsv);
    var_hsv = NULL;
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

    Py_XDECREF(par_A);
    par_A = NULL;
    Py_XDECREF(par_B);
    par_B = NULL;
    Py_XDECREF(par_C);
    par_C = NULL;
    Py_XDECREF(par_alpha);
    par_alpha = NULL;
    Py_XDECREF(par_nr);
    par_nr = NULL;
    Py_XDECREF(par_ldwork);
    par_ldwork = NULL;
    Py_XDECREF(var_hidden);
    var_hidden = NULL;
    Py_XDECREF(var_arg_list);
    var_arg_list = NULL;
    Py_XDECREF(var_ordsel);
    var_ordsel = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_Nr);
    var_Nr = NULL;
    Py_XDECREF(var_Ns);
    var_Ns = NULL;
    Py_XDECREF(var_hsv);
    var_hsv = NULL;
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
    Py_XDECREF(locals_slycot$analysis$$$function__10_ab09md);

    CHECK_OBJECT(par_dico);
    Py_DECREF(par_dico);
    CHECK_OBJECT(par_job);
    Py_DECREF(par_job);
    CHECK_OBJECT(par_equil);
    Py_DECREF(par_equil);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_slycot$analysis$$$function__10_ab09md);

    CHECK_OBJECT(par_dico);
    Py_DECREF(par_dico);
    CHECK_OBJECT(par_job);
    Py_DECREF(par_job);
    CHECK_OBJECT(par_equil);
    Py_DECREF(par_equil);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_slycot$analysis$$$function__11_ab09nd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dico = python_pars[0];
    PyObject *par_job = python_pars[1];
    PyObject *par_equil = python_pars[2];
    PyObject *par_n = python_pars[3];
    PyObject *par_m = python_pars[4];
    PyObject *par_p = python_pars[5];
    PyObject *par_A = python_pars[6];
    PyObject *par_B = python_pars[7];
    PyObject *par_C = python_pars[8];
    PyObject *par_D = python_pars[9];
    PyObject *par_alpha = python_pars[10];
    PyObject *par_nr = python_pars[11];
    PyObject *par_tol1 = python_pars[12];
    PyObject *par_tol2 = python_pars[13];
    PyObject *par_ldwork = python_pars[14];
    PyObject *var_hidden = NULL;
    PyObject *var_arg_list = NULL;
    PyObject *var_ordsel = NULL;
    PyObject *var_out = NULL;
    PyObject *var_Nr = NULL;
    PyObject *var_Ns = NULL;
    PyObject *var_hsv = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e474fc2f4d830ee101f37c542592b1e3;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *locals_slycot$analysis$$$function__11_ab09nd = NULL;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e474fc2f4d830ee101f37c542592b1e3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[17];
        assert(var_hidden == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_hidden = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = mod_consts[79];
        tmp_assign_source_2 = PyList_New(26);
        {
            PyObject *tmp_left_value_1;
            PyObject *tmp_right_value_1;
            PyObject *tmp_left_value_2;
            PyObject *tmp_right_value_2;
            PyObject *tmp_left_value_3;
            PyObject *tmp_right_value_3;
            PyObject *tmp_left_value_4;
            PyObject *tmp_right_value_4;
            PyObject *tmp_left_value_5;
            PyObject *tmp_right_value_5;
            PyObject *tmp_left_value_6;
            PyObject *tmp_right_value_6;
            PyList_SET_ITEM0(tmp_assign_source_2, 0, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[80];
            PyList_SET_ITEM0(tmp_assign_source_2, 1, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[81];
            PyList_SET_ITEM0(tmp_assign_source_2, 2, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[82];
            PyList_SET_ITEM0(tmp_assign_source_2, 3, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[40];
            PyList_SET_ITEM0(tmp_assign_source_2, 4, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[5];
            PyList_SET_ITEM0(tmp_assign_source_2, 5, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[73];
            PyList_SET_ITEM0(tmp_assign_source_2, 6, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[83];
            PyList_SET_ITEM0(tmp_assign_source_2, 7, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[23];
            PyList_SET_ITEM0(tmp_assign_source_2, 8, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[41];
            PyList_SET_ITEM0(tmp_assign_source_2, 9, tmp_list_element_1);
            tmp_left_value_1 = mod_consts[84];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_1 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_1, tmp_right_value_1);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 10, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[43];
            PyList_SET_ITEM0(tmp_assign_source_2, 11, tmp_list_element_1);
            tmp_left_value_2 = mod_consts[85];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_2 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_2, tmp_right_value_2);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 12, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[45];
            PyList_SET_ITEM0(tmp_assign_source_2, 13, tmp_list_element_1);
            tmp_left_value_3 = mod_consts[86];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_3 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_3, tmp_right_value_3);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 14, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[47];
            PyList_SET_ITEM0(tmp_assign_source_2, 15, tmp_list_element_1);
            tmp_left_value_4 = mod_consts[86];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_4 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_4, tmp_right_value_4);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 16, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[117];
            PyList_SET_ITEM0(tmp_assign_source_2, 17, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[87];
            PyList_SET_ITEM0(tmp_assign_source_2, 18, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[111];
            PyList_SET_ITEM0(tmp_assign_source_2, 19, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[112];
            PyList_SET_ITEM0(tmp_assign_source_2, 20, tmp_list_element_1);
            tmp_left_value_5 = mod_consts[89];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_5 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_5, tmp_right_value_5);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 21, tmp_list_element_1);
            tmp_left_value_6 = mod_consts[106];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_6 = var_hidden;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_6, tmp_right_value_6);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_2, 22, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[51];
            PyList_SET_ITEM0(tmp_assign_source_2, 23, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[91];
            PyList_SET_ITEM0(tmp_assign_source_2, 24, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[52];
            PyList_SET_ITEM0(tmp_assign_source_2, 25, tmp_list_element_1);
        }
        assert(var_arg_list == NULL);
        var_arg_list = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_e474fc2f4d830ee101f37c542592b1e3)) {
        Py_XDECREF(cache_frame_e474fc2f4d830ee101f37c542592b1e3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e474fc2f4d830ee101f37c542592b1e3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e474fc2f4d830ee101f37c542592b1e3 = MAKE_FUNCTION_FRAME(codeobj_e474fc2f4d830ee101f37c542592b1e3, module_slycot$analysis, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e474fc2f4d830ee101f37c542592b1e3->m_type_description == NULL);
    frame_e474fc2f4d830ee101f37c542592b1e3 = cache_frame_e474fc2f4d830ee101f37c542592b1e3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e474fc2f4d830ee101f37c542592b1e3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e474fc2f4d830ee101f37c542592b1e3) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_ldwork);
        tmp_compexpr_left_1 = par_ldwork;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_left_value_7;
        PyObject *tmp_left_value_8;
        PyObject *tmp_right_value_7;
        PyObject *tmp_left_value_9;
        PyObject *tmp_left_value_10;
        PyObject *tmp_left_value_11;
        PyObject *tmp_right_value_8;
        PyObject *tmp_right_value_9;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_right_value_10;
        PyObject *tmp_right_value_11;
        PyObject *tmp_left_value_12;
        PyObject *tmp_left_value_13;
        PyObject *tmp_right_value_12;
        PyObject *tmp_left_value_14;
        PyObject *tmp_right_value_13;
        PyObject *tmp_right_value_14;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_1 != NULL);
        tmp_args_element_value_1 = mod_consts[61];
        CHECK_OBJECT(par_n);
        tmp_left_value_8 = par_n;
        tmp_left_value_11 = mod_consts[92];
        CHECK_OBJECT(par_n);
        tmp_right_value_8 = par_n;
        tmp_left_value_10 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_11, tmp_right_value_8);
        if (tmp_left_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1286;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(par_n);
        tmp_args_element_value_3 = par_n;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_3 != NULL);
        CHECK_OBJECT(par_m);
        tmp_args_element_value_5 = par_m;
        CHECK_OBJECT(par_p);
        tmp_args_element_value_6 = par_p;
        frame_e474fc2f4d830ee101f37c542592b1e3->m_frame.f_lineno = 1286;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_10);

            exception_lineno = 1286;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e474fc2f4d830ee101f37c542592b1e3->m_frame.f_lineno = 1286;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_right_value_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_right_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_10);

            exception_lineno = 1286;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_10, tmp_right_value_9);
        Py_DECREF(tmp_left_value_10);
        Py_DECREF(tmp_right_value_9);
        if (tmp_left_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1286;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_10 = mod_consts[93];
        tmp_right_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_9, tmp_right_value_10);
        Py_DECREF(tmp_left_value_9);
        if (tmp_right_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1286;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_8, tmp_right_value_7);
        Py_DECREF(tmp_right_value_7);
        if (tmp_left_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1286;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_left_value_13 = par_n;
        CHECK_OBJECT(par_n);
        tmp_left_value_14 = par_n;
        tmp_right_value_13 = mod_consts[61];
        tmp_right_value_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_14, tmp_right_value_13);
        if (tmp_right_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_7);

            exception_lineno = 1286;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_12 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_13, tmp_right_value_12);
        Py_DECREF(tmp_right_value_12);
        if (tmp_left_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_7);

            exception_lineno = 1286;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_14 = mod_consts[92];
        tmp_right_value_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_12, tmp_right_value_14);
        Py_DECREF(tmp_left_value_12);
        if (tmp_right_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_7);

            exception_lineno = 1286;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_7, tmp_right_value_11);
        Py_DECREF(tmp_left_value_7);
        Py_DECREF(tmp_right_value_11);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1286;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e474fc2f4d830ee101f37c542592b1e3->m_frame.f_lineno = 1286;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1286;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ldwork;
            assert(old != NULL);
            par_ldwork = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_nr);
        tmp_compexpr_left_2 = par_nr;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[41];
        assert(var_ordsel == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_ordsel = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[76];
        {
            PyObject *old = par_nr;
            assert(old != NULL);
            par_nr = tmp_assign_source_5;
            Py_INCREF(par_nr);
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[94];
        assert(var_ordsel == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_ordsel = tmp_assign_source_6;
    }
    branch_end_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(par_alpha);
        tmp_compexpr_left_3 = par_alpha;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = PyDict_Copy(mod_consts[118]);
        CHECK_OBJECT(par_dico);
        tmp_subscript_value_1 = par_dico;
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1293;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_alpha;
            assert(old != NULL);
            par_alpha = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1294;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[122]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1294;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dico);
        tmp_args_element_value_7 = par_dico;
        CHECK_OBJECT(par_job);
        tmp_args_element_value_8 = par_job;
        CHECK_OBJECT(par_equil);
        tmp_args_element_value_9 = par_equil;
        CHECK_OBJECT(var_ordsel);
        tmp_args_element_value_10 = var_ordsel;
        if (par_n == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1295;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_11 = par_n;
        CHECK_OBJECT(par_m);
        tmp_args_element_value_12 = par_m;
        CHECK_OBJECT(par_p);
        tmp_args_element_value_13 = par_p;
        CHECK_OBJECT(par_nr);
        tmp_args_element_value_14 = par_nr;
        CHECK_OBJECT(par_alpha);
        tmp_args_element_value_15 = par_alpha;
        CHECK_OBJECT(par_A);
        tmp_args_element_value_16 = par_A;
        CHECK_OBJECT(par_B);
        tmp_args_element_value_17 = par_B;
        CHECK_OBJECT(par_C);
        tmp_args_element_value_18 = par_C;
        CHECK_OBJECT(par_D);
        tmp_args_element_value_19 = par_D;
        CHECK_OBJECT(par_tol1);
        tmp_args_element_value_20 = par_tol1;
        CHECK_OBJECT(par_tol2);
        tmp_args_element_value_21 = par_tol2;
        CHECK_OBJECT(par_ldwork);
        tmp_args_element_value_22 = par_ldwork;
        frame_e474fc2f4d830ee101f37c542592b1e3->m_frame.f_lineno = 1294;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS16(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1294;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_out);
        tmp_expression_value_3 = var_out;
        tmp_subscript_value_2 = mod_consts[96];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1296;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1296;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_1, 0, 7);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 1296;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_2, 1, 7);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 1296;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_3, 2, 7);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 1296;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_4, 3, 7);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 1296;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_5, 4, 7);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 1296;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_6, 5, 7);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 1296;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_6 == NULL);
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_7, 6, 7);
        if (tmp_assign_source_16 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 1296;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_7 == NULL);
        tmp_tuple_unpack_1__element_7 = tmp_assign_source_16;
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

                    type_description_1 = "oooooooooooooooooooooo";
                    exception_lineno = 1296;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[108];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 1296;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_1;
        assert(var_Nr == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_Nr = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_A;
            assert(old != NULL);
            par_A = tmp_assign_source_18;
            Py_INCREF(par_A);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_B;
            assert(old != NULL);
            par_B = tmp_assign_source_19;
            Py_INCREF(par_B);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = par_C;
            assert(old != NULL);
            par_C = tmp_assign_source_20;
            Py_INCREF(par_C);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_5;
        {
            PyObject *old = par_D;
            assert(old != NULL);
            par_D = tmp_assign_source_21;
            Py_INCREF(par_D);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_6;
        assert(var_Ns == NULL);
        Py_INCREF(tmp_assign_source_22);
        var_Ns = tmp_assign_source_22;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
        tmp_assign_source_23 = tmp_tuple_unpack_1__element_7;
        assert(var_hsv == NULL);
        Py_INCREF(tmp_assign_source_23);
        var_hsv = tmp_assign_source_23;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_26;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1297;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_out);
        tmp_expression_value_4 = var_out;
        tmp_subscript_value_3 = mod_consts[98];
        tmp_args_element_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1297;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arg_list);
        tmp_args_element_value_24 = var_arg_list;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 1297;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[64]);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 1297;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (locals_slycot$analysis$$$function__11_ab09nd == NULL) locals_slycot$analysis$$$function__11_ab09nd = PyDict_New();
        tmp_args_element_value_26 = locals_slycot$analysis$$$function__11_ab09nd;
        Py_INCREF(tmp_args_element_value_26);
        if (par_dico != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_dico);
            value = par_dico;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[79], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[79]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_job != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_job);
            value = par_job;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[80], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[80]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_equil != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_equil);
            value = par_equil;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[81], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[81]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_n != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_n);
            value = par_n;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[40], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[40]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_m != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_m);
            value = par_m;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[5], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[5]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_p != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_p);
            value = par_p;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[73], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[73]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_A != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_A);
            value = par_A;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[41], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[41]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_B != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_B);
            value = par_B;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[43], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[43]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_C != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_C);
            value = par_C;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[45], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[45]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_D != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_D);
            value = par_D;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[47], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[47]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_alpha != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_alpha);
            value = par_alpha;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[23], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[23]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_nr != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_nr);
            value = par_nr;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[83], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[83]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_tol1 != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_tol1);
            value = par_tol1;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[111], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[111]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_tol2 != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_tol2);
            value = par_tol2;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[112], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[112]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_ldwork != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_ldwork);
            value = par_ldwork;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[51], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[51]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_hidden != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_hidden);
            value = var_hidden;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[55], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[55]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_arg_list != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_arg_list);
            value = var_arg_list;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[56], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[56]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_ordsel != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_ordsel);
            value = var_ordsel;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[82], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[82]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_out != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_out);
            value = var_out;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[57], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[57]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_Nr != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_Nr);
            value = var_Nr;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[99], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[99]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_Ns != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_Ns);
            value = var_Ns;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[120], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[120]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_hsv != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_hsv);
            value = var_hsv;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_26, (Nuitka_StringObject *)mod_consts[87], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_26, mod_consts[87]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        frame_e474fc2f4d830ee101f37c542592b1e3->m_frame.f_lineno = 1297;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_25);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1297;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_Nr);
        tmp_tuple_element_1 = var_Nr;
        tmp_return_value = PyTuple_New(7);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_stop_value_1;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_stop_value_3;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_tuple_element_4;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_A);
            tmp_expression_value_6 = par_A;
            CHECK_OBJECT(var_Nr);
            tmp_stop_value_1 = var_Nr;
            tmp_tuple_element_2 = MAKE_SLICEOBJ1(tmp_stop_value_1);
            assert(!(tmp_tuple_element_2 == NULL));
            tmp_subscript_value_4 = PyTuple_New(2);
            {
                PyObject *tmp_stop_value_2;
                PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_2);
                CHECK_OBJECT(var_Nr);
                tmp_stop_value_2 = var_Nr;
                tmp_tuple_element_2 = MAKE_SLICEOBJ1(tmp_stop_value_2);
                assert(!(tmp_tuple_element_2 == NULL));
                PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_2);
            }
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_4);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1298;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_B);
            tmp_expression_value_7 = par_B;
            CHECK_OBJECT(var_Nr);
            tmp_stop_value_3 = var_Nr;
            tmp_tuple_element_3 = MAKE_SLICEOBJ1(tmp_stop_value_3);
            assert(!(tmp_tuple_element_3 == NULL));
            tmp_subscript_value_5 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_subscript_value_5, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[100];
            PyTuple_SET_ITEM0(tmp_subscript_value_5, 1, tmp_tuple_element_3);
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_5);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1298;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_C);
            tmp_expression_value_8 = par_C;
            tmp_tuple_element_4 = mod_consts[100];
            tmp_subscript_value_6 = PyTuple_New(2);
            {
                PyObject *tmp_stop_value_4;
                PyTuple_SET_ITEM0(tmp_subscript_value_6, 0, tmp_tuple_element_4);
                CHECK_OBJECT(var_Nr);
                tmp_stop_value_4 = var_Nr;
                tmp_tuple_element_4 = MAKE_SLICEOBJ1(tmp_stop_value_4);
                assert(!(tmp_tuple_element_4 == NULL));
                PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_4);
            }
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_6);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1298;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_D);
            tmp_tuple_element_1 = par_D;
            PyTuple_SET_ITEM0(tmp_return_value, 4, tmp_tuple_element_1);
            CHECK_OBJECT(var_Ns);
            tmp_tuple_element_1 = var_Ns;
            PyTuple_SET_ITEM0(tmp_return_value, 5, tmp_tuple_element_1);
            CHECK_OBJECT(var_hsv);
            tmp_tuple_element_1 = var_hsv;
            PyTuple_SET_ITEM0(tmp_return_value, 6, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e474fc2f4d830ee101f37c542592b1e3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e474fc2f4d830ee101f37c542592b1e3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e474fc2f4d830ee101f37c542592b1e3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e474fc2f4d830ee101f37c542592b1e3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e474fc2f4d830ee101f37c542592b1e3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e474fc2f4d830ee101f37c542592b1e3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e474fc2f4d830ee101f37c542592b1e3,
        type_description_1,
        par_dico,
        par_job,
        par_equil,
        par_n,
        par_m,
        par_p,
        par_A,
        par_B,
        par_C,
        par_D,
        par_alpha,
        par_nr,
        par_tol1,
        par_tol2,
        par_ldwork,
        var_hidden,
        var_arg_list,
        var_ordsel,
        var_out,
        var_Nr,
        var_Ns,
        var_hsv
    );


    // Release cached frame if used for exception.
    if (frame_e474fc2f4d830ee101f37c542592b1e3 == cache_frame_e474fc2f4d830ee101f37c542592b1e3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e474fc2f4d830ee101f37c542592b1e3);
        cache_frame_e474fc2f4d830ee101f37c542592b1e3 = NULL;
    }

    assertFrameObject(frame_e474fc2f4d830ee101f37c542592b1e3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    par_A = NULL;
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    par_B = NULL;
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    par_C = NULL;
    CHECK_OBJECT(par_D);
    Py_DECREF(par_D);
    par_D = NULL;
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);
    par_alpha = NULL;
    CHECK_OBJECT(par_nr);
    Py_DECREF(par_nr);
    par_nr = NULL;
    CHECK_OBJECT(par_ldwork);
    Py_DECREF(par_ldwork);
    par_ldwork = NULL;
    CHECK_OBJECT(var_hidden);
    Py_DECREF(var_hidden);
    var_hidden = NULL;
    CHECK_OBJECT(var_arg_list);
    Py_DECREF(var_arg_list);
    var_arg_list = NULL;
    CHECK_OBJECT(var_ordsel);
    Py_DECREF(var_ordsel);
    var_ordsel = NULL;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
    CHECK_OBJECT(var_Nr);
    Py_DECREF(var_Nr);
    var_Nr = NULL;
    CHECK_OBJECT(var_Ns);
    Py_DECREF(var_Ns);
    var_Ns = NULL;
    CHECK_OBJECT(var_hsv);
    Py_DECREF(var_hsv);
    var_hsv = NULL;
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

    Py_XDECREF(par_A);
    par_A = NULL;
    Py_XDECREF(par_B);
    par_B = NULL;
    Py_XDECREF(par_C);
    par_C = NULL;
    Py_XDECREF(par_D);
    par_D = NULL;
    Py_XDECREF(par_alpha);
    par_alpha = NULL;
    Py_XDECREF(par_nr);
    par_nr = NULL;
    Py_XDECREF(par_ldwork);
    par_ldwork = NULL;
    Py_XDECREF(var_hidden);
    var_hidden = NULL;
    Py_XDECREF(var_arg_list);
    var_arg_list = NULL;
    Py_XDECREF(var_ordsel);
    var_ordsel = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_Nr);
    var_Nr = NULL;
    Py_XDECREF(var_Ns);
    var_Ns = NULL;
    Py_XDECREF(var_hsv);
    var_hsv = NULL;
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
    Py_XDECREF(locals_slycot$analysis$$$function__11_ab09nd);

    CHECK_OBJECT(par_dico);
    Py_DECREF(par_dico);
    CHECK_OBJECT(par_job);
    Py_DECREF(par_job);
    CHECK_OBJECT(par_equil);
    Py_DECREF(par_equil);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_tol1);
    Py_DECREF(par_tol1);
    CHECK_OBJECT(par_tol2);
    Py_DECREF(par_tol2);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_slycot$analysis$$$function__11_ab09nd);

    CHECK_OBJECT(par_dico);
    Py_DECREF(par_dico);
    CHECK_OBJECT(par_job);
    Py_DECREF(par_job);
    CHECK_OBJECT(par_equil);
    Py_DECREF(par_equil);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_tol1);
    Py_DECREF(par_tol1);
    CHECK_OBJECT(par_tol2);
    Py_DECREF(par_tol2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_slycot$analysis$$$function__12_ab13bd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dico = python_pars[0];
    PyObject *par_jobn = python_pars[1];
    PyObject *par_n = python_pars[2];
    PyObject *par_m = python_pars[3];
    PyObject *par_p = python_pars[4];
    PyObject *par_A = python_pars[5];
    PyObject *par_B = python_pars[6];
    PyObject *par_C = python_pars[7];
    PyObject *par_D = python_pars[8];
    PyObject *par_tol = python_pars[9];
    PyObject *var_out = NULL;
    PyObject *var_hidden = NULL;
    PyObject *var_arg_list = NULL;
    struct Nuitka_FrameObject *frame_d5e13a0da9019e3028f5e7752d1e1811;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *locals_slycot$analysis$$$function__12_ab13bd = NULL;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d5e13a0da9019e3028f5e7752d1e1811 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d5e13a0da9019e3028f5e7752d1e1811)) {
        Py_XDECREF(cache_frame_d5e13a0da9019e3028f5e7752d1e1811);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d5e13a0da9019e3028f5e7752d1e1811 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d5e13a0da9019e3028f5e7752d1e1811 = MAKE_FUNCTION_FRAME(codeobj_d5e13a0da9019e3028f5e7752d1e1811, module_slycot$analysis, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d5e13a0da9019e3028f5e7752d1e1811->m_type_description == NULL);
    frame_d5e13a0da9019e3028f5e7752d1e1811 = cache_frame_d5e13a0da9019e3028f5e7752d1e1811;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d5e13a0da9019e3028f5e7752d1e1811);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d5e13a0da9019e3028f5e7752d1e1811) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
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
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1379;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dico);
        tmp_args_element_value_1 = par_dico;
        CHECK_OBJECT(par_jobn);
        tmp_args_element_value_2 = par_jobn;
        CHECK_OBJECT(par_n);
        tmp_args_element_value_3 = par_n;
        CHECK_OBJECT(par_m);
        tmp_args_element_value_4 = par_m;
        CHECK_OBJECT(par_p);
        tmp_args_element_value_5 = par_p;
        CHECK_OBJECT(par_A);
        tmp_args_element_value_6 = par_A;
        CHECK_OBJECT(par_B);
        tmp_args_element_value_7 = par_B;
        CHECK_OBJECT(par_C);
        tmp_args_element_value_8 = par_C;
        CHECK_OBJECT(par_D);
        tmp_args_element_value_9 = par_D;
        CHECK_OBJECT(par_tol);
        tmp_args_element_value_10 = par_tol;
        frame_d5e13a0da9019e3028f5e7752d1e1811->m_frame.f_lineno = 1379;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS10(
                tmp_called_instance_1,
                mod_consts[124],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1379;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[17];
        assert(var_hidden == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_hidden = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[79];
        tmp_assign_source_3 = PyTuple_New(19);
        {
            PyObject *tmp_left_value_1;
            PyObject *tmp_right_value_1;
            PyObject *tmp_left_value_2;
            PyObject *tmp_right_value_2;
            PyObject *tmp_left_value_3;
            PyObject *tmp_right_value_3;
            PyObject *tmp_left_value_4;
            PyObject *tmp_right_value_4;
            PyObject *tmp_left_value_5;
            PyObject *tmp_right_value_5;
            PyObject *tmp_left_value_6;
            PyObject *tmp_right_value_6;
            PyObject *tmp_left_value_7;
            PyObject *tmp_right_value_7;
            PyTuple_SET_ITEM0(tmp_assign_source_3, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[125];
            PyTuple_SET_ITEM0(tmp_assign_source_3, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[40];
            PyTuple_SET_ITEM0(tmp_assign_source_3, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_assign_source_3, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[73];
            PyTuple_SET_ITEM0(tmp_assign_source_3, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[41];
            PyTuple_SET_ITEM0(tmp_assign_source_3, 5, tmp_tuple_element_1);
            tmp_left_value_1 = mod_consts[84];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_1 = var_hidden;
            tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_1, tmp_right_value_1);
            assert(!(tmp_tuple_element_1 == NULL));
            PyTuple_SET_ITEM(tmp_assign_source_3, 6, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_assign_source_3, 7, tmp_tuple_element_1);
            tmp_left_value_2 = mod_consts[85];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_2 = var_hidden;
            tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_2, tmp_right_value_2);
            assert(!(tmp_tuple_element_1 == NULL));
            PyTuple_SET_ITEM(tmp_assign_source_3, 8, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[45];
            PyTuple_SET_ITEM0(tmp_assign_source_3, 9, tmp_tuple_element_1);
            tmp_left_value_3 = mod_consts[86];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_3 = var_hidden;
            tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_3, tmp_right_value_3);
            assert(!(tmp_tuple_element_1 == NULL));
            PyTuple_SET_ITEM(tmp_assign_source_3, 10, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[47];
            PyTuple_SET_ITEM0(tmp_assign_source_3, 11, tmp_tuple_element_1);
            tmp_left_value_4 = mod_consts[110];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_4 = var_hidden;
            tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_4, tmp_right_value_4);
            assert(!(tmp_tuple_element_1 == NULL));
            PyTuple_SET_ITEM(tmp_assign_source_3, 12, tmp_tuple_element_1);
            tmp_left_value_5 = mod_consts[126];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_5 = var_hidden;
            tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_5, tmp_right_value_5);
            assert(!(tmp_tuple_element_1 == NULL));
            PyTuple_SET_ITEM(tmp_assign_source_3, 13, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[88];
            PyTuple_SET_ITEM0(tmp_assign_source_3, 14, tmp_tuple_element_1);
            tmp_left_value_6 = mod_consts[106];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_6 = var_hidden;
            tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_6, tmp_right_value_6);
            assert(!(tmp_tuple_element_1 == NULL));
            PyTuple_SET_ITEM(tmp_assign_source_3, 15, tmp_tuple_element_1);
            tmp_left_value_7 = mod_consts[51];
            CHECK_OBJECT(var_hidden);
            tmp_right_value_7 = var_hidden;
            tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_7, tmp_right_value_7);
            assert(!(tmp_tuple_element_1 == NULL));
            PyTuple_SET_ITEM(tmp_assign_source_3, 16, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[91];
            PyTuple_SET_ITEM0(tmp_assign_source_3, 17, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[52];
            PyTuple_SET_ITEM0(tmp_assign_source_3, 18, tmp_tuple_element_1);
        }
        assert(var_arg_list == NULL);
        var_arg_list = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1386;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_out);
        tmp_expression_value_1 = var_out;
        tmp_subscript_value_1 = mod_consts[98];
        tmp_args_element_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1386;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arg_list);
        tmp_args_element_value_12 = var_arg_list;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 1386;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[64]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 1386;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (locals_slycot$analysis$$$function__12_ab13bd == NULL) locals_slycot$analysis$$$function__12_ab13bd = PyDict_New();
        tmp_args_element_value_14 = locals_slycot$analysis$$$function__12_ab13bd;
        Py_INCREF(tmp_args_element_value_14);
        if (par_dico != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_dico);
            value = par_dico;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_14, (Nuitka_StringObject *)mod_consts[79], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_14, mod_consts[79]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_jobn != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_jobn);
            value = par_jobn;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_14, (Nuitka_StringObject *)mod_consts[125], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_14, mod_consts[125]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_n != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_n);
            value = par_n;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_14, (Nuitka_StringObject *)mod_consts[40], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_14, mod_consts[40]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_m != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_m);
            value = par_m;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_14, (Nuitka_StringObject *)mod_consts[5], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_14, mod_consts[5]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_p != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_p);
            value = par_p;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_14, (Nuitka_StringObject *)mod_consts[73], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_14, mod_consts[73]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_A != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_A);
            value = par_A;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_14, (Nuitka_StringObject *)mod_consts[41], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_14, mod_consts[41]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_B != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_B);
            value = par_B;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_14, (Nuitka_StringObject *)mod_consts[43], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_14, mod_consts[43]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_C != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_C);
            value = par_C;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_14, (Nuitka_StringObject *)mod_consts[45], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_14, mod_consts[45]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_D != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_D);
            value = par_D;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_14, (Nuitka_StringObject *)mod_consts[47], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_14, mod_consts[47]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_tol != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_tol);
            value = par_tol;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_14, (Nuitka_StringObject *)mod_consts[88], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_14, mod_consts[88]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_out != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_out);
            value = var_out;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_14, (Nuitka_StringObject *)mod_consts[57], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_14, mod_consts[57]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_hidden != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_hidden);
            value = var_hidden;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_14, (Nuitka_StringObject *)mod_consts[55], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_14, mod_consts[55]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_arg_list != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_arg_list);
            value = var_arg_list;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_14, (Nuitka_StringObject *)mod_consts[56], value);
        } else {
            int res = PyDict_DelItem(tmp_args_element_value_14, mod_consts[56]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        frame_d5e13a0da9019e3028f5e7752d1e1811->m_frame.f_lineno = 1386;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1386;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_out);
        tmp_expression_value_3 = var_out;
        tmp_subscript_value_2 = mod_consts[76];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 0);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1387;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d5e13a0da9019e3028f5e7752d1e1811);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d5e13a0da9019e3028f5e7752d1e1811);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d5e13a0da9019e3028f5e7752d1e1811);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d5e13a0da9019e3028f5e7752d1e1811, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d5e13a0da9019e3028f5e7752d1e1811->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d5e13a0da9019e3028f5e7752d1e1811, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d5e13a0da9019e3028f5e7752d1e1811,
        type_description_1,
        par_dico,
        par_jobn,
        par_n,
        par_m,
        par_p,
        par_A,
        par_B,
        par_C,
        par_D,
        par_tol,
        var_out,
        var_hidden,
        var_arg_list
    );


    // Release cached frame if used for exception.
    if (frame_d5e13a0da9019e3028f5e7752d1e1811 == cache_frame_d5e13a0da9019e3028f5e7752d1e1811) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d5e13a0da9019e3028f5e7752d1e1811);
        cache_frame_d5e13a0da9019e3028f5e7752d1e1811 = NULL;
    }

    assertFrameObject(frame_d5e13a0da9019e3028f5e7752d1e1811);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
    CHECK_OBJECT(var_hidden);
    Py_DECREF(var_hidden);
    var_hidden = NULL;
    CHECK_OBJECT(var_arg_list);
    Py_DECREF(var_arg_list);
    var_arg_list = NULL;
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

    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_hidden);
    var_hidden = NULL;
    Py_XDECREF(var_arg_list);
    var_arg_list = NULL;
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
    Py_XDECREF(locals_slycot$analysis$$$function__12_ab13bd);

    CHECK_OBJECT(par_dico);
    Py_DECREF(par_dico);
    CHECK_OBJECT(par_jobn);
    Py_DECREF(par_jobn);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    CHECK_OBJECT(par_D);
    Py_DECREF(par_D);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_slycot$analysis$$$function__12_ab13bd);

    CHECK_OBJECT(par_dico);
    Py_DECREF(par_dico);
    CHECK_OBJECT(par_jobn);
    Py_DECREF(par_jobn);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    CHECK_OBJECT(par_D);
    Py_DECREF(par_D);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_slycot$analysis$$$function__13_ab13dd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dico = python_pars[0];
    PyObject *par_jobe = python_pars[1];
    PyObject *par_equil = python_pars[2];
    PyObject *par_jobd = python_pars[3];
    PyObject *par_n = python_pars[4];
    PyObject *par_m = python_pars[5];
    PyObject *par_p = python_pars[6];
    PyObject *par_A = python_pars[7];
    PyObject *par_E = python_pars[8];
    PyObject *par_B = python_pars[9];
    PyObject *par_C = python_pars[10];
    PyObject *par_D = python_pars[11];
    PyObject *par_tol = python_pars[12];
    PyObject *var_arg_list = NULL;
    PyObject *var_out = NULL;
    PyObject *var_fpeak = NULL;
    PyObject *var_gpeak = NULL;
    struct Nuitka_FrameObject *frame_2f6333c5e53c9977fd4e648f880807b3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2f6333c5e53c9977fd4e648f880807b3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[128];
        assert(var_arg_list == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_arg_list = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_2f6333c5e53c9977fd4e648f880807b3)) {
        Py_XDECREF(cache_frame_2f6333c5e53c9977fd4e648f880807b3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f6333c5e53c9977fd4e648f880807b3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f6333c5e53c9977fd4e648f880807b3 = MAKE_FUNCTION_FRAME(codeobj_2f6333c5e53c9977fd4e648f880807b3, module_slycot$analysis, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2f6333c5e53c9977fd4e648f880807b3->m_type_description == NULL);
    frame_2f6333c5e53c9977fd4e648f880807b3 = cache_frame_2f6333c5e53c9977fd4e648f880807b3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2f6333c5e53c9977fd4e648f880807b3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2f6333c5e53c9977fd4e648f880807b3) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_and_left_value_1_object_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_and_right_value_1_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_dico);
        tmp_compexpr_left_1 = par_dico;
        tmp_compexpr_right_1 = mod_consts[45];
        tmp_tmp_and_left_value_1_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_and_left_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1485;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_and_left_value_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_left_value_1_object_1);

            exception_lineno = 1485;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_left_value_1_object_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1485;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_dico);
        tmp_compexpr_left_2 = par_dico;
        tmp_compexpr_right_2 = mod_consts[47];
        tmp_tmp_and_right_value_1_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_and_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1485;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_and_right_value_1_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_1_object_1);

            exception_lineno = 1485;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_right_value_1_object_1);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1486;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        frame_2f6333c5e53c9977fd4e648f880807b3->m_frame.f_lineno = 1486;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[130]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1486;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 1486;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooNoooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_and_left_value_2_object_1;
        int tmp_truth_name_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tmp_and_right_value_2_object_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(par_jobe);
        tmp_compexpr_left_3 = par_jobe;
        tmp_compexpr_right_3 = mod_consts[131];
        tmp_tmp_and_left_value_2_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_and_left_value_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1487;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_and_left_value_2_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_left_value_2_object_1);

            exception_lineno = 1487;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_left_value_2_object_1);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1487;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_jobe);
        tmp_compexpr_left_4 = par_jobe;
        tmp_compexpr_right_4 = mod_consts[132];
        tmp_tmp_and_right_value_2_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_tmp_and_right_value_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1487;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_and_right_value_2_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_2_object_1);

            exception_lineno = 1487;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_right_value_2_object_1);
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1488;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        frame_2f6333c5e53c9977fd4e648f880807b3->m_frame.f_lineno = 1488;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[133]);

        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1488;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 1488;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooNoooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_tmp_and_left_value_3_object_1;
        int tmp_truth_name_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_tmp_and_right_value_3_object_1;
        int tmp_truth_name_6;
        CHECK_OBJECT(par_equil);
        tmp_compexpr_left_5 = par_equil;
        tmp_compexpr_right_5 = mod_consts[134];
        tmp_tmp_and_left_value_3_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_tmp_and_left_value_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1489;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_tmp_and_left_value_3_object_1);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_left_value_3_object_1);

            exception_lineno = 1489;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_left_value_3_object_1);
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1489;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(par_equil);
        tmp_compexpr_left_6 = par_equil;
        tmp_compexpr_right_6 = mod_consts[9];
        tmp_tmp_and_right_value_3_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        if (tmp_tmp_and_right_value_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1489;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_tmp_and_right_value_3_object_1);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_3_object_1);

            exception_lineno = 1489;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_right_value_3_object_1);
        tmp_condition_result_3 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_3 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1490;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        frame_2f6333c5e53c9977fd4e648f880807b3->m_frame.f_lineno = 1490;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[135]);

        if (tmp_raise_type_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1490;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_3;
        exception_lineno = 1490;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooNoooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_tmp_and_left_value_4_object_1;
        int tmp_truth_name_7;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_tmp_and_right_value_4_object_1;
        int tmp_truth_name_8;
        CHECK_OBJECT(par_jobd);
        tmp_compexpr_left_7 = par_jobd;
        tmp_compexpr_right_7 = mod_consts[47];
        tmp_tmp_and_left_value_4_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
        if (tmp_tmp_and_left_value_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_tmp_and_left_value_4_object_1);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_left_value_4_object_1);

            exception_lineno = 1491;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_left_value_4_object_1);
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT(par_jobd);
        tmp_compexpr_left_8 = par_jobd;
        tmp_compexpr_right_8 = mod_consts[136];
        tmp_tmp_and_right_value_4_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        if (tmp_tmp_and_right_value_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_tmp_and_right_value_4_object_1);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_4_object_1);

            exception_lineno = 1491;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_right_value_4_object_1);
        tmp_condition_result_4 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_4 = tmp_and_left_value_4;
        and_end_4:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1492;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        frame_2f6333c5e53c9977fd4e648f880807b3->m_frame.f_lineno = 1492;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[137]);

        if (tmp_raise_type_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1492;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_4;
        exception_lineno = 1492;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooNoooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
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
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1493;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dico);
        tmp_args_element_value_1 = par_dico;
        CHECK_OBJECT(par_jobe);
        tmp_args_element_value_2 = par_jobe;
        CHECK_OBJECT(par_equil);
        tmp_args_element_value_3 = par_equil;
        CHECK_OBJECT(par_jobd);
        tmp_args_element_value_4 = par_jobd;
        CHECK_OBJECT(par_n);
        tmp_args_element_value_5 = par_n;
        CHECK_OBJECT(par_m);
        tmp_args_element_value_6 = par_m;
        CHECK_OBJECT(par_p);
        tmp_args_element_value_7 = par_p;
        tmp_args_element_value_8 = LIST_COPY(mod_consts[139]);
        CHECK_OBJECT(par_A);
        tmp_args_element_value_9 = par_A;
        CHECK_OBJECT(par_E);
        tmp_args_element_value_10 = par_E;
        CHECK_OBJECT(par_B);
        tmp_args_element_value_11 = par_B;
        CHECK_OBJECT(par_C);
        tmp_args_element_value_12 = par_C;
        CHECK_OBJECT(par_D);
        tmp_args_element_value_13 = par_D;
        CHECK_OBJECT(par_tol);
        tmp_args_element_value_14 = par_tol;
        frame_2f6333c5e53c9977fd4e648f880807b3->m_frame.f_lineno = 1493;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS14(
                tmp_called_instance_1,
                mod_consts[138],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1493;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_2;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1495;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_out);
        tmp_expression_value_1 = var_out;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_args_element_value_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, -1);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1495;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arg_list);
        tmp_args_element_value_16 = var_arg_list;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 1495;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[64]);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 1495;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        frame_2f6333c5e53c9977fd4e648f880807b3->m_frame.f_lineno = 1495;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1495;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_3;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_tmp_condition_result_5_object_1;
        int tmp_truth_name_9;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_out);
        tmp_expression_value_4 = var_out;
        tmp_subscript_value_2 = mod_consts[76];
        tmp_expression_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 0);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1497;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[61];
        tmp_compexpr_left_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_3, 1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_compexpr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1497;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_9 = mod_consts[76];
        tmp_tmp_condition_result_5_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
        Py_DECREF(tmp_compexpr_left_9);
        if (tmp_tmp_condition_result_5_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1497;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_tmp_condition_result_5_object_1);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_5_object_1);

            exception_lineno = 1497;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_5_object_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_out);
        tmp_expression_value_6 = var_out;
        tmp_subscript_value_4 = mod_consts[76];
        tmp_expression_value_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_4, 0);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1497;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = mod_consts[76];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_5, 0);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1497;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_3 = mod_consts[140];
        Py_INCREF(tmp_assign_source_3);
        condexpr_end_1:;
        assert(var_fpeak == NULL);
        var_fpeak = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_tmp_condition_result_6_object_1;
        int tmp_truth_name_10;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(var_out);
        tmp_expression_value_8 = var_out;
        tmp_subscript_value_6 = mod_consts[61];
        tmp_expression_value_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_6, 1);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1498;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = mod_consts[61];
        tmp_compexpr_left_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_7, 1);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_compexpr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1498;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_10 = mod_consts[76];
        tmp_tmp_condition_result_6_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_10, tmp_compexpr_right_10);
        Py_DECREF(tmp_compexpr_left_10);
        if (tmp_tmp_condition_result_6_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1498;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_tmp_condition_result_6_object_1);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_6_object_1);

            exception_lineno = 1498;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_6_object_1);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(var_out);
        tmp_expression_value_10 = var_out;
        tmp_subscript_value_8 = mod_consts[61];
        tmp_expression_value_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_8, 1);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1498;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_9 = mod_consts[76];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_9, 0);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1498;
            type_description_1 = "oooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_4 = mod_consts[140];
        Py_INCREF(tmp_assign_source_4);
        condexpr_end_2:;
        assert(var_gpeak == NULL);
        var_gpeak = tmp_assign_source_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f6333c5e53c9977fd4e648f880807b3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f6333c5e53c9977fd4e648f880807b3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f6333c5e53c9977fd4e648f880807b3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f6333c5e53c9977fd4e648f880807b3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f6333c5e53c9977fd4e648f880807b3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f6333c5e53c9977fd4e648f880807b3,
        type_description_1,
        par_dico,
        par_jobe,
        par_equil,
        par_jobd,
        par_n,
        par_m,
        par_p,
        par_A,
        par_E,
        par_B,
        par_C,
        par_D,
        par_tol,
        NULL,
        var_arg_list,
        var_out,
        var_fpeak,
        var_gpeak
    );


    // Release cached frame if used for exception.
    if (frame_2f6333c5e53c9977fd4e648f880807b3 == cache_frame_2f6333c5e53c9977fd4e648f880807b3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2f6333c5e53c9977fd4e648f880807b3);
        cache_frame_2f6333c5e53c9977fd4e648f880807b3 = NULL;
    }

    assertFrameObject(frame_2f6333c5e53c9977fd4e648f880807b3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_gpeak);
        tmp_tuple_element_1 = var_gpeak;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_fpeak);
        tmp_tuple_element_1 = var_fpeak;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_arg_list);
    Py_DECREF(var_arg_list);
    var_arg_list = NULL;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
    CHECK_OBJECT(var_fpeak);
    Py_DECREF(var_fpeak);
    var_fpeak = NULL;
    CHECK_OBJECT(var_gpeak);
    Py_DECREF(var_gpeak);
    var_gpeak = NULL;
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

    Py_XDECREF(var_arg_list);
    var_arg_list = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_fpeak);
    var_fpeak = NULL;
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
    CHECK_OBJECT(par_dico);
    Py_DECREF(par_dico);
    CHECK_OBJECT(par_jobe);
    Py_DECREF(par_jobe);
    CHECK_OBJECT(par_equil);
    Py_DECREF(par_equil);
    CHECK_OBJECT(par_jobd);
    Py_DECREF(par_jobd);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_E);
    Py_DECREF(par_E);
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    CHECK_OBJECT(par_D);
    Py_DECREF(par_D);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dico);
    Py_DECREF(par_dico);
    CHECK_OBJECT(par_jobe);
    Py_DECREF(par_jobe);
    CHECK_OBJECT(par_equil);
    Py_DECREF(par_equil);
    CHECK_OBJECT(par_jobd);
    Py_DECREF(par_jobd);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_E);
    Py_DECREF(par_E);
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    CHECK_OBJECT(par_D);
    Py_DECREF(par_D);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_slycot$analysis$$$function__14_ab13ed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    PyObject *par_A = python_pars[1];
    PyObject *par_tol = python_pars[2];
    PyObject *var_arg_list = NULL;
    PyObject *var_out = NULL;
    struct Nuitka_FrameObject *frame_2280b17bbeaf03908740e2c663cf32c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2280b17bbeaf03908740e2c663cf32c8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY(mod_consts[142]);
        assert(var_arg_list == NULL);
        var_arg_list = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_2280b17bbeaf03908740e2c663cf32c8)) {
        Py_XDECREF(cache_frame_2280b17bbeaf03908740e2c663cf32c8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2280b17bbeaf03908740e2c663cf32c8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2280b17bbeaf03908740e2c663cf32c8 = MAKE_FUNCTION_FRAME(codeobj_2280b17bbeaf03908740e2c663cf32c8, module_slycot$analysis, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2280b17bbeaf03908740e2c663cf32c8->m_type_description == NULL);
    frame_2280b17bbeaf03908740e2c663cf32c8 = cache_frame_2280b17bbeaf03908740e2c663cf32c8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2280b17bbeaf03908740e2c663cf32c8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2280b17bbeaf03908740e2c663cf32c8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1558;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_value_1 = par_n;
        CHECK_OBJECT(par_A);
        tmp_args_element_value_2 = par_A;
        CHECK_OBJECT(par_tol);
        tmp_args_element_value_3 = par_tol;
        frame_2280b17bbeaf03908740e2c663cf32c8->m_frame.f_lineno = 1558;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[143],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1558;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1559;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_out);
        tmp_expression_value_1 = var_out;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, -1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1559;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arg_list);
        tmp_args_element_value_5 = var_arg_list;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 1559;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[64]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 1559;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        frame_2280b17bbeaf03908740e2c663cf32c8->m_frame.f_lineno = 1559;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1559;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_out);
        tmp_expression_value_3 = var_out;
        tmp_subscript_value_2 = mod_consts[15];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1560;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2280b17bbeaf03908740e2c663cf32c8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2280b17bbeaf03908740e2c663cf32c8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2280b17bbeaf03908740e2c663cf32c8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2280b17bbeaf03908740e2c663cf32c8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2280b17bbeaf03908740e2c663cf32c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2280b17bbeaf03908740e2c663cf32c8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2280b17bbeaf03908740e2c663cf32c8,
        type_description_1,
        par_n,
        par_A,
        par_tol,
        NULL,
        var_arg_list,
        var_out
    );


    // Release cached frame if used for exception.
    if (frame_2280b17bbeaf03908740e2c663cf32c8 == cache_frame_2280b17bbeaf03908740e2c663cf32c8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2280b17bbeaf03908740e2c663cf32c8);
        cache_frame_2280b17bbeaf03908740e2c663cf32c8 = NULL;
    }

    assertFrameObject(frame_2280b17bbeaf03908740e2c663cf32c8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_arg_list);
    Py_DECREF(var_arg_list);
    var_arg_list = NULL;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
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

    Py_XDECREF(var_arg_list);
    var_arg_list = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
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
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_slycot$analysis$$$function__15_ab13fd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    PyObject *par_A = python_pars[1];
    PyObject *par_tol = python_pars[2];
    PyObject *var_arg_list = NULL;
    PyObject *var_out = NULL;
    struct Nuitka_FrameObject *frame_1a19f61d6737b2cb561c486d73cb607d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1a19f61d6737b2cb561c486d73cb607d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY(mod_consts[145]);
        assert(var_arg_list == NULL);
        var_arg_list = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_1a19f61d6737b2cb561c486d73cb607d)) {
        Py_XDECREF(cache_frame_1a19f61d6737b2cb561c486d73cb607d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a19f61d6737b2cb561c486d73cb607d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a19f61d6737b2cb561c486d73cb607d = MAKE_FUNCTION_FRAME(codeobj_1a19f61d6737b2cb561c486d73cb607d, module_slycot$analysis, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1a19f61d6737b2cb561c486d73cb607d->m_type_description == NULL);
    frame_1a19f61d6737b2cb561c486d73cb607d = cache_frame_1a19f61d6737b2cb561c486d73cb607d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1a19f61d6737b2cb561c486d73cb607d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1a19f61d6737b2cb561c486d73cb607d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1627;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_value_1 = par_n;
        CHECK_OBJECT(par_A);
        tmp_args_element_value_2 = par_A;
        CHECK_OBJECT(par_tol);
        tmp_args_element_value_3 = par_tol;
        frame_1a19f61d6737b2cb561c486d73cb607d->m_frame.f_lineno = 1627;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[146],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1627;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1628;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_out);
        tmp_expression_value_1 = var_out;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, -1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1628;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arg_list);
        tmp_args_element_value_5 = var_arg_list;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 1628;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[64]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 1628;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        frame_1a19f61d6737b2cb561c486d73cb607d->m_frame.f_lineno = 1628;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1628;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_out);
        tmp_expression_value_3 = var_out;
        tmp_subscript_value_2 = mod_consts[76];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 0);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1629;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_out);
            tmp_expression_value_4 = var_out;
            tmp_subscript_value_3 = mod_consts[61];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_3, 1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1629;
                type_description_1 = "oooNoo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a19f61d6737b2cb561c486d73cb607d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a19f61d6737b2cb561c486d73cb607d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a19f61d6737b2cb561c486d73cb607d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a19f61d6737b2cb561c486d73cb607d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a19f61d6737b2cb561c486d73cb607d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a19f61d6737b2cb561c486d73cb607d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a19f61d6737b2cb561c486d73cb607d,
        type_description_1,
        par_n,
        par_A,
        par_tol,
        NULL,
        var_arg_list,
        var_out
    );


    // Release cached frame if used for exception.
    if (frame_1a19f61d6737b2cb561c486d73cb607d == cache_frame_1a19f61d6737b2cb561c486d73cb607d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1a19f61d6737b2cb561c486d73cb607d);
        cache_frame_1a19f61d6737b2cb561c486d73cb607d = NULL;
    }

    assertFrameObject(frame_1a19f61d6737b2cb561c486d73cb607d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_arg_list);
    Py_DECREF(var_arg_list);
    var_arg_list = NULL;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
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

    Py_XDECREF(var_arg_list);
    var_arg_list = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
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
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_slycot$analysis$$$function__16_ag08bd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_l = python_pars[0];
    PyObject *par_n = python_pars[1];
    PyObject *par_m = python_pars[2];
    PyObject *par_p = python_pars[3];
    PyObject *par_A = python_pars[4];
    PyObject *par_E = python_pars[5];
    PyObject *par_B = python_pars[6];
    PyObject *par_C = python_pars[7];
    PyObject *par_D = python_pars[8];
    PyObject *par_equil = python_pars[9];
    PyObject *par_tol = python_pars[10];
    PyObject *par_ldwork = python_pars[11];
    PyObject *var_arg_list = NULL;
    PyObject *var_ldw = NULL;
    PyObject *var_out = NULL;
    PyObject *var_Af = NULL;
    PyObject *var_Ef = NULL;
    PyObject *var_nfz = NULL;
    PyObject *var_nrank = NULL;
    PyObject *var_niz = NULL;
    PyObject *var_dinfz = NULL;
    PyObject *var_nkror = NULL;
    PyObject *var_ninfe = NULL;
    PyObject *var_nkrol = NULL;
    PyObject *var_infz = NULL;
    PyObject *var_kronr = NULL;
    PyObject *var_infe = NULL;
    PyObject *var_kronl = NULL;
    PyObject *var_info = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_10 = NULL;
    PyObject *tmp_tuple_unpack_1__element_11 = NULL;
    PyObject *tmp_tuple_unpack_1__element_12 = NULL;
    PyObject *tmp_tuple_unpack_1__element_13 = NULL;
    PyObject *tmp_tuple_unpack_1__element_14 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__element_8 = NULL;
    PyObject *tmp_tuple_unpack_1__element_9 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6d174432c81aa63c1d2d0d6fdfe34e2b;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6d174432c81aa63c1d2d0d6fdfe34e2b = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY(mod_consts[148]);
        assert(var_arg_list == NULL);
        var_arg_list = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_6d174432c81aa63c1d2d0d6fdfe34e2b)) {
        Py_XDECREF(cache_frame_6d174432c81aa63c1d2d0d6fdfe34e2b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6d174432c81aa63c1d2d0d6fdfe34e2b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6d174432c81aa63c1d2d0d6fdfe34e2b = MAKE_FUNCTION_FRAME(codeobj_6d174432c81aa63c1d2d0d6fdfe34e2b, module_slycot$analysis, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6d174432c81aa63c1d2d0d6fdfe34e2b->m_type_description == NULL);
    frame_6d174432c81aa63c1d2d0d6fdfe34e2b = cache_frame_6d174432c81aa63c1d2d0d6fdfe34e2b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6d174432c81aa63c1d2d0d6fdfe34e2b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6d174432c81aa63c1d2d0d6fdfe34e2b) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_ldwork);
        tmp_compexpr_left_1 = par_ldwork;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_2;
        PyObject *tmp_right_value_3;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_4;
        PyObject *tmp_right_value_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_left_value_6;
        PyObject *tmp_right_value_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_left_value_7;
        PyObject *tmp_right_value_7;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_left_value_8;
        PyObject *tmp_right_value_8;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_l);
        tmp_left_value_3 = par_l;
        CHECK_OBJECT(par_p);
        tmp_right_value_1 = par_p;
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_3, tmp_right_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1726;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_m);
        tmp_left_value_4 = par_m;
        CHECK_OBJECT(par_n);
        tmp_right_value_2 = par_n;
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_4, tmp_right_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 1726;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6d174432c81aa63c1d2d0d6fdfe34e2b->m_frame.f_lineno = 1726;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_left_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1726;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_m);
        tmp_left_value_5 = par_m;
        CHECK_OBJECT(par_n);
        tmp_right_value_4 = par_n;
        tmp_right_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_5, tmp_right_value_4);
        if (tmp_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 1726;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_3);
        Py_DECREF(tmp_left_value_2);
        Py_DECREF(tmp_right_value_3);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1726;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_2 != NULL);
        tmp_args_element_value_3 = mod_consts[61];
        tmp_left_value_6 = mod_consts[93];
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_3 != NULL);
        CHECK_OBJECT(par_l);
        tmp_left_value_7 = par_l;
        CHECK_OBJECT(par_p);
        tmp_right_value_7 = par_p;
        tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_7, tmp_right_value_7);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 1726;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_m);
        tmp_left_value_8 = par_m;
        CHECK_OBJECT(par_n);
        tmp_right_value_8 = par_n;
        tmp_args_element_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_8, tmp_right_value_8);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 1726;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6d174432c81aa63c1d2d0d6fdfe34e2b->m_frame.f_lineno = 1726;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_right_value_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_right_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 1726;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_6, tmp_right_value_6);
        Py_DECREF(tmp_right_value_6);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 1726;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6d174432c81aa63c1d2d0d6fdfe34e2b->m_frame.f_lineno = 1726;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_right_value_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_right_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 1726;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_5);
        Py_DECREF(tmp_left_value_1);
        Py_DECREF(tmp_right_value_5);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1726;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ldw == NULL);
        var_ldw = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_equil);
        tmp_compexpr_left_2 = par_equil;
        tmp_compexpr_right_2 = mod_consts[134];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1727;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 1727;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_left_value_9;
        PyObject *tmp_right_value_9;
        PyObject *tmp_left_value_10;
        PyObject *tmp_right_value_10;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[1]);
        assert(tmp_called_value_4 != NULL);
        tmp_left_value_9 = mod_consts[62];
        CHECK_OBJECT(par_l);
        tmp_left_value_10 = par_l;
        CHECK_OBJECT(par_n);
        tmp_right_value_10 = par_n;
        tmp_right_value_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_10, tmp_right_value_10);
        if (tmp_right_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1728;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_9, tmp_right_value_9);
        Py_DECREF(tmp_right_value_9);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1728;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ldw);
        tmp_args_element_value_8 = var_ldw;
        frame_6d174432c81aa63c1d2d0d6fdfe34e2b->m_frame.f_lineno = 1728;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1728;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ldwork;
            assert(old != NULL);
            par_ldwork = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(var_ldw);
        tmp_assign_source_4 = var_ldw;
        {
            PyObject *old = par_ldwork;
            assert(old != NULL);
            par_ldwork = tmp_assign_source_4;
            Py_INCREF(par_ldwork);
            Py_DECREF(old);
        }

    }
    branch_end_2:;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1732;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[149]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1732;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_equil);
        tmp_args_element_value_9 = par_equil;
        if (par_l == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[150]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1732;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = par_l;
        if (par_n == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1732;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_11 = par_n;
        if (par_m == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1732;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_12 = par_m;
        if (par_p == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1732;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_13 = par_p;
        CHECK_OBJECT(par_A);
        tmp_args_element_value_14 = par_A;
        CHECK_OBJECT(par_E);
        tmp_args_element_value_15 = par_E;
        CHECK_OBJECT(par_B);
        tmp_args_element_value_16 = par_B;
        CHECK_OBJECT(par_C);
        tmp_args_element_value_17 = par_C;
        CHECK_OBJECT(par_D);
        tmp_args_element_value_18 = par_D;
        CHECK_OBJECT(par_tol);
        tmp_args_element_value_19 = par_tol;
        if (par_ldwork == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1732;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_20 = par_ldwork;
        frame_6d174432c81aa63c1d2d0d6fdfe34e2b->m_frame.f_lineno = 1732;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS12(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1732;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_out);
        tmp_iter_arg_1 = var_out;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1733;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 14);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNooooooooooooooooo";
            exception_lineno = 1733;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 14);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNooooooooooooooooo";
            exception_lineno = 1733;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_3, 2, 14);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNooooooooooooooooo";
            exception_lineno = 1733;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_4, 3, 14);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNooooooooooooooooo";
            exception_lineno = 1733;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_5, 4, 14);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNooooooooooooooooo";
            exception_lineno = 1733;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_6, 5, 14);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNooooooooooooooooo";
            exception_lineno = 1733;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_6 == NULL);
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_7, 6, 14);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNooooooooooooooooo";
            exception_lineno = 1733;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_7 == NULL);
        tmp_tuple_unpack_1__element_7 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_8, 7, 14);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNooooooooooooooooo";
            exception_lineno = 1733;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_8 == NULL);
        tmp_tuple_unpack_1__element_8 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_9, 8, 14);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNooooooooooooooooo";
            exception_lineno = 1733;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_9 == NULL);
        tmp_tuple_unpack_1__element_9 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_10, 9, 14);
        if (tmp_assign_source_16 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNooooooooooooooooo";
            exception_lineno = 1733;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_10 == NULL);
        tmp_tuple_unpack_1__element_10 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_11, 10, 14);
        if (tmp_assign_source_17 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNooooooooooooooooo";
            exception_lineno = 1733;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_11 == NULL);
        tmp_tuple_unpack_1__element_11 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tmp_unpack_12, 11, 14);
        if (tmp_assign_source_18 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNooooooooooooooooo";
            exception_lineno = 1733;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_12 == NULL);
        tmp_tuple_unpack_1__element_12 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tmp_unpack_13, 12, 14);
        if (tmp_assign_source_19 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNooooooooooooooooo";
            exception_lineno = 1733;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_13 == NULL);
        tmp_tuple_unpack_1__element_13 = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tmp_unpack_14, 13, 14);
        if (tmp_assign_source_20 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNooooooooooooooooo";
            exception_lineno = 1733;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_14 == NULL);
        tmp_tuple_unpack_1__element_14 = tmp_assign_source_20;
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

                    type_description_1 = "ooooooooooooNooooooooooooooooo";
                    exception_lineno = 1733;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[151];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooNooooooooooooooooo";
            exception_lineno = 1733;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_9);
    tmp_tuple_unpack_1__element_9 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_10);
    tmp_tuple_unpack_1__element_10 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_11);
    tmp_tuple_unpack_1__element_11 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_12);
    tmp_tuple_unpack_1__element_12 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_13);
    tmp_tuple_unpack_1__element_13 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_14);
    tmp_tuple_unpack_1__element_14 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_1;
        assert(var_Af == NULL);
        Py_INCREF(tmp_assign_source_21);
        var_Af = tmp_assign_source_21;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_2;
        assert(var_Ef == NULL);
        Py_INCREF(tmp_assign_source_22);
        var_Ef = tmp_assign_source_22;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_23 = tmp_tuple_unpack_1__element_3;
        assert(var_nfz == NULL);
        Py_INCREF(tmp_assign_source_23);
        var_nfz = tmp_assign_source_23;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_24 = tmp_tuple_unpack_1__element_4;
        assert(var_nrank == NULL);
        Py_INCREF(tmp_assign_source_24);
        var_nrank = tmp_assign_source_24;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_25 = tmp_tuple_unpack_1__element_5;
        assert(var_niz == NULL);
        Py_INCREF(tmp_assign_source_25);
        var_niz = tmp_assign_source_25;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_26 = tmp_tuple_unpack_1__element_6;
        assert(var_dinfz == NULL);
        Py_INCREF(tmp_assign_source_26);
        var_dinfz = tmp_assign_source_26;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
        tmp_assign_source_27 = tmp_tuple_unpack_1__element_7;
        assert(var_nkror == NULL);
        Py_INCREF(tmp_assign_source_27);
        var_nkror = tmp_assign_source_27;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_8);
        tmp_assign_source_28 = tmp_tuple_unpack_1__element_8;
        assert(var_ninfe == NULL);
        Py_INCREF(tmp_assign_source_28);
        var_ninfe = tmp_assign_source_28;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;

    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_9);
        tmp_assign_source_29 = tmp_tuple_unpack_1__element_9;
        assert(var_nkrol == NULL);
        Py_INCREF(tmp_assign_source_29);
        var_nkrol = tmp_assign_source_29;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_9);
    tmp_tuple_unpack_1__element_9 = NULL;

    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_10);
        tmp_assign_source_30 = tmp_tuple_unpack_1__element_10;
        assert(var_infz == NULL);
        Py_INCREF(tmp_assign_source_30);
        var_infz = tmp_assign_source_30;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_10);
    tmp_tuple_unpack_1__element_10 = NULL;

    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_11);
        tmp_assign_source_31 = tmp_tuple_unpack_1__element_11;
        assert(var_kronr == NULL);
        Py_INCREF(tmp_assign_source_31);
        var_kronr = tmp_assign_source_31;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_11);
    tmp_tuple_unpack_1__element_11 = NULL;

    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_12);
        tmp_assign_source_32 = tmp_tuple_unpack_1__element_12;
        assert(var_infe == NULL);
        Py_INCREF(tmp_assign_source_32);
        var_infe = tmp_assign_source_32;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_12);
    tmp_tuple_unpack_1__element_12 = NULL;

    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_13);
        tmp_assign_source_33 = tmp_tuple_unpack_1__element_13;
        assert(var_kronl == NULL);
        Py_INCREF(tmp_assign_source_33);
        var_kronl = tmp_assign_source_33;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_13);
    tmp_tuple_unpack_1__element_13 = NULL;

    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_14);
        tmp_assign_source_34 = tmp_tuple_unpack_1__element_14;
        assert(var_info == NULL);
        Py_INCREF(tmp_assign_source_34);
        var_info = tmp_assign_source_34;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_14);
    tmp_tuple_unpack_1__element_14 = NULL;

    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1735;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_info);
        tmp_args_element_value_21 = var_info;
        CHECK_OBJECT(var_arg_list);
        tmp_args_element_value_22 = var_arg_list;
        frame_6d174432c81aa63c1d2d0d6fdfe34e2b->m_frame.f_lineno = 1735;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1735;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_stop_value_1;
        CHECK_OBJECT(var_Af);
        tmp_expression_value_2 = var_Af;
        CHECK_OBJECT(var_nfz);
        tmp_stop_value_1 = var_nfz;
        tmp_tuple_element_2 = MAKE_SLICEOBJ1(tmp_stop_value_1);
        assert(!(tmp_tuple_element_2 == NULL));
        tmp_subscript_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_stop_value_2;
            PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_nfz);
            tmp_stop_value_2 = var_nfz;
            tmp_tuple_element_2 = MAKE_SLICEOBJ1(tmp_stop_value_2);
            assert(!(tmp_tuple_element_2 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_2);
        }
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1737;
            type_description_1 = "ooooooooooooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(8);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_stop_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_stop_value_5;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_stop_value_6;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_stop_value_7;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_stop_value_8;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_Ef);
            tmp_expression_value_3 = var_Ef;
            CHECK_OBJECT(var_nfz);
            tmp_stop_value_3 = var_nfz;
            tmp_tuple_element_3 = MAKE_SLICEOBJ1(tmp_stop_value_3);
            assert(!(tmp_tuple_element_3 == NULL));
            tmp_subscript_value_2 = PyTuple_New(2);
            {
                PyObject *tmp_stop_value_4;
                PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_3);
                CHECK_OBJECT(var_nfz);
                tmp_stop_value_4 = var_nfz;
                tmp_tuple_element_3 = MAKE_SLICEOBJ1(tmp_stop_value_4);
                assert(!(tmp_tuple_element_3 == NULL));
                PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_3);
            }
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1737;
                type_description_1 = "ooooooooooooNooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_nrank);
            tmp_tuple_element_1 = var_nrank;
            PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_niz);
            tmp_tuple_element_1 = var_niz;
            PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_1);
            CHECK_OBJECT(var_infz);
            tmp_expression_value_4 = var_infz;
            CHECK_OBJECT(var_dinfz);
            tmp_stop_value_5 = var_dinfz;
            tmp_subscript_value_3 = MAKE_SLICEOBJ1(tmp_stop_value_5);
            assert(!(tmp_subscript_value_3 == NULL));
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1738;
                type_description_1 = "ooooooooooooNooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 4, tmp_tuple_element_1);
            CHECK_OBJECT(var_kronr);
            tmp_expression_value_5 = var_kronr;
            CHECK_OBJECT(var_nkror);
            tmp_stop_value_6 = var_nkror;
            tmp_subscript_value_4 = MAKE_SLICEOBJ1(tmp_stop_value_6);
            assert(!(tmp_subscript_value_4 == NULL));
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_4);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1738;
                type_description_1 = "ooooooooooooNooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 5, tmp_tuple_element_1);
            CHECK_OBJECT(var_infe);
            tmp_expression_value_6 = var_infe;
            CHECK_OBJECT(var_ninfe);
            tmp_stop_value_7 = var_ninfe;
            tmp_subscript_value_5 = MAKE_SLICEOBJ1(tmp_stop_value_7);
            assert(!(tmp_subscript_value_5 == NULL));
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_5);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1738;
                type_description_1 = "ooooooooooooNooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 6, tmp_tuple_element_1);
            CHECK_OBJECT(var_kronl);
            tmp_expression_value_7 = var_kronl;
            CHECK_OBJECT(var_nkrol);
            tmp_stop_value_8 = var_nkrol;
            tmp_subscript_value_6 = MAKE_SLICEOBJ1(tmp_stop_value_8);
            assert(!(tmp_subscript_value_6 == NULL));
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_6);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1738;
                type_description_1 = "ooooooooooooNooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 7, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6d174432c81aa63c1d2d0d6fdfe34e2b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6d174432c81aa63c1d2d0d6fdfe34e2b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6d174432c81aa63c1d2d0d6fdfe34e2b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6d174432c81aa63c1d2d0d6fdfe34e2b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6d174432c81aa63c1d2d0d6fdfe34e2b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6d174432c81aa63c1d2d0d6fdfe34e2b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6d174432c81aa63c1d2d0d6fdfe34e2b,
        type_description_1,
        par_l,
        par_n,
        par_m,
        par_p,
        par_A,
        par_E,
        par_B,
        par_C,
        par_D,
        par_equil,
        par_tol,
        par_ldwork,
        NULL,
        var_arg_list,
        var_ldw,
        var_out,
        var_Af,
        var_Ef,
        var_nfz,
        var_nrank,
        var_niz,
        var_dinfz,
        var_nkror,
        var_ninfe,
        var_nkrol,
        var_infz,
        var_kronr,
        var_infe,
        var_kronl,
        var_info
    );


    // Release cached frame if used for exception.
    if (frame_6d174432c81aa63c1d2d0d6fdfe34e2b == cache_frame_6d174432c81aa63c1d2d0d6fdfe34e2b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6d174432c81aa63c1d2d0d6fdfe34e2b);
        cache_frame_6d174432c81aa63c1d2d0d6fdfe34e2b = NULL;
    }

    assertFrameObject(frame_6d174432c81aa63c1d2d0d6fdfe34e2b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_ldwork);
    par_ldwork = NULL;
    CHECK_OBJECT(var_arg_list);
    Py_DECREF(var_arg_list);
    var_arg_list = NULL;
    Py_XDECREF(var_ldw);
    var_ldw = NULL;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
    CHECK_OBJECT(var_Af);
    Py_DECREF(var_Af);
    var_Af = NULL;
    CHECK_OBJECT(var_Ef);
    Py_DECREF(var_Ef);
    var_Ef = NULL;
    CHECK_OBJECT(var_nfz);
    Py_DECREF(var_nfz);
    var_nfz = NULL;
    CHECK_OBJECT(var_nrank);
    Py_DECREF(var_nrank);
    var_nrank = NULL;
    CHECK_OBJECT(var_niz);
    Py_DECREF(var_niz);
    var_niz = NULL;
    CHECK_OBJECT(var_dinfz);
    Py_DECREF(var_dinfz);
    var_dinfz = NULL;
    CHECK_OBJECT(var_nkror);
    Py_DECREF(var_nkror);
    var_nkror = NULL;
    CHECK_OBJECT(var_ninfe);
    Py_DECREF(var_ninfe);
    var_ninfe = NULL;
    CHECK_OBJECT(var_nkrol);
    Py_DECREF(var_nkrol);
    var_nkrol = NULL;
    CHECK_OBJECT(var_infz);
    Py_DECREF(var_infz);
    var_infz = NULL;
    CHECK_OBJECT(var_kronr);
    Py_DECREF(var_kronr);
    var_kronr = NULL;
    CHECK_OBJECT(var_infe);
    Py_DECREF(var_infe);
    var_infe = NULL;
    CHECK_OBJECT(var_kronl);
    Py_DECREF(var_kronl);
    var_kronl = NULL;
    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;
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

    Py_XDECREF(par_ldwork);
    par_ldwork = NULL;
    Py_XDECREF(var_arg_list);
    var_arg_list = NULL;
    Py_XDECREF(var_ldw);
    var_ldw = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_Af);
    var_Af = NULL;
    Py_XDECREF(var_Ef);
    var_Ef = NULL;
    Py_XDECREF(var_nfz);
    var_nfz = NULL;
    Py_XDECREF(var_nrank);
    var_nrank = NULL;
    Py_XDECREF(var_niz);
    var_niz = NULL;
    Py_XDECREF(var_dinfz);
    var_dinfz = NULL;
    Py_XDECREF(var_nkror);
    var_nkror = NULL;
    Py_XDECREF(var_ninfe);
    var_ninfe = NULL;
    Py_XDECREF(var_nkrol);
    var_nkrol = NULL;
    Py_XDECREF(var_infz);
    var_infz = NULL;
    Py_XDECREF(var_kronr);
    var_kronr = NULL;
    Py_XDECREF(var_infe);
    var_infe = NULL;
    Py_XDECREF(var_kronl);
    var_kronl = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
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
    CHECK_OBJECT(par_l);
    Py_DECREF(par_l);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_E);
    Py_DECREF(par_E);
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    CHECK_OBJECT(par_D);
    Py_DECREF(par_D);
    CHECK_OBJECT(par_equil);
    Py_DECREF(par_equil);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_l);
    Py_DECREF(par_l);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_E);
    Py_DECREF(par_E);
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    CHECK_OBJECT(par_D);
    Py_DECREF(par_D);
    CHECK_OBJECT(par_equil);
    Py_DECREF(par_equil);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__10_ab09md(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_slycot$analysis$$$function__10_ab09md,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_648858c5756a53e68126f92e58ca2137,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_slycot$analysis,
        mod_consts[121],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__11_ab09nd(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_slycot$analysis$$$function__11_ab09nd,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e474fc2f4d830ee101f37c542592b1e3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_slycot$analysis,
        mod_consts[123],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__12_ab13bd(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_slycot$analysis$$$function__12_ab13bd,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d5e13a0da9019e3028f5e7752d1e1811,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_slycot$analysis,
        mod_consts[127],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__13_ab13dd(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_slycot$analysis$$$function__13_ab13dd,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2f6333c5e53c9977fd4e648f880807b3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_slycot$analysis,
        mod_consts[141],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__14_ab13ed(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_slycot$analysis$$$function__14_ab13ed,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2280b17bbeaf03908740e2c663cf32c8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_slycot$analysis,
        mod_consts[144],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__15_ab13fd(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_slycot$analysis$$$function__15_ab13fd,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1a19f61d6737b2cb561c486d73cb607d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_slycot$analysis,
        mod_consts[147],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__16_ag08bd(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_slycot$analysis$$$function__16_ag08bd,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6d174432c81aa63c1d2d0d6fdfe34e2b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_slycot$analysis,
        mod_consts[152],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__1_ab01nd(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_slycot$analysis$$$function__1_ab01nd,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7e725c7c68995842f293e8ac06aadeb5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_slycot$analysis,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__2_ab05md(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_slycot$analysis$$$function__2_ab05md,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fe1062295054712ff7ad4d9618ea3466,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_slycot$analysis,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__3_ab05nd(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_slycot$analysis$$$function__3_ab05nd,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e47fe528dd35b9bb3f7a47a05f073d9e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_slycot$analysis,
        mod_consts[58],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__4_ab07nd(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_slycot$analysis$$$function__4_ab07nd,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e6e6334f50d97feee41067cd2675f96d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_slycot$analysis,
        mod_consts[65],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__5_ab08nd(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_slycot$analysis$$$function__5_ab08nd,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d5ac3998aa245ae3dcf3723bcda4cb8b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_slycot$analysis,
        mod_consts[69],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__6_ab08nz(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_slycot$analysis$$$function__6_ab08nz,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d75cff994e7b3526a11fcc33f954da61,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_slycot$analysis,
        mod_consts[78],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__7_ab09ad(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_slycot$analysis$$$function__7_ab09ad,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_032104e1c48d8e007e2d99d4dcbc1afd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_slycot$analysis,
        mod_consts[101],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__8_ab09ax(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_slycot$analysis$$$function__8_ab09ax,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a7a3157639b101b75b4d0333d5f1128c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_slycot$analysis,
        mod_consts[109],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_slycot$analysis$$$function__9_ab09bd(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_slycot$analysis$$$function__9_ab09bd,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4261d17cb04906378d0998da5e6da459,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_slycot$analysis,
        mod_consts[116],
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

function_impl_code functable_slycot$analysis[] = {
    impl_slycot$analysis$$$function__1_ab01nd,
    impl_slycot$analysis$$$function__2_ab05md,
    impl_slycot$analysis$$$function__3_ab05nd,
    impl_slycot$analysis$$$function__4_ab07nd,
    impl_slycot$analysis$$$function__5_ab08nd,
    impl_slycot$analysis$$$function__6_ab08nz,
    impl_slycot$analysis$$$function__7_ab09ad,
    impl_slycot$analysis$$$function__8_ab09ax,
    impl_slycot$analysis$$$function__9_ab09bd,
    impl_slycot$analysis$$$function__10_ab09md,
    impl_slycot$analysis$$$function__11_ab09nd,
    impl_slycot$analysis$$$function__12_ab13bd,
    impl_slycot$analysis$$$function__13_ab13dd,
    impl_slycot$analysis$$$function__14_ab13ed,
    impl_slycot$analysis$$$function__15_ab13fd,
    impl_slycot$analysis$$$function__16_ag08bd,
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

    function_impl_code *current = functable_slycot$analysis;
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

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
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

    if (offset > sizeof(functable_slycot$analysis) || offset < 0) {
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

    PyCodeObject *code_object = MAKE_CODEOBJECT(
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
        functable_slycot$analysis[offset],
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
        module_slycot$analysis,
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
PyObject *modulecode_slycot$analysis(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("slycot.analysis");

    // Store the module for future use.
    module_slycot$analysis = module;

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
        _initSlotIternext();
#endif

        patchBuiltinModule();
        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("slycot.analysis: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("slycot.analysis: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("slycot.analysis: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initslycot$analysis\n");

    moduledict_slycot$analysis = MODULE_DICT(module_slycot$analysis);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_slycot$analysis,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_slycot$analysis,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_slycot$analysis,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_slycot$analysis,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_slycot$analysis,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_slycot$analysis);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_slycot$analysis, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_slycot$analysis, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_slycot$analysis, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_slycot$analysis);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_0c59e6ef16c3a9eb5859a4222d0874a2;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_0c59e6ef16c3a9eb5859a4222d0874a2 = MAKE_MODULE_FRAME(codeobj_0c59e6ef16c3a9eb5859a4222d0874a2, module_slycot$analysis);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_0c59e6ef16c3a9eb5859a4222d0874a2);
    assert(Py_REFCNT(frame_0c59e6ef16c3a9eb5859a4222d0874a2) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[155], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[156], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[158];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_slycot$analysis;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[159];
        tmp_level_value_1 = mod_consts[61];
        frame_0c59e6ef16c3a9eb5859a4222d0874a2->m_frame.f_lineno = 20;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_slycot$analysis,
                mod_consts[3],
                mod_consts[76]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[160];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_slycot$analysis;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[161];
        tmp_level_value_2 = mod_consts[61];
        frame_0c59e6ef16c3a9eb5859a4222d0874a2->m_frame.f_lineno = 21;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_slycot$analysis,
                mod_consts[8],
                mod_consts[76]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[8]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_slycot$analysis,
                mod_consts[129],
                mod_consts[76]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[129]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_7);
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0c59e6ef16c3a9eb5859a4222d0874a2);
#endif
    popFrameStack();

    assertFrameObject(frame_0c59e6ef16c3a9eb5859a4222d0874a2);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0c59e6ef16c3a9eb5859a4222d0874a2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0c59e6ef16c3a9eb5859a4222d0874a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0c59e6ef16c3a9eb5859a4222d0874a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0c59e6ef16c3a9eb5859a4222d0874a2, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[162];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_8 = MAKE_FUNCTION_slycot$analysis$$$function__1_ab01nd(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[163];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_9 = MAKE_FUNCTION_slycot$analysis$$$function__2_ab05md(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[164];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_10 = MAKE_FUNCTION_slycot$analysis$$$function__3_ab05nd(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[165];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_11 = MAKE_FUNCTION_slycot$analysis$$$function__4_ab07nd(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = mod_consts[162];
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_12 = MAKE_FUNCTION_slycot$analysis$$$function__5_ab08nd(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = mod_consts[166];
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_13 = MAKE_FUNCTION_slycot$analysis$$$function__6_ab08nz(tmp_defaults_6);

        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_7;
        tmp_defaults_7 = mod_consts[167];
        Py_INCREF(tmp_defaults_7);


        tmp_assign_source_14 = MAKE_FUNCTION_slycot$analysis$$$function__7_ab09ad(tmp_defaults_7);

        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_8;
        tmp_defaults_8 = mod_consts[168];
        Py_INCREF(tmp_defaults_8);


        tmp_assign_source_15 = MAKE_FUNCTION_slycot$analysis$$$function__8_ab09ax(tmp_defaults_8);

        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_9;
        tmp_defaults_9 = mod_consts[169];
        Py_INCREF(tmp_defaults_9);


        tmp_assign_source_16 = MAKE_FUNCTION_slycot$analysis$$$function__9_ab09bd(tmp_defaults_9);

        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_defaults_10;
        tmp_defaults_10 = mod_consts[170];
        Py_INCREF(tmp_defaults_10);


        tmp_assign_source_17 = MAKE_FUNCTION_slycot$analysis$$$function__10_ab09md(tmp_defaults_10);

        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_11;
        tmp_defaults_11 = mod_consts[171];
        Py_INCREF(tmp_defaults_11);


        tmp_assign_source_18 = MAKE_FUNCTION_slycot$analysis$$$function__11_ab09nd(tmp_defaults_11);

        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_12;
        tmp_defaults_12 = mod_consts[172];
        Py_INCREF(tmp_defaults_12);


        tmp_assign_source_19 = MAKE_FUNCTION_slycot$analysis$$$function__12_ab13bd(tmp_defaults_12);

        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_defaults_13;
        tmp_defaults_13 = mod_consts[173];
        Py_INCREF(tmp_defaults_13);


        tmp_assign_source_20 = MAKE_FUNCTION_slycot$analysis$$$function__13_ab13dd(tmp_defaults_13);

        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_14;
        tmp_defaults_14 = mod_consts[174];
        Py_INCREF(tmp_defaults_14);


        tmp_assign_source_21 = MAKE_FUNCTION_slycot$analysis$$$function__14_ab13ed(tmp_defaults_14);

        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_defaults_15;
        tmp_defaults_15 = mod_consts[172];
        Py_INCREF(tmp_defaults_15);


        tmp_assign_source_22 = MAKE_FUNCTION_slycot$analysis$$$function__15_ab13fd(tmp_defaults_15);

        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_16;
        tmp_defaults_16 = mod_consts[166];
        Py_INCREF(tmp_defaults_16);


        tmp_assign_source_23 = MAKE_FUNCTION_slycot$analysis$$$function__16_ag08bd(tmp_defaults_16);

        UPDATE_STRING_DICT1(moduledict_slycot$analysis, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_23);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("slycot.analysis", false);

    return module_slycot$analysis;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_slycot$analysis, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("slycot$analysis", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
