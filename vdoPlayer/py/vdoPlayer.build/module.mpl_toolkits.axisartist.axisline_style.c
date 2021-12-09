/* Generated code for Python module 'mpl_toolkits.axisartist.axisline_style'
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

/* The "module_mpl_toolkits$axisartist$axisline_style" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mpl_toolkits$axisartist$axisline_style;
PyDictObject *moduledict_mpl_toolkits$axisartist$axisline_style;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[110];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[110];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("mpl_toolkits.axisartist.axisline_style"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 110; i++) {
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
void checkModuleConstants_mpl_toolkits$axisartist$axisline_style(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 110; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ef670d06589f3ab6ab89ecff33f70fae;
static PyCodeObject *codeobj_5b687f1478b4a89a9db1b28fb56d6480;
static PyCodeObject *codeobj_c310fce43c84a3a27df056c308e5d027;
static PyCodeObject *codeobj_a68e06a85e7e5f341a620137d4d50a7c;
static PyCodeObject *codeobj_98c0f55fa3ca238b6bbb32f42257640e;
static PyCodeObject *codeobj_1bf884ebc92cf84163307d5ce4aeac74;
static PyCodeObject *codeobj_6f39a4feeb613fb8e8f58067a7ec50e1;
static PyCodeObject *codeobj_5654ca8079994fa394f6f8908ffb5648;
static PyCodeObject *codeobj_845ff7842c52c007d226dd5335611ea6;
static PyCodeObject *codeobj_5046cbc956155017befd2d376520e35b;
static PyCodeObject *codeobj_bf0cafb216b0de22d6614485c45bb0ff;
static PyCodeObject *codeobj_70f6fe176c9a9c80e7a1943a62247c1f;
static PyCodeObject *codeobj_c3a174d551e8ec0ba9ecebc503b611da;
static PyCodeObject *codeobj_355c96afa9e2c91e703ff9b346d67822;
static PyCodeObject *codeobj_1335f6f58b3fb9af8d10f21da3ff040b;
static PyCodeObject *codeobj_a0c43dd193015db28f353d0387f5106f;
static PyCodeObject *codeobj_c14dbd68cd9656150ce1aa16291ab027;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[98]); CHECK_OBJECT(module_filename_obj);
    codeobj_ef670d06589f3ab6ab89ecff33f70fae = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[99], NULL, NULL, 0, 0, 0);
    codeobj_5b687f1478b4a89a9db1b28fb56d6480 = MAKE_CODEOBJECT(module_filename_obj, 74, CO_NOFREE, mod_consts[83], mod_consts[100], NULL, 0, 0, 0);
    codeobj_c310fce43c84a3a27df056c308e5d027 = MAKE_CODEOBJECT(module_filename_obj, 69, CO_NOFREE, mod_consts[80], mod_consts[100], NULL, 0, 0, 0);
    codeobj_a68e06a85e7e5f341a620137d4d50a7c = MAKE_CODEOBJECT(module_filename_obj, 142, CO_NOFREE, mod_consts[80], mod_consts[100], NULL, 0, 0, 0);
    codeobj_98c0f55fa3ca238b6bbb32f42257640e = MAKE_CODEOBJECT(module_filename_obj, 11, CO_NOFREE, mod_consts[67], mod_consts[100], NULL, 0, 0, 0);
    codeobj_1bf884ebc92cf84163307d5ce4aeac74 = MAKE_CODEOBJECT(module_filename_obj, 115, CO_NOFREE, mod_consts[67], mod_consts[100], NULL, 0, 0, 0);
    codeobj_6f39a4feeb613fb8e8f58067a7ec50e1 = MAKE_CODEOBJECT(module_filename_obj, 97, CO_NOFREE, mod_consts[91], mod_consts[100], NULL, 0, 0, 0);
    codeobj_5654ca8079994fa394f6f8908ffb5648 = MAKE_CODEOBJECT(module_filename_obj, 10, CO_NOFREE, mod_consts[65], mod_consts[100], NULL, 0, 0, 0);
    codeobj_845ff7842c52c007d226dd5335611ea6 = MAKE_CODEOBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[101], NULL, 3, 0, 0);
    codeobj_5046cbc956155017befd2d376520e35b = MAKE_CODEOBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[5], mod_consts[102], mod_consts[100], 1, 0, 0);
    codeobj_bf0cafb216b0de22d6614485c45bb0ff = MAKE_CODEOBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[103], NULL, 5, 0, 0);
    codeobj_70f6fe176c9a9c80e7a1943a62247c1f = MAKE_CODEOBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[5], mod_consts[104], mod_consts[100], 2, 0, 0);
    codeobj_c3a174d551e8ec0ba9ecebc503b611da = MAKE_CODEOBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[105], NULL, 3, 0, 0);
    codeobj_355c96afa9e2c91e703ff9b346d67822 = MAKE_CODEOBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[106], NULL, 2, 0, 0);
    codeobj_1335f6f58b3fb9af8d10f21da3ff040b = MAKE_CODEOBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[107], NULL, 3, 0, 0);
    codeobj_a0c43dd193015db28f353d0387f5106f = MAKE_CODEOBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[108], NULL, 2, 0, 0);
    codeobj_c14dbd68cd9656150ce1aa16291ab027 = MAKE_CODEOBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[109], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__1___init__();


static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__2_set_line_mutation_scale();


static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__3__extend_path(PyObject *defaults);


static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__4_set_path();


static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__5_draw();


static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__6___init__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__7___call__();


static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__8___init__(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__9_new_line();


// The module function definitions.
static PyObject *impl_mpl_toolkits$axisartist$axisline_style$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_axis_artist = python_pars[1];
    PyObject *par_line_path = python_pars[2];
    PyObject *par_transform = python_pars[3];
    PyObject *par_line_mutation_scale = python_pars[4];
    struct Nuitka_FrameObject *frame_bf0cafb216b0de22d6614485c45bb0ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_bf0cafb216b0de22d6614485c45bb0ff = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf0cafb216b0de22d6614485c45bb0ff)) {
        Py_XDECREF(cache_frame_bf0cafb216b0de22d6614485c45bb0ff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf0cafb216b0de22d6614485c45bb0ff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf0cafb216b0de22d6614485c45bb0ff = MAKE_FUNCTION_FRAME(codeobj_bf0cafb216b0de22d6614485c45bb0ff, module_mpl_toolkits$axisartist$axisline_style, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bf0cafb216b0de22d6614485c45bb0ff->m_type_description == NULL);
    frame_bf0cafb216b0de22d6614485c45bb0ff = cache_frame_bf0cafb216b0de22d6614485c45bb0ff;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bf0cafb216b0de22d6614485c45bb0ff);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bf0cafb216b0de22d6614485c45bb0ff) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_axis_artist);
        tmp_assattr_value_1 = par_axis_artist;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_transform);
        tmp_assattr_value_2 = par_transform;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_line_path);
        tmp_assattr_value_3 = par_line_path;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_line_mutation_scale);
        tmp_assattr_value_4 = par_line_mutation_scale;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        PyObject *tmp_kw_call_dict_value_8_1;
        PyObject *tmp_called_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 23;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 24;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_2_1 = Py_None;
        tmp_kw_call_dict_value_3_1 = Py_None;
        tmp_kw_call_dict_value_4_1 = mod_consts[7];
        tmp_kw_call_dict_value_5_1 = mod_consts[7];
        CHECK_OBJECT(par_line_mutation_scale);
        tmp_kw_call_dict_value_6_1 = par_line_mutation_scale;
        tmp_kw_call_dict_value_7_1 = Py_None;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 31;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_bf0cafb216b0de22d6614485c45bb0ff->m_frame.f_lineno = 31;
        tmp_kw_call_dict_value_8_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_kw_call_dict_value_8_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 31;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_bf0cafb216b0de22d6614485c45bb0ff->m_frame.f_lineno = 22;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[9] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_8_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf0cafb216b0de22d6614485c45bb0ff);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf0cafb216b0de22d6614485c45bb0ff);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bf0cafb216b0de22d6614485c45bb0ff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf0cafb216b0de22d6614485c45bb0ff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf0cafb216b0de22d6614485c45bb0ff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf0cafb216b0de22d6614485c45bb0ff,
        type_description_1,
        par_self,
        par_axis_artist,
        par_line_path,
        par_transform,
        par_line_mutation_scale
    );


    // Release cached frame if used for exception.
    if (frame_bf0cafb216b0de22d6614485c45bb0ff == cache_frame_bf0cafb216b0de22d6614485c45bb0ff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bf0cafb216b0de22d6614485c45bb0ff);
        cache_frame_bf0cafb216b0de22d6614485c45bb0ff = NULL;
    }

    assertFrameObject(frame_bf0cafb216b0de22d6614485c45bb0ff);

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
    CHECK_OBJECT(par_axis_artist);
    Py_DECREF(par_axis_artist);
    CHECK_OBJECT(par_line_path);
    Py_DECREF(par_line_path);
    CHECK_OBJECT(par_transform);
    Py_DECREF(par_transform);
    CHECK_OBJECT(par_line_mutation_scale);
    Py_DECREF(par_line_mutation_scale);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_axis_artist);
    Py_DECREF(par_axis_artist);
    CHECK_OBJECT(par_line_path);
    Py_DECREF(par_line_path);
    CHECK_OBJECT(par_transform);
    Py_DECREF(par_transform);
    CHECK_OBJECT(par_line_mutation_scale);
    Py_DECREF(par_line_mutation_scale);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$axisartist$axisline_style$$$function__2_set_line_mutation_scale(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_scale = python_pars[1];
    struct Nuitka_FrameObject *frame_a0c43dd193015db28f353d0387f5106f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a0c43dd193015db28f353d0387f5106f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a0c43dd193015db28f353d0387f5106f)) {
        Py_XDECREF(cache_frame_a0c43dd193015db28f353d0387f5106f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a0c43dd193015db28f353d0387f5106f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a0c43dd193015db28f353d0387f5106f = MAKE_FUNCTION_FRAME(codeobj_a0c43dd193015db28f353d0387f5106f, module_mpl_toolkits$axisartist$axisline_style, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a0c43dd193015db28f353d0387f5106f->m_type_description == NULL);
    frame_a0c43dd193015db28f353d0387f5106f = cache_frame_a0c43dd193015db28f353d0387f5106f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a0c43dd193015db28f353d0387f5106f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a0c43dd193015db28f353d0387f5106f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scale);
        tmp_left_value_1 = par_scale;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a0c43dd193015db28f353d0387f5106f->m_frame.f_lineno = 35;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a0c43dd193015db28f353d0387f5106f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a0c43dd193015db28f353d0387f5106f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a0c43dd193015db28f353d0387f5106f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a0c43dd193015db28f353d0387f5106f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a0c43dd193015db28f353d0387f5106f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a0c43dd193015db28f353d0387f5106f,
        type_description_1,
        par_self,
        par_scale
    );


    // Release cached frame if used for exception.
    if (frame_a0c43dd193015db28f353d0387f5106f == cache_frame_a0c43dd193015db28f353d0387f5106f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a0c43dd193015db28f353d0387f5106f);
        cache_frame_a0c43dd193015db28f353d0387f5106f = NULL;
    }

    assertFrameObject(frame_a0c43dd193015db28f353d0387f5106f);

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
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$axisartist$axisline_style$$$function__3__extend_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_mutation_size = python_pars[2];
    PyObject *var_x0 = NULL;
    PyObject *var_y0 = NULL;
    PyObject *var_x1 = NULL;
    PyObject *var_y1 = NULL;
    PyObject *var_theta = NULL;
    PyObject *var_x2 = NULL;
    PyObject *var_y2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c3a174d551e8ec0ba9ecebc503b611da;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c3a174d551e8ec0ba9ecebc503b611da = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c3a174d551e8ec0ba9ecebc503b611da)) {
        Py_XDECREF(cache_frame_c3a174d551e8ec0ba9ecebc503b611da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c3a174d551e8ec0ba9ecebc503b611da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c3a174d551e8ec0ba9ecebc503b611da = MAKE_FUNCTION_FRAME(codeobj_c3a174d551e8ec0ba9ecebc503b611da, module_mpl_toolkits$axisartist$axisline_style, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c3a174d551e8ec0ba9ecebc503b611da->m_type_description == NULL);
    frame_c3a174d551e8ec0ba9ecebc503b611da = cache_frame_c3a174d551e8ec0ba9ecebc503b611da;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c3a174d551e8ec0ba9ecebc503b611da);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c3a174d551e8ec0ba9ecebc503b611da) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_path);
        tmp_expression_value_2 = par_path;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[12];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 41;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 41;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 41;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[13];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 41;
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
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_iter_arg_2 = tmp_tuple_unpack_1__element_1;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 41;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 41;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 41;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[13];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 41;
            goto try_except_handler_5;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_2__element_1;
        assert(var_x0 == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_x0 = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_2__element_2;
        assert(var_y0 == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_y0 = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_iter_arg_3 = tmp_tuple_unpack_1__element_2;
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 41;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 41;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_11;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 41;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[13];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 41;
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

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_3__element_1;
        assert(var_x1 == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_x1 = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_3__element_2;
        assert(var_y1 == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_y1 = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_y1);
        tmp_left_value_1 = var_y1;
        CHECK_OBJECT(var_y0);
        tmp_right_value_1 = var_y0;
        tmp_args_element_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 42;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x1);
        tmp_left_value_2 = var_x1;
        CHECK_OBJECT(var_x0);
        tmp_right_value_2 = var_x0;
        tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 42;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c3a174d551e8ec0ba9ecebc503b611da->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_theta == NULL);
        var_theta = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        PyObject *tmp_left_value_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_right_value_4;
        CHECK_OBJECT(var_x1);
        tmp_left_value_3 = var_x1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_theta);
        tmp_args_element_value_3 = var_theta;
        frame_c3a174d551e8ec0ba9ecebc503b611da->m_frame.f_lineno = 43;
        tmp_left_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[16], tmp_args_element_value_3);
        if (tmp_left_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mutation_size);
        tmp_right_value_4 = par_mutation_size;
        tmp_right_value_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_4, tmp_right_value_4);
        Py_DECREF(tmp_left_value_4);
        if (tmp_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_3, tmp_right_value_3);
        Py_DECREF(tmp_right_value_3);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x2 == NULL);
        var_x2 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_5;
        PyObject *tmp_left_value_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_right_value_6;
        CHECK_OBJECT(var_y1);
        tmp_left_value_5 = var_y1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_theta);
        tmp_args_element_value_4 = var_theta;
        frame_c3a174d551e8ec0ba9ecebc503b611da->m_frame.f_lineno = 44;
        tmp_left_value_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[17], tmp_args_element_value_4);
        if (tmp_left_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mutation_size);
        tmp_right_value_6 = par_mutation_size;
        tmp_right_value_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_6, tmp_right_value_6);
        Py_DECREF(tmp_left_value_6);
        if (tmp_right_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_5, tmp_right_value_5);
        Py_DECREF(tmp_right_value_5);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_y2 == NULL);
        var_y2 = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_path);
        tmp_expression_value_4 = par_path;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[18]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_6;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[21]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_expression_value_6 = par_path;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[11]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = PyList_New(2);
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_list_element_3;
            PyList_SET_ITEM(tmp_args_element_value_6, 0, tmp_list_element_1);
            CHECK_OBJECT(var_x2);
            tmp_list_element_3 = var_x2;
            tmp_list_element_2 = PyList_New(2);
            PyList_SET_ITEM0(tmp_list_element_2, 0, tmp_list_element_3);
            CHECK_OBJECT(var_y2);
            tmp_list_element_3 = var_y2;
            PyList_SET_ITEM0(tmp_list_element_2, 1, tmp_list_element_3);
            tmp_list_element_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_2);
            PyList_SET_ITEM(tmp_args_element_value_6, 1, tmp_list_element_1);
        }
        frame_c3a174d551e8ec0ba9ecebc503b611da->m_frame.f_lineno = 46;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c3a174d551e8ec0ba9ecebc503b611da->m_frame.f_lineno = 46;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_list_element_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_list_element_7;
        PyObject *tmp_expression_value_10;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[21]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_expression_value_8 = par_path;
        tmp_list_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[11]);
        if (tmp_list_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = PyList_New(2);
        {
            PyObject *tmp_list_element_5;
            PyObject *tmp_list_element_6;
            PyList_SET_ITEM(tmp_args_element_value_8, 0, tmp_list_element_4);
            CHECK_OBJECT(var_x2);
            tmp_list_element_6 = var_x2;
            tmp_list_element_5 = PyList_New(2);
            PyList_SET_ITEM0(tmp_list_element_5, 0, tmp_list_element_6);
            CHECK_OBJECT(var_y2);
            tmp_list_element_6 = var_y2;
            PyList_SET_ITEM0(tmp_list_element_5, 1, tmp_list_element_6);
            tmp_list_element_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_5);
            PyList_SET_ITEM(tmp_args_element_value_8, 1, tmp_list_element_4);
        }
        frame_c3a174d551e8ec0ba9ecebc503b611da->m_frame.f_lineno = 48;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[21]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_expression_value_10 = par_path;
        tmp_list_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[18]);
        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = PyList_New(2);
        {
            PyObject *tmp_list_element_8;
            PyObject *tmp_expression_value_11;
            PyList_SET_ITEM(tmp_args_element_value_10, 0, tmp_list_element_7);
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[22]);
            if (tmp_list_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_7 = PyList_New(1);
            PyList_SET_ITEM(tmp_list_element_7, 0, tmp_list_element_8);
            PyList_SET_ITEM(tmp_args_element_value_10, 1, tmp_list_element_7);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_10);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_c3a174d551e8ec0ba9ecebc503b611da->m_frame.f_lineno = 49;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c3a174d551e8ec0ba9ecebc503b611da->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_9};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c3a174d551e8ec0ba9ecebc503b611da);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c3a174d551e8ec0ba9ecebc503b611da);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c3a174d551e8ec0ba9ecebc503b611da);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c3a174d551e8ec0ba9ecebc503b611da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c3a174d551e8ec0ba9ecebc503b611da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c3a174d551e8ec0ba9ecebc503b611da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c3a174d551e8ec0ba9ecebc503b611da,
        type_description_1,
        par_self,
        par_path,
        par_mutation_size,
        var_x0,
        var_y0,
        var_x1,
        var_y1,
        var_theta,
        var_x2,
        var_y2
    );


    // Release cached frame if used for exception.
    if (frame_c3a174d551e8ec0ba9ecebc503b611da == cache_frame_c3a174d551e8ec0ba9ecebc503b611da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c3a174d551e8ec0ba9ecebc503b611da);
        cache_frame_c3a174d551e8ec0ba9ecebc503b611da = NULL;
    }

    assertFrameObject(frame_c3a174d551e8ec0ba9ecebc503b611da);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_x0);
    Py_DECREF(var_x0);
    var_x0 = NULL;
    CHECK_OBJECT(var_y0);
    Py_DECREF(var_y0);
    var_y0 = NULL;
    CHECK_OBJECT(var_x1);
    Py_DECREF(var_x1);
    var_x1 = NULL;
    CHECK_OBJECT(var_y1);
    Py_DECREF(var_y1);
    var_y1 = NULL;
    CHECK_OBJECT(var_theta);
    Py_DECREF(var_theta);
    var_theta = NULL;
    Py_XDECREF(var_x2);
    var_x2 = NULL;
    Py_XDECREF(var_y2);
    var_y2 = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_x0);
    var_x0 = NULL;
    Py_XDECREF(var_y0);
    var_y0 = NULL;
    Py_XDECREF(var_x1);
    var_x1 = NULL;
    Py_XDECREF(var_y1);
    var_y1 = NULL;
    Py_XDECREF(var_theta);
    var_theta = NULL;
    Py_XDECREF(var_x2);
    var_x2 = NULL;
    Py_XDECREF(var_y2);
    var_y2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_mutation_size);
    Py_DECREF(par_mutation_size);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_mutation_size);
    Py_DECREF(par_mutation_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$axisartist$axisline_style$$$function__4_set_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_c14dbd68cd9656150ce1aa16291ab027;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c14dbd68cd9656150ce1aa16291ab027 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c14dbd68cd9656150ce1aa16291ab027)) {
        Py_XDECREF(cache_frame_c14dbd68cd9656150ce1aa16291ab027);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c14dbd68cd9656150ce1aa16291ab027 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c14dbd68cd9656150ce1aa16291ab027 = MAKE_FUNCTION_FRAME(codeobj_c14dbd68cd9656150ce1aa16291ab027, module_mpl_toolkits$axisartist$axisline_style, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c14dbd68cd9656150ce1aa16291ab027->m_type_description == NULL);
    frame_c14dbd68cd9656150ce1aa16291ab027 = cache_frame_c14dbd68cd9656150ce1aa16291ab027;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c14dbd68cd9656150ce1aa16291ab027);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c14dbd68cd9656150ce1aa16291ab027) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_path);
        tmp_assattr_value_1 = par_path;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c14dbd68cd9656150ce1aa16291ab027);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c14dbd68cd9656150ce1aa16291ab027);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c14dbd68cd9656150ce1aa16291ab027, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c14dbd68cd9656150ce1aa16291ab027->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c14dbd68cd9656150ce1aa16291ab027, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c14dbd68cd9656150ce1aa16291ab027,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_c14dbd68cd9656150ce1aa16291ab027 == cache_frame_c14dbd68cd9656150ce1aa16291ab027) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c14dbd68cd9656150ce1aa16291ab027);
        cache_frame_c14dbd68cd9656150ce1aa16291ab027 = NULL;
    }

    assertFrameObject(frame_c14dbd68cd9656150ce1aa16291ab027);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$axisartist$axisline_style$$$function__5_draw(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_renderer = python_pars[1];
    PyObject *var_path_in_disp = NULL;
    PyObject *var_mutation_size = NULL;
    PyObject *var_extended_path = NULL;
    struct Nuitka_FrameObject *frame_355c96afa9e2c91e703ff9b346d67822;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_355c96afa9e2c91e703ff9b346d67822 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_355c96afa9e2c91e703ff9b346d67822)) {
        Py_XDECREF(cache_frame_355c96afa9e2c91e703ff9b346d67822);

#if _DEBUG_REFCOUNTS
        if (cache_frame_355c96afa9e2c91e703ff9b346d67822 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_355c96afa9e2c91e703ff9b346d67822 = MAKE_FUNCTION_FRAME(codeobj_355c96afa9e2c91e703ff9b346d67822, module_mpl_toolkits$axisartist$axisline_style, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_355c96afa9e2c91e703ff9b346d67822->m_type_description == NULL);
    frame_355c96afa9e2c91e703ff9b346d67822 = cache_frame_355c96afa9e2c91e703ff9b346d67822;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_355c96afa9e2c91e703ff9b346d67822);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_355c96afa9e2c91e703ff9b346d67822) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_355c96afa9e2c91e703ff9b346d67822->m_frame.f_lineno = 62;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_path_in_disp == NULL);
        var_path_in_disp = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_355c96afa9e2c91e703ff9b346d67822->m_frame.f_lineno = 63;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[25]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mutation_size == NULL);
        var_mutation_size = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[26]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_path_in_disp);
        tmp_kw_call_arg_value_0_1 = var_path_in_disp;
        CHECK_OBJECT(var_mutation_size);
        tmp_kw_call_dict_value_0_1 = var_mutation_size;
        frame_355c96afa9e2c91e703ff9b346d67822->m_frame.f_lineno = 64;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[27]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_extended_path == NULL);
        var_extended_path = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_extended_path);
        tmp_assattr_value_1 = var_extended_path;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[28], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_renderer);
        tmp_args_element_value_3 = par_renderer;
        frame_355c96afa9e2c91e703ff9b346d67822->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[29],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_355c96afa9e2c91e703ff9b346d67822);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_355c96afa9e2c91e703ff9b346d67822);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_355c96afa9e2c91e703ff9b346d67822, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_355c96afa9e2c91e703ff9b346d67822->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_355c96afa9e2c91e703ff9b346d67822, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_355c96afa9e2c91e703ff9b346d67822,
        type_description_1,
        par_self,
        par_renderer,
        var_path_in_disp,
        var_mutation_size,
        var_extended_path
    );


    // Release cached frame if used for exception.
    if (frame_355c96afa9e2c91e703ff9b346d67822 == cache_frame_355c96afa9e2c91e703ff9b346d67822) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_355c96afa9e2c91e703ff9b346d67822);
        cache_frame_355c96afa9e2c91e703ff9b346d67822 = NULL;
    }

    assertFrameObject(frame_355c96afa9e2c91e703ff9b346d67822);

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
    CHECK_OBJECT(var_path_in_disp);
    Py_DECREF(var_path_in_disp);
    var_path_in_disp = NULL;
    CHECK_OBJECT(var_mutation_size);
    Py_DECREF(var_mutation_size);
    var_mutation_size = NULL;
    CHECK_OBJECT(var_extended_path);
    Py_DECREF(var_extended_path);
    var_extended_path = NULL;
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

    Py_XDECREF(var_path_in_disp);
    var_path_in_disp = NULL;
    Py_XDECREF(var_mutation_size);
    var_mutation_size = NULL;
    Py_XDECREF(var_extended_path);
    var_extended_path = NULL;
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
    CHECK_OBJECT(par_renderer);
    Py_DECREF(par_renderer);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_renderer);
    Py_DECREF(par_renderer);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$axisartist$axisline_style$$$function__6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5046cbc956155017befd2d376520e35b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5046cbc956155017befd2d376520e35b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5046cbc956155017befd2d376520e35b)) {
        Py_XDECREF(cache_frame_5046cbc956155017befd2d376520e35b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5046cbc956155017befd2d376520e35b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5046cbc956155017befd2d376520e35b = MAKE_FUNCTION_FRAME(codeobj_5046cbc956155017befd2d376520e35b, module_mpl_toolkits$axisartist$axisline_style, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5046cbc956155017befd2d376520e35b->m_type_description == NULL);
    frame_5046cbc956155017befd2d376520e35b = cache_frame_5046cbc956155017befd2d376520e35b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5046cbc956155017befd2d376520e35b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5046cbc956155017befd2d376520e35b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 106;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_5046cbc956155017befd2d376520e35b->m_frame.f_lineno = 106;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[5]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5046cbc956155017befd2d376520e35b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5046cbc956155017befd2d376520e35b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5046cbc956155017befd2d376520e35b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5046cbc956155017befd2d376520e35b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5046cbc956155017befd2d376520e35b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5046cbc956155017befd2d376520e35b,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_5046cbc956155017befd2d376520e35b == cache_frame_5046cbc956155017befd2d376520e35b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5046cbc956155017befd2d376520e35b);
        cache_frame_5046cbc956155017befd2d376520e35b = NULL;
    }

    assertFrameObject(frame_5046cbc956155017befd2d376520e35b);

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
    Py_DECREF(par_self);    assert(exception_type);
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


static PyObject *impl_mpl_toolkits$axisartist$axisline_style$$$function__7___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_axis_artist = python_pars[1];
    PyObject *par_transform = python_pars[2];
    struct Nuitka_FrameObject *frame_845ff7842c52c007d226dd5335611ea6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_845ff7842c52c007d226dd5335611ea6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_845ff7842c52c007d226dd5335611ea6)) {
        Py_XDECREF(cache_frame_845ff7842c52c007d226dd5335611ea6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_845ff7842c52c007d226dd5335611ea6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_845ff7842c52c007d226dd5335611ea6 = MAKE_FUNCTION_FRAME(codeobj_845ff7842c52c007d226dd5335611ea6, module_mpl_toolkits$axisartist$axisline_style, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_845ff7842c52c007d226dd5335611ea6->m_type_description == NULL);
    frame_845ff7842c52c007d226dd5335611ea6 = cache_frame_845ff7842c52c007d226dd5335611ea6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_845ff7842c52c007d226dd5335611ea6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_845ff7842c52c007d226dd5335611ea6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_axis_artist);
        tmp_args_element_value_1 = par_axis_artist;
        CHECK_OBJECT(par_transform);
        tmp_args_element_value_2 = par_transform;
        frame_845ff7842c52c007d226dd5335611ea6->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[33],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_845ff7842c52c007d226dd5335611ea6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_845ff7842c52c007d226dd5335611ea6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_845ff7842c52c007d226dd5335611ea6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_845ff7842c52c007d226dd5335611ea6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_845ff7842c52c007d226dd5335611ea6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_845ff7842c52c007d226dd5335611ea6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_845ff7842c52c007d226dd5335611ea6,
        type_description_1,
        par_self,
        par_axis_artist,
        par_transform
    );


    // Release cached frame if used for exception.
    if (frame_845ff7842c52c007d226dd5335611ea6 == cache_frame_845ff7842c52c007d226dd5335611ea6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_845ff7842c52c007d226dd5335611ea6);
        cache_frame_845ff7842c52c007d226dd5335611ea6 = NULL;
    }

    assertFrameObject(frame_845ff7842c52c007d226dd5335611ea6);

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
    CHECK_OBJECT(par_axis_artist);
    Py_DECREF(par_axis_artist);
    CHECK_OBJECT(par_transform);
    Py_DECREF(par_transform);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_axis_artist);
    Py_DECREF(par_axis_artist);
    CHECK_OBJECT(par_transform);
    Py_DECREF(par_transform);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$axisartist$axisline_style$$$function__8___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_size = python_pars[1];
    struct Nuitka_FrameObject *frame_70f6fe176c9a9c80e7a1943a62247c1f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_70f6fe176c9a9c80e7a1943a62247c1f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_70f6fe176c9a9c80e7a1943a62247c1f)) {
        Py_XDECREF(cache_frame_70f6fe176c9a9c80e7a1943a62247c1f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_70f6fe176c9a9c80e7a1943a62247c1f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_70f6fe176c9a9c80e7a1943a62247c1f = MAKE_FUNCTION_FRAME(codeobj_70f6fe176c9a9c80e7a1943a62247c1f, module_mpl_toolkits$axisartist$axisline_style, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_70f6fe176c9a9c80e7a1943a62247c1f->m_type_description == NULL);
    frame_70f6fe176c9a9c80e7a1943a62247c1f = cache_frame_70f6fe176c9a9c80e7a1943a62247c1f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_70f6fe176c9a9c80e7a1943a62247c1f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_70f6fe176c9a9c80e7a1943a62247c1f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_size);
        tmp_assattr_value_1 = par_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 131;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_70f6fe176c9a9c80e7a1943a62247c1f->m_frame.f_lineno = 131;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[5]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_70f6fe176c9a9c80e7a1943a62247c1f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_70f6fe176c9a9c80e7a1943a62247c1f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_70f6fe176c9a9c80e7a1943a62247c1f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_70f6fe176c9a9c80e7a1943a62247c1f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70f6fe176c9a9c80e7a1943a62247c1f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_70f6fe176c9a9c80e7a1943a62247c1f,
        type_description_1,
        par_self,
        par_size,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_70f6fe176c9a9c80e7a1943a62247c1f == cache_frame_70f6fe176c9a9c80e7a1943a62247c1f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_70f6fe176c9a9c80e7a1943a62247c1f);
        cache_frame_70f6fe176c9a9c80e7a1943a62247c1f = NULL;
    }

    assertFrameObject(frame_70f6fe176c9a9c80e7a1943a62247c1f);

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
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$axisartist$axisline_style$$$function__9_new_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_axis_artist = python_pars[1];
    PyObject *par_transform = python_pars[2];
    PyObject *var_linepath = NULL;
    PyObject *var_axisline = NULL;
    struct Nuitka_FrameObject *frame_1335f6f58b3fb9af8d10f21da3ff040b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1335f6f58b3fb9af8d10f21da3ff040b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1335f6f58b3fb9af8d10f21da3ff040b)) {
        Py_XDECREF(cache_frame_1335f6f58b3fb9af8d10f21da3ff040b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1335f6f58b3fb9af8d10f21da3ff040b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1335f6f58b3fb9af8d10f21da3ff040b = MAKE_FUNCTION_FRAME(codeobj_1335f6f58b3fb9af8d10f21da3ff040b, module_mpl_toolkits$axisartist$axisline_style, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1335f6f58b3fb9af8d10f21da3ff040b->m_type_description == NULL);
    frame_1335f6f58b3fb9af8d10f21da3ff040b = cache_frame_1335f6f58b3fb9af8d10f21da3ff040b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1335f6f58b3fb9af8d10f21da3ff040b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1335f6f58b3fb9af8d10f21da3ff040b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_arg_element_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = LIST_COPY(mod_consts[37]);
        frame_1335f6f58b3fb9af8d10f21da3ff040b->m_frame.f_lineno = 135;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_linepath == NULL);
        var_linepath = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_axis_artist);
        tmp_kw_call_arg_value_0_1 = par_axis_artist;
        CHECK_OBJECT(var_linepath);
        tmp_kw_call_arg_value_1_1 = var_linepath;
        CHECK_OBJECT(par_transform);
        tmp_kw_call_arg_value_2_1 = par_transform;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[35]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 137;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_1335f6f58b3fb9af8d10f21da3ff040b->m_frame.f_lineno = 136;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[39]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_axisline == NULL);
        var_axisline = tmp_assign_source_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1335f6f58b3fb9af8d10f21da3ff040b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1335f6f58b3fb9af8d10f21da3ff040b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1335f6f58b3fb9af8d10f21da3ff040b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1335f6f58b3fb9af8d10f21da3ff040b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1335f6f58b3fb9af8d10f21da3ff040b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1335f6f58b3fb9af8d10f21da3ff040b,
        type_description_1,
        par_self,
        par_axis_artist,
        par_transform,
        var_linepath,
        var_axisline
    );


    // Release cached frame if used for exception.
    if (frame_1335f6f58b3fb9af8d10f21da3ff040b == cache_frame_1335f6f58b3fb9af8d10f21da3ff040b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1335f6f58b3fb9af8d10f21da3ff040b);
        cache_frame_1335f6f58b3fb9af8d10f21da3ff040b = NULL;
    }

    assertFrameObject(frame_1335f6f58b3fb9af8d10f21da3ff040b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_axisline);
    tmp_return_value = var_axisline;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_linepath);
    Py_DECREF(var_linepath);
    var_linepath = NULL;
    CHECK_OBJECT(var_axisline);
    Py_DECREF(var_axisline);
    var_axisline = NULL;
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

    Py_XDECREF(var_linepath);
    var_linepath = NULL;
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
    CHECK_OBJECT(par_axis_artist);
    Py_DECREF(par_axis_artist);
    CHECK_OBJECT(par_transform);
    Py_DECREF(par_transform);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_axis_artist);
    Py_DECREF(par_axis_artist);
    CHECK_OBJECT(par_transform);
    Py_DECREF(par_transform);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$axisartist$axisline_style$$$function__1___init__,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_bf0cafb216b0de22d6614485c45bb0ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$axisartist$axisline_style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__2_set_line_mutation_scale() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$axisartist$axisline_style$$$function__2_set_line_mutation_scale,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_a0c43dd193015db28f353d0387f5106f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$axisartist$axisline_style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__3__extend_path(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$axisartist$axisline_style$$$function__3__extend_path,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[75],
#endif
        codeobj_c3a174d551e8ec0ba9ecebc503b611da,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$axisartist$axisline_style,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__4_set_path() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$axisartist$axisline_style$$$function__4_set_path,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_c14dbd68cd9656150ce1aa16291ab027,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$axisartist$axisline_style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__5_draw() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$axisartist$axisline_style$$$function__5_draw,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_355c96afa9e2c91e703ff9b346d67822,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$axisartist$axisline_style,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__6___init__(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$axisartist$axisline_style$$$function__6___init__,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_5046cbc956155017befd2d376520e35b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$axisartist$axisline_style,
        mod_consts[32],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__7___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$axisartist$axisline_style$$$function__7___call__,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        mod_consts[90],
#endif
        codeobj_845ff7842c52c007d226dd5335611ea6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$axisartist$axisline_style,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__8___init__(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$axisartist$axisline_style$$$function__8___init__,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_70f6fe176c9a9c80e7a1943a62247c1f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$axisartist$axisline_style,
        mod_consts[36],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__9_new_line() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$axisartist$axisline_style$$$function__9_new_line,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_1335f6f58b3fb9af8d10f21da3ff040b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$axisartist$axisline_style,
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

function_impl_code functable_mpl_toolkits$axisartist$axisline_style[] = {
    impl_mpl_toolkits$axisartist$axisline_style$$$function__1___init__,
    impl_mpl_toolkits$axisartist$axisline_style$$$function__2_set_line_mutation_scale,
    impl_mpl_toolkits$axisartist$axisline_style$$$function__3__extend_path,
    impl_mpl_toolkits$axisartist$axisline_style$$$function__4_set_path,
    impl_mpl_toolkits$axisartist$axisline_style$$$function__5_draw,
    impl_mpl_toolkits$axisartist$axisline_style$$$function__6___init__,
    impl_mpl_toolkits$axisartist$axisline_style$$$function__7___call__,
    impl_mpl_toolkits$axisartist$axisline_style$$$function__8___init__,
    impl_mpl_toolkits$axisartist$axisline_style$$$function__9_new_line,
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

    function_impl_code *current = functable_mpl_toolkits$axisartist$axisline_style;
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

    if (offset > sizeof(functable_mpl_toolkits$axisartist$axisline_style) || offset < 0) {
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
        functable_mpl_toolkits$axisartist$axisline_style[offset],
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
        module_mpl_toolkits$axisartist$axisline_style,
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
PyObject *modulecode_mpl_toolkits$axisartist$axisline_style(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("mpl_toolkits.axisartist.axisline_style");

    // Store the module for future use.
    module_mpl_toolkits$axisartist$axisline_style = module;

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
        PRINT_STRING("mpl_toolkits.axisartist.axisline_style: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("mpl_toolkits.axisartist.axisline_style: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("mpl_toolkits.axisartist.axisline_style: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initmpl_toolkits$axisartist$axisline_style\n");

    moduledict_mpl_toolkits$axisartist$axisline_style = MODULE_DICT(module_mpl_toolkits$axisartist$axisline_style);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_mpl_toolkits$axisartist$axisline_style,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_mpl_toolkits$axisartist$axisline_style,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_mpl_toolkits$axisartist$axisline_style,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_mpl_toolkits$axisartist$axisline_style,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_mpl_toolkits$axisartist$axisline_style,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_mpl_toolkits$axisartist$axisline_style);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_mpl_toolkits$axisartist$axisline_style);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    struct Nuitka_CellObject *outline_4_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_5_var___class__ = Nuitka_Cell_Empty();
    PyObject *outline_6_var___class__ = NULL;
    PyObject *tmp_AxislineStyle$class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_AxislineStyle$class_creation_1__metaclass = NULL;
    PyObject *tmp_AxislineStyle$class_creation_1__prepared = NULL;
    PyObject *tmp_AxislineStyle$class_creation_2__bases = NULL;
    PyObject *tmp_AxislineStyle$class_creation_2__bases_orig = NULL;
    PyObject *tmp_AxislineStyle$class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_AxislineStyle$class_creation_2__metaclass = NULL;
    PyObject *tmp_AxislineStyle$class_creation_2__prepared = NULL;
    PyObject *tmp_AxislineStyle$class_creation_3__bases = NULL;
    PyObject *tmp_AxislineStyle$class_creation_3__bases_orig = NULL;
    PyObject *tmp_AxislineStyle$class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_AxislineStyle$class_creation_3__metaclass = NULL;
    PyObject *tmp_AxislineStyle$class_creation_3__prepared = NULL;
    PyObject *tmp__FancyAxislineStyle$class_creation_1__bases = NULL;
    PyObject *tmp__FancyAxislineStyle$class_creation_1__bases_orig = NULL;
    PyObject *tmp__FancyAxislineStyle$class_creation_1__class_decl_dict = NULL;
    PyObject *tmp__FancyAxislineStyle$class_creation_1__metaclass = NULL;
    PyObject *tmp__FancyAxislineStyle$class_creation_1__prepared = NULL;
    PyObject *tmp__FancyAxislineStyle$class_creation_2__bases = NULL;
    PyObject *tmp__FancyAxislineStyle$class_creation_2__bases_orig = NULL;
    PyObject *tmp__FancyAxislineStyle$class_creation_2__class_decl_dict = NULL;
    PyObject *tmp__FancyAxislineStyle$class_creation_2__metaclass = NULL;
    PyObject *tmp__FancyAxislineStyle$class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_ef670d06589f3ab6ab89ecff33f70fae;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_mpl_toolkits$axisartist$axisline_style$$$class__1__FancyAxislineStyle_10 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_5654ca8079994fa394f6f8908ffb5648_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *locals_mpl_toolkits$axisartist$axisline_style$$$class__2_SimpleArrow_11 = NULL;
    struct Nuitka_FrameObject *frame_98c0f55fa3ca238b6bbb32f42257640e_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_98c0f55fa3ca238b6bbb32f42257640e_3 = NULL;
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
    PyObject *locals_mpl_toolkits$axisartist$axisline_style$$$class__3_FilledArrow_69 = NULL;
    struct Nuitka_FrameObject *frame_c310fce43c84a3a27df056c308e5d027_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c310fce43c84a3a27df056c308e5d027_4 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_5654ca8079994fa394f6f8908ffb5648_2 = NULL;
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
    PyObject *locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74 = NULL;
    struct Nuitka_FrameObject *frame_5b687f1478b4a89a9db1b28fb56d6480_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *locals_mpl_toolkits$axisartist$axisline_style$$$class__5__Base_97 = NULL;
    struct Nuitka_FrameObject *frame_6f39a4feeb613fb8e8f58067a7ec50e1_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6f39a4feeb613fb8e8f58067a7ec50e1_6 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_mpl_toolkits$axisartist$axisline_style$$$class__6_SimpleArrow_115 = NULL;
    struct Nuitka_FrameObject *frame_1bf884ebc92cf84163307d5ce4aeac74_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_1bf884ebc92cf84163307d5ce4aeac74_7 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_mpl_toolkits$axisartist$axisline_style$$$class__7_FilledArrow_142 = NULL;
    struct Nuitka_FrameObject *frame_a68e06a85e7e5f341a620137d4d50a7c_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_a68e06a85e7e5f341a620137d4d50a7c_8 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_5b687f1478b4a89a9db1b28fb56d6480_5 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_ef670d06589f3ab6ab89ecff33f70fae = MAKE_MODULE_FRAME(codeobj_ef670d06589f3ab6ab89ecff33f70fae, module_mpl_toolkits$axisartist$axisline_style);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_ef670d06589f3ab6ab89ecff33f70fae);
    assert(Py_REFCNT(frame_ef670d06589f3ab6ab89ecff33f70fae) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[43], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[44], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[14];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_mpl_toolkits$axisartist$axisline_style;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[46];
        frame_ef670d06589f3ab6ab89ecff33f70fae->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[47];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_mpl_toolkits$axisartist$axisline_style;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[46];
        frame_ef670d06589f3ab6ab89ecff33f70fae->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[48];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_mpl_toolkits$axisartist$axisline_style;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[49];
        tmp_level_value_3 = mod_consts[46];
        frame_ef670d06589f3ab6ab89ecff33f70fae->m_frame.f_lineno = 5;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_mpl_toolkits$axisartist$axisline_style,
                mod_consts[50],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[50]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_mpl_toolkits$axisartist$axisline_style,
                mod_consts[4],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[4]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[51];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_mpl_toolkits$axisartist$axisline_style;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[52];
        tmp_level_value_4 = mod_consts[46];
        frame_ef670d06589f3ab6ab89ecff33f70fae->m_frame.f_lineno = 6;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_mpl_toolkits$axisartist$axisline_style,
                mod_consts[8],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[8]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[53];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_mpl_toolkits$axisartist$axisline_style;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[54];
        tmp_level_value_5 = mod_consts[46];
        frame_ef670d06589f3ab6ab89ecff33f70fae->m_frame.f_lineno = 7;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_mpl_toolkits$axisartist$axisline_style,
                mod_consts[19],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[55];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[55];
        \
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }

        assert(!(tmp_metaclass_value_1 == NULL));
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        condexpr_end_1:;
        tmp_bases_value_1 = mod_consts[56];
        tmp_assign_source_12 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[55];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[55];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 10;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_1 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_1, mod_consts[57]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[57]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        tmp_args_value_1 = mod_consts[58];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_ef670d06589f3ab6ab89ecff33f70fae->m_frame.f_lineno = 10;
        tmp_assign_source_13 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_3 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[59]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_value_1 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[61];
        tmp_getattr_default_1 = mod_consts[62];
        tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        tmp_right_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_type_arg_1;
            PyTuple_SET_ITEM(tmp_right_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_1 = tmp_class_creation_1__prepared;
            tmp_expression_value_4 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_4 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[61]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_value_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 10;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_14;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_mpl_toolkits$axisartist$axisline_style$$$class__1__FancyAxislineStyle_10 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__1__FancyAxislineStyle_10, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__1__FancyAxislineStyle_10, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_5654ca8079994fa394f6f8908ffb5648_2)) {
            Py_XDECREF(cache_frame_5654ca8079994fa394f6f8908ffb5648_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_5654ca8079994fa394f6f8908ffb5648_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_5654ca8079994fa394f6f8908ffb5648_2 = MAKE_FUNCTION_FRAME(codeobj_5654ca8079994fa394f6f8908ffb5648, module_mpl_toolkits$axisartist$axisline_style, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_5654ca8079994fa394f6f8908ffb5648_2->m_type_description == NULL);
        frame_5654ca8079994fa394f6f8908ffb5648_2 = cache_frame_5654ca8079994fa394f6f8908ffb5648_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_5654ca8079994fa394f6f8908ffb5648_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_5654ca8079994fa394f6f8908ffb5648_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_tuple_element_2;
            tmp_tuple_element_2 = PyObject_GetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__1__FancyAxislineStyle_10, mod_consts[4]);

            if (tmp_tuple_element_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[4]);

                    if (unlikely(tmp_tuple_element_2 == NULL)) {
                        tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
                    }

                    if (tmp_tuple_element_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 11;
                        type_description_2 = "o";
                        goto try_except_handler_5;
                    }
                    Py_INCREF(tmp_tuple_element_2);
                } else {
                    goto try_except_handler_5;
                }
            }

            tmp_assign_source_16 = PyTuple_New(1);
            PyTuple_SET_ITEM(tmp_assign_source_16, 0, tmp_tuple_element_2);
            assert(tmp__FancyAxislineStyle$class_creation_1__bases_orig == NULL);
            tmp__FancyAxislineStyle$class_creation_1__bases_orig = tmp_assign_source_16;
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_dircall_arg1_1;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__bases_orig);
            tmp_dircall_arg1_1 = tmp__FancyAxislineStyle$class_creation_1__bases_orig;
            Py_INCREF(tmp_dircall_arg1_1);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
                tmp_assign_source_17 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            assert(tmp__FancyAxislineStyle$class_creation_1__bases == NULL);
            tmp__FancyAxislineStyle$class_creation_1__bases = tmp_assign_source_17;
        }
        {
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = PyDict_New();
            assert(tmp__FancyAxislineStyle$class_creation_1__class_decl_dict == NULL);
            tmp__FancyAxislineStyle$class_creation_1__class_decl_dict = tmp_assign_source_18;
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_metaclass_value_2;
            bool tmp_condition_result_5;
            PyObject *tmp_key_value_4;
            PyObject *tmp_dict_arg_value_4;
            PyObject *tmp_dict_arg_value_5;
            PyObject *tmp_key_value_5;
            nuitka_bool tmp_condition_result_6;
            int tmp_truth_name_1;
            PyObject *tmp_type_arg_2;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_bases_value_2;
            tmp_key_value_4 = mod_consts[55];
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__class_decl_dict);
            tmp_dict_arg_value_4 = tmp__FancyAxislineStyle$class_creation_1__class_decl_dict;
            tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
            assert(!(tmp_res == -1));
            tmp_condition_result_5 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_5 != false) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__class_decl_dict);
            tmp_dict_arg_value_5 = tmp__FancyAxislineStyle$class_creation_1__class_decl_dict;
            tmp_key_value_5 = mod_consts[55];
            \
            tmp_metaclass_value_2 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
            if (tmp_metaclass_value_2 == NULL) {
                tmp_metaclass_value_2 = Py_None;
            }

            assert(!(tmp_metaclass_value_2 == NULL));
            Py_INCREF(tmp_metaclass_value_2);
            goto condexpr_end_2;
            condexpr_false_2:;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__bases);
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp__FancyAxislineStyle$class_creation_1__bases);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__bases);
            tmp_expression_value_5 = tmp__FancyAxislineStyle$class_creation_1__bases;
            tmp_subscript_value_1 = mod_consts[46];
            tmp_type_arg_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_1, 0);
            if (tmp_type_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_2);
            Py_DECREF(tmp_type_arg_2);
            if (tmp_metaclass_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_2);
            condexpr_end_3:;
            condexpr_end_2:;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__bases);
            tmp_bases_value_2 = tmp__FancyAxislineStyle$class_creation_1__bases;
            tmp_assign_source_19 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
            Py_DECREF(tmp_metaclass_value_2);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            assert(tmp__FancyAxislineStyle$class_creation_1__metaclass == NULL);
            tmp__FancyAxislineStyle$class_creation_1__metaclass = tmp_assign_source_19;
        }
        {
            bool tmp_condition_result_7;
            PyObject *tmp_key_value_6;
            PyObject *tmp_dict_arg_value_6;
            tmp_key_value_6 = mod_consts[55];
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__class_decl_dict);
            tmp_dict_arg_value_6 = tmp__FancyAxislineStyle$class_creation_1__class_decl_dict;
            tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
            assert(!(tmp_res == -1));
            tmp_condition_result_7 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_7 != false) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__class_decl_dict);
        tmp_dictdel_dict = tmp__FancyAxislineStyle$class_creation_1__class_decl_dict;
        tmp_dictdel_key = mod_consts[55];
        tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        branch_no_4:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_expression_value_6;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__metaclass);
            tmp_expression_value_6 = tmp__FancyAxislineStyle$class_creation_1__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[57]);
            tmp_condition_result_8 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__metaclass);
            tmp_expression_value_7 = tmp__FancyAxislineStyle$class_creation_1__metaclass;
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[57]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            tmp_tuple_element_3 = mod_consts[67];
            tmp_args_value_2 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__bases);
            tmp_tuple_element_3 = tmp__FancyAxislineStyle$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp__FancyAxislineStyle$class_creation_1__class_decl_dict;
            frame_5654ca8079994fa394f6f8908ffb5648_2->m_frame.f_lineno = 11;
            tmp_assign_source_20 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            assert(tmp__FancyAxislineStyle$class_creation_1__prepared == NULL);
            tmp__FancyAxislineStyle$class_creation_1__prepared = tmp_assign_source_20;
        }
        {
            bool tmp_condition_result_9;
            PyObject *tmp_operand_value_2;
            PyObject *tmp_expression_value_8;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__prepared);
            tmp_expression_value_8 = tmp__FancyAxislineStyle$class_creation_1__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_8, mod_consts[59]);
            tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            tmp_condition_result_9 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_9 != false) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_raise_value_2;
            PyObject *tmp_left_value_2;
            PyObject *tmp_right_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_getattr_target_2;
            PyObject *tmp_getattr_attr_2;
            PyObject *tmp_getattr_default_2;
            tmp_raise_type_2 = PyExc_TypeError;
            tmp_left_value_2 = mod_consts[60];
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__metaclass);
            tmp_getattr_target_2 = tmp__FancyAxislineStyle$class_creation_1__metaclass;
            tmp_getattr_attr_2 = mod_consts[61];
            tmp_getattr_default_2 = mod_consts[62];
            tmp_tuple_element_4 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            tmp_right_value_2 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_9;
                PyObject *tmp_type_arg_3;
                PyTuple_SET_ITEM(tmp_right_value_2, 0, tmp_tuple_element_4);
                CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__prepared);
                tmp_type_arg_3 = tmp__FancyAxislineStyle$class_creation_1__prepared;
                tmp_expression_value_9 = BUILTIN_TYPE1(tmp_type_arg_3);
                assert(!(tmp_expression_value_9 == NULL));
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[61]);
                Py_DECREF(tmp_expression_value_9);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 11;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_right_value_2, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_right_value_2);
            goto try_except_handler_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_2, tmp_right_value_2);
            Py_DECREF(tmp_right_value_2);
            if (tmp_raise_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            exception_type = tmp_raise_type_2;
            Py_INCREF(tmp_raise_type_2);
            exception_value = tmp_raise_value_2;
            exception_lineno = 11;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        branch_no_6:;
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = PyDict_New();
            assert(tmp__FancyAxislineStyle$class_creation_1__prepared == NULL);
            tmp__FancyAxislineStyle$class_creation_1__prepared = tmp_assign_source_21;
        }
        branch_end_5:;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__prepared);
            tmp_set_locals_2 = tmp__FancyAxislineStyle$class_creation_1__prepared;
            locals_mpl_toolkits$axisartist$axisline_style$$$class__2_SimpleArrow_11 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__2_SimpleArrow_11, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__2_SimpleArrow_11, mod_consts[40], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[69];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__2_SimpleArrow_11, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        if (isFrameUnusable(cache_frame_98c0f55fa3ca238b6bbb32f42257640e_3)) {
            Py_XDECREF(cache_frame_98c0f55fa3ca238b6bbb32f42257640e_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_98c0f55fa3ca238b6bbb32f42257640e_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_98c0f55fa3ca238b6bbb32f42257640e_3 = MAKE_FUNCTION_FRAME(codeobj_98c0f55fa3ca238b6bbb32f42257640e, module_mpl_toolkits$axisartist$axisline_style, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_98c0f55fa3ca238b6bbb32f42257640e_3->m_type_description == NULL);
        frame_98c0f55fa3ca238b6bbb32f42257640e_3 = cache_frame_98c0f55fa3ca238b6bbb32f42257640e_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_98c0f55fa3ca238b6bbb32f42257640e_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_98c0f55fa3ca238b6bbb32f42257640e_3) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[70];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__2_SimpleArrow_11, mod_consts[6], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_3 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__1___init__();

        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__2_SimpleArrow_11, mod_consts[5], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_3 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__2_set_line_mutation_scale();

        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__2_SimpleArrow_11, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_3 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[74];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__3__extend_path(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__2_SimpleArrow_11, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_3 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__4_set_path();

        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__2_SimpleArrow_11, mod_consts[76], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_3 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__5_draw();

        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__2_SimpleArrow_11, mod_consts[29], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_3 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_98c0f55fa3ca238b6bbb32f42257640e_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_98c0f55fa3ca238b6bbb32f42257640e_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_98c0f55fa3ca238b6bbb32f42257640e_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_98c0f55fa3ca238b6bbb32f42257640e_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_98c0f55fa3ca238b6bbb32f42257640e_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_98c0f55fa3ca238b6bbb32f42257640e_3,
            type_description_3,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_98c0f55fa3ca238b6bbb32f42257640e_3 == cache_frame_98c0f55fa3ca238b6bbb32f42257640e_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_98c0f55fa3ca238b6bbb32f42257640e_3);
            cache_frame_98c0f55fa3ca238b6bbb32f42257640e_3 = NULL;
        }

        assertFrameObject(frame_98c0f55fa3ca238b6bbb32f42257640e_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_2:;
        type_description_2 = "o";
        goto try_except_handler_7;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__bases);
            tmp_compexpr_left_1 = tmp__FancyAxislineStyle$class_creation_1__bases;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__bases_orig);
            tmp_compexpr_right_1 = tmp__FancyAxislineStyle$class_creation_1__bases_orig;
            tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
            assert(tmp_condition_result_10 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__bases_orig);
        tmp_dictset_value = tmp__FancyAxislineStyle$class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__2_SimpleArrow_11, mod_consts[79], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__metaclass);
            tmp_called_value_3 = tmp__FancyAxislineStyle$class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[67];
            tmp_args_value_3 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__bases);
            tmp_tuple_element_5 = tmp__FancyAxislineStyle$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_mpl_toolkits$axisartist$axisline_style$$$class__2_SimpleArrow_11;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__class_decl_dict);
            tmp_kwargs_value_3 = tmp__FancyAxislineStyle$class_creation_1__class_decl_dict;
            frame_5654ca8079994fa394f6f8908ffb5648_2->m_frame.f_lineno = 11;
            tmp_assign_source_22 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_22;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_dictset_value = outline_1_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_mpl_toolkits$axisartist$axisline_style$$$class__2_SimpleArrow_11);
        locals_mpl_toolkits$axisartist$axisline_style$$$class__2_SimpleArrow_11 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_mpl_toolkits$axisartist$axisline_style$$$class__2_SimpleArrow_11);
        locals_mpl_toolkits$axisartist$axisline_style$$$class__2_SimpleArrow_11 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 11;
        goto try_except_handler_5;
        outline_result_2:;
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__1__FancyAxislineStyle_10, mod_consts[67], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        goto try_end_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp__FancyAxislineStyle$class_creation_1__bases_orig);
        tmp__FancyAxislineStyle$class_creation_1__bases_orig = NULL;
        Py_XDECREF(tmp__FancyAxislineStyle$class_creation_1__bases);
        tmp__FancyAxislineStyle$class_creation_1__bases = NULL;
        Py_XDECREF(tmp__FancyAxislineStyle$class_creation_1__class_decl_dict);
        tmp__FancyAxislineStyle$class_creation_1__class_decl_dict = NULL;
        Py_XDECREF(tmp__FancyAxislineStyle$class_creation_1__metaclass);
        tmp__FancyAxislineStyle$class_creation_1__metaclass = NULL;
        Py_XDECREF(tmp__FancyAxislineStyle$class_creation_1__prepared);
        tmp__FancyAxislineStyle$class_creation_1__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_2;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__bases_orig);
        Py_DECREF(tmp__FancyAxislineStyle$class_creation_1__bases_orig);
        tmp__FancyAxislineStyle$class_creation_1__bases_orig = NULL;
        Py_XDECREF(tmp__FancyAxislineStyle$class_creation_1__bases);
        tmp__FancyAxislineStyle$class_creation_1__bases = NULL;
        Py_XDECREF(tmp__FancyAxislineStyle$class_creation_1__class_decl_dict);
        tmp__FancyAxislineStyle$class_creation_1__class_decl_dict = NULL;
        Py_XDECREF(tmp__FancyAxislineStyle$class_creation_1__metaclass);
        tmp__FancyAxislineStyle$class_creation_1__metaclass = NULL;
        CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_1__prepared);
        Py_DECREF(tmp__FancyAxislineStyle$class_creation_1__prepared);
        tmp__FancyAxislineStyle$class_creation_1__prepared = NULL;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_tuple_element_6;
            tmp_tuple_element_6 = PyObject_GetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__1__FancyAxislineStyle_10, mod_consts[67]);

            if (unlikely(tmp_tuple_element_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[67]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_assign_source_23 = PyTuple_New(1);
            PyTuple_SET_ITEM(tmp_assign_source_23, 0, tmp_tuple_element_6);
            assert(tmp__FancyAxislineStyle$class_creation_2__bases_orig == NULL);
            tmp__FancyAxislineStyle$class_creation_2__bases_orig = tmp_assign_source_23;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_dircall_arg1_2;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__bases_orig);
            tmp_dircall_arg1_2 = tmp__FancyAxislineStyle$class_creation_2__bases_orig;
            Py_INCREF(tmp_dircall_arg1_2);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
                tmp_assign_source_24 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            assert(tmp__FancyAxislineStyle$class_creation_2__bases == NULL);
            tmp__FancyAxislineStyle$class_creation_2__bases = tmp_assign_source_24;
        }
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = PyDict_New();
            assert(tmp__FancyAxislineStyle$class_creation_2__class_decl_dict == NULL);
            tmp__FancyAxislineStyle$class_creation_2__class_decl_dict = tmp_assign_source_25;
        }
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_metaclass_value_3;
            bool tmp_condition_result_11;
            PyObject *tmp_key_value_7;
            PyObject *tmp_dict_arg_value_7;
            PyObject *tmp_dict_arg_value_8;
            PyObject *tmp_key_value_8;
            nuitka_bool tmp_condition_result_12;
            int tmp_truth_name_2;
            PyObject *tmp_type_arg_4;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_bases_value_3;
            tmp_key_value_7 = mod_consts[55];
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__class_decl_dict);
            tmp_dict_arg_value_7 = tmp__FancyAxislineStyle$class_creation_2__class_decl_dict;
            tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_7, tmp_key_value_7);
            assert(!(tmp_res == -1));
            tmp_condition_result_11 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_11 != false) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__class_decl_dict);
            tmp_dict_arg_value_8 = tmp__FancyAxislineStyle$class_creation_2__class_decl_dict;
            tmp_key_value_8 = mod_consts[55];
            \
            tmp_metaclass_value_3 = DICT_GET_ITEM0(tmp_dict_arg_value_8, tmp_key_value_8);
            if (tmp_metaclass_value_3 == NULL) {
                tmp_metaclass_value_3 = Py_None;
            }

            assert(!(tmp_metaclass_value_3 == NULL));
            Py_INCREF(tmp_metaclass_value_3);
            goto condexpr_end_4;
            condexpr_false_4:;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__bases);
            tmp_truth_name_2 = CHECK_IF_TRUE(tmp__FancyAxislineStyle$class_creation_2__bases);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_condition_result_12 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__bases);
            tmp_expression_value_10 = tmp__FancyAxislineStyle$class_creation_2__bases;
            tmp_subscript_value_2 = mod_consts[46];
            tmp_type_arg_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_2, 0);
            if (tmp_type_arg_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_4);
            Py_DECREF(tmp_type_arg_4);
            if (tmp_metaclass_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_3);
            condexpr_end_5:;
            condexpr_end_4:;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__bases);
            tmp_bases_value_3 = tmp__FancyAxislineStyle$class_creation_2__bases;
            tmp_assign_source_26 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
            Py_DECREF(tmp_metaclass_value_3);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            assert(tmp__FancyAxislineStyle$class_creation_2__metaclass == NULL);
            tmp__FancyAxislineStyle$class_creation_2__metaclass = tmp_assign_source_26;
        }
        {
            bool tmp_condition_result_13;
            PyObject *tmp_key_value_9;
            PyObject *tmp_dict_arg_value_9;
            tmp_key_value_9 = mod_consts[55];
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__class_decl_dict);
            tmp_dict_arg_value_9 = tmp__FancyAxislineStyle$class_creation_2__class_decl_dict;
            tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_9, tmp_key_value_9);
            assert(!(tmp_res == -1));
            tmp_condition_result_13 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_13 != false) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__class_decl_dict);
        tmp_dictdel_dict = tmp__FancyAxislineStyle$class_creation_2__class_decl_dict;
        tmp_dictdel_key = mod_consts[55];
        tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_2 = "o";
            goto try_except_handler_8;
        }
        branch_no_8:;
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_expression_value_11;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__metaclass);
            tmp_expression_value_11 = tmp__FancyAxislineStyle$class_creation_2__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_11, mod_consts[57]);
            tmp_condition_result_14 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__metaclass);
            tmp_expression_value_12 = tmp__FancyAxislineStyle$class_creation_2__metaclass;
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[57]);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_tuple_element_7 = mod_consts[80];
            tmp_args_value_4 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__bases);
            tmp_tuple_element_7 = tmp__FancyAxislineStyle$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp__FancyAxislineStyle$class_creation_2__class_decl_dict;
            frame_5654ca8079994fa394f6f8908ffb5648_2->m_frame.f_lineno = 69;
            tmp_assign_source_27 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            assert(tmp__FancyAxislineStyle$class_creation_2__prepared == NULL);
            tmp__FancyAxislineStyle$class_creation_2__prepared = tmp_assign_source_27;
        }
        {
            bool tmp_condition_result_15;
            PyObject *tmp_operand_value_3;
            PyObject *tmp_expression_value_13;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__prepared);
            tmp_expression_value_13 = tmp__FancyAxislineStyle$class_creation_2__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_13, mod_consts[59]);
            tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_condition_result_15 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_15 != false) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_raise_value_3;
            PyObject *tmp_left_value_3;
            PyObject *tmp_right_value_3;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_getattr_target_3;
            PyObject *tmp_getattr_attr_3;
            PyObject *tmp_getattr_default_3;
            tmp_raise_type_3 = PyExc_TypeError;
            tmp_left_value_3 = mod_consts[60];
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__metaclass);
            tmp_getattr_target_3 = tmp__FancyAxislineStyle$class_creation_2__metaclass;
            tmp_getattr_attr_3 = mod_consts[61];
            tmp_getattr_default_3 = mod_consts[62];
            tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_right_value_3 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_14;
                PyObject *tmp_type_arg_5;
                PyTuple_SET_ITEM(tmp_right_value_3, 0, tmp_tuple_element_8);
                CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__prepared);
                tmp_type_arg_5 = tmp__FancyAxislineStyle$class_creation_2__prepared;
                tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_5);
                assert(!(tmp_expression_value_14 == NULL));
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[61]);
                Py_DECREF(tmp_expression_value_14);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_right_value_3, 1, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_right_value_3);
            goto try_except_handler_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_3, tmp_right_value_3);
            Py_DECREF(tmp_right_value_3);
            if (tmp_raise_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            exception_type = tmp_raise_type_3;
            Py_INCREF(tmp_raise_type_3);
            exception_value = tmp_raise_value_3;
            exception_lineno = 69;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_8;
        }
        branch_no_10:;
        goto branch_end_9;
        branch_no_9:;
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = PyDict_New();
            assert(tmp__FancyAxislineStyle$class_creation_2__prepared == NULL);
            tmp__FancyAxislineStyle$class_creation_2__prepared = tmp_assign_source_28;
        }
        branch_end_9:;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__prepared);
            tmp_set_locals_3 = tmp__FancyAxislineStyle$class_creation_2__prepared;
            locals_mpl_toolkits$axisartist$axisline_style$$$class__3_FilledArrow_69 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__3_FilledArrow_69, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__3_FilledArrow_69, mod_consts[40], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[81];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__3_FilledArrow_69, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        if (isFrameUnusable(cache_frame_c310fce43c84a3a27df056c308e5d027_4)) {
            Py_XDECREF(cache_frame_c310fce43c84a3a27df056c308e5d027_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c310fce43c84a3a27df056c308e5d027_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c310fce43c84a3a27df056c308e5d027_4 = MAKE_FUNCTION_FRAME(codeobj_c310fce43c84a3a27df056c308e5d027, module_mpl_toolkits$axisartist$axisline_style, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c310fce43c84a3a27df056c308e5d027_4->m_type_description == NULL);
        frame_c310fce43c84a3a27df056c308e5d027_4 = cache_frame_c310fce43c84a3a27df056c308e5d027_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c310fce43c84a3a27df056c308e5d027_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c310fce43c84a3a27df056c308e5d027_4) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[82];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__3_FilledArrow_69, mod_consts[6], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_3 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c310fce43c84a3a27df056c308e5d027_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c310fce43c84a3a27df056c308e5d027_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c310fce43c84a3a27df056c308e5d027_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c310fce43c84a3a27df056c308e5d027_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c310fce43c84a3a27df056c308e5d027_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c310fce43c84a3a27df056c308e5d027_4,
            type_description_3,
            outline_2_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c310fce43c84a3a27df056c308e5d027_4 == cache_frame_c310fce43c84a3a27df056c308e5d027_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c310fce43c84a3a27df056c308e5d027_4);
            cache_frame_c310fce43c84a3a27df056c308e5d027_4 = NULL;
        }

        assertFrameObject(frame_c310fce43c84a3a27df056c308e5d027_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_3:;
        type_description_2 = "o";
        goto try_except_handler_10;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__bases);
            tmp_compexpr_left_2 = tmp__FancyAxislineStyle$class_creation_2__bases;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__bases_orig);
            tmp_compexpr_right_2 = tmp__FancyAxislineStyle$class_creation_2__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
            assert(tmp_condition_result_16 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_11:;
        CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__bases_orig);
        tmp_dictset_value = tmp__FancyAxislineStyle$class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__3_FilledArrow_69, mod_consts[79], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        branch_no_11:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_5;
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__metaclass);
            tmp_called_value_5 = tmp__FancyAxislineStyle$class_creation_2__metaclass;
            tmp_tuple_element_9 = mod_consts[80];
            tmp_args_value_5 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__bases);
            tmp_tuple_element_9 = tmp__FancyAxislineStyle$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_mpl_toolkits$axisartist$axisline_style$$$class__3_FilledArrow_69;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__class_decl_dict);
            tmp_kwargs_value_5 = tmp__FancyAxislineStyle$class_creation_2__class_decl_dict;
            frame_5654ca8079994fa394f6f8908ffb5648_2->m_frame.f_lineno = 69;
            tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_dictset_value = outline_2_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_mpl_toolkits$axisartist$axisline_style$$$class__3_FilledArrow_69);
        locals_mpl_toolkits$axisartist$axisline_style$$$class__3_FilledArrow_69 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_mpl_toolkits$axisartist$axisline_style$$$class__3_FilledArrow_69);
        locals_mpl_toolkits$axisartist$axisline_style$$$class__3_FilledArrow_69 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
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

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 69;
        goto try_except_handler_8;
        outline_result_3:;
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__1__FancyAxislineStyle_10, mod_consts[80], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_2 = "o";
            goto try_except_handler_8;
        }
        goto try_end_3;
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

        CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__bases_orig);
        Py_DECREF(tmp__FancyAxislineStyle$class_creation_2__bases_orig);
        tmp__FancyAxislineStyle$class_creation_2__bases_orig = NULL;
        Py_XDECREF(tmp__FancyAxislineStyle$class_creation_2__bases);
        tmp__FancyAxislineStyle$class_creation_2__bases = NULL;
        Py_XDECREF(tmp__FancyAxislineStyle$class_creation_2__class_decl_dict);
        tmp__FancyAxislineStyle$class_creation_2__class_decl_dict = NULL;
        Py_XDECREF(tmp__FancyAxislineStyle$class_creation_2__metaclass);
        tmp__FancyAxislineStyle$class_creation_2__metaclass = NULL;
        Py_XDECREF(tmp__FancyAxislineStyle$class_creation_2__prepared);
        tmp__FancyAxislineStyle$class_creation_2__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_2;
        // End of try:
        try_end_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5654ca8079994fa394f6f8908ffb5648_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5654ca8079994fa394f6f8908ffb5648_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5654ca8079994fa394f6f8908ffb5648_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5654ca8079994fa394f6f8908ffb5648_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5654ca8079994fa394f6f8908ffb5648_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5654ca8079994fa394f6f8908ffb5648_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_5654ca8079994fa394f6f8908ffb5648_2 == cache_frame_5654ca8079994fa394f6f8908ffb5648_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_5654ca8079994fa394f6f8908ffb5648_2);
            cache_frame_5654ca8079994fa394f6f8908ffb5648_2 = NULL;
        }

        assertFrameObject(frame_5654ca8079994fa394f6f8908ffb5648_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_3:;
        CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__bases_orig);
        Py_DECREF(tmp__FancyAxislineStyle$class_creation_2__bases_orig);
        tmp__FancyAxislineStyle$class_creation_2__bases_orig = NULL;
        Py_XDECREF(tmp__FancyAxislineStyle$class_creation_2__bases);
        tmp__FancyAxislineStyle$class_creation_2__bases = NULL;
        Py_XDECREF(tmp__FancyAxislineStyle$class_creation_2__class_decl_dict);
        tmp__FancyAxislineStyle$class_creation_2__class_decl_dict = NULL;
        Py_XDECREF(tmp__FancyAxislineStyle$class_creation_2__metaclass);
        tmp__FancyAxislineStyle$class_creation_2__metaclass = NULL;
        CHECK_OBJECT(tmp__FancyAxislineStyle$class_creation_2__prepared);
        Py_DECREF(tmp__FancyAxislineStyle$class_creation_2__prepared);
        tmp__FancyAxislineStyle$class_creation_2__prepared = NULL;
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_6 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_10 = mod_consts[65];
            tmp_args_value_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_mpl_toolkits$axisartist$axisline_style$$$class__1__FancyAxislineStyle_10;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_1__class_decl_dict;
            frame_ef670d06589f3ab6ab89ecff33f70fae->m_frame.f_lineno = 10;
            tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_30;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_15 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_mpl_toolkits$axisartist$axisline_style$$$class__1__FancyAxislineStyle_10);
        locals_mpl_toolkits$axisartist$axisline_style$$$class__1__FancyAxislineStyle_10 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_mpl_toolkits$axisartist$axisline_style$$$class__1__FancyAxislineStyle_10);
        locals_mpl_toolkits$axisartist$axisline_style$$$class__1__FancyAxislineStyle_10 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 10;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_15);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_tuple_element_11;
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_11;
        }
        tmp_assign_source_31 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_31, 0, tmp_tuple_element_11);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_32 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_metaclass_value_4;
        bool tmp_condition_result_17;
        PyObject *tmp_key_value_10;
        PyObject *tmp_dict_arg_value_10;
        PyObject *tmp_dict_arg_value_11;
        PyObject *tmp_key_value_11;
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_6;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_4;
        tmp_key_value_10 = mod_consts[55];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_10 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_10, tmp_key_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_11 = tmp_class_creation_2__class_decl_dict;
        tmp_key_value_11 = mod_consts[55];
        \
        tmp_metaclass_value_4 = DICT_GET_ITEM0(tmp_dict_arg_value_11, tmp_key_value_11);
        if (tmp_metaclass_value_4 == NULL) {
            tmp_metaclass_value_4 = Py_None;
        }

        assert(!(tmp_metaclass_value_4 == NULL));
        Py_INCREF(tmp_metaclass_value_4);
        goto condexpr_end_6;
        condexpr_false_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_11;
        }
        tmp_condition_result_18 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_15 = tmp_class_creation_2__bases;
        tmp_subscript_value_3 = mod_consts[46];
        tmp_type_arg_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_15, tmp_subscript_value_3, 0);
        if (tmp_type_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_6);
        Py_DECREF(tmp_type_arg_6);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_11;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_7:;
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_4 = tmp_class_creation_2__bases;
        tmp_assign_source_34 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_key_value_12;
        PyObject *tmp_dict_arg_value_12;
        tmp_key_value_12 = mod_consts[55];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_12 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_12, tmp_key_value_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[55];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 74;

        goto try_except_handler_11;
    }
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_16 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_16, mod_consts[57]);
        tmp_condition_result_20 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_17 = tmp_class_creation_2__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[57]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_11;
        }
        tmp_tuple_element_12 = mod_consts[83];
        tmp_args_value_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_12 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_2__class_decl_dict;
        frame_ef670d06589f3ab6ab89ecff33f70fae->m_frame.f_lineno = 74;
        tmp_assign_source_35 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_35;
    }
    {
        bool tmp_condition_result_21;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_18 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_18, mod_consts[59]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_11;
        }
        tmp_condition_result_21 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_left_value_4 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_4 = mod_consts[61];
        tmp_getattr_default_4 = mod_consts[62];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_11;
        }
        tmp_right_value_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_19;
            PyObject *tmp_type_arg_7;
            PyTuple_SET_ITEM(tmp_right_value_4, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_7 = tmp_class_creation_2__prepared;
            tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_7);
            assert(!(tmp_expression_value_19 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[61]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_right_value_4, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_right_value_4);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_4, tmp_right_value_4);
        Py_DECREF(tmp_right_value_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 74;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_36;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_4 = tmp_class_creation_2__prepared;
            locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[84];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74, mod_consts[40], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[83];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_13;
        }
        if (isFrameUnusable(cache_frame_5b687f1478b4a89a9db1b28fb56d6480_5)) {
            Py_XDECREF(cache_frame_5b687f1478b4a89a9db1b28fb56d6480_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_5b687f1478b4a89a9db1b28fb56d6480_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_5b687f1478b4a89a9db1b28fb56d6480_5 = MAKE_FUNCTION_FRAME(codeobj_5b687f1478b4a89a9db1b28fb56d6480, module_mpl_toolkits$axisartist$axisline_style, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_5b687f1478b4a89a9db1b28fb56d6480_5->m_type_description == NULL);
        frame_5b687f1478b4a89a9db1b28fb56d6480_5 = cache_frame_5b687f1478b4a89a9db1b28fb56d6480_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_5b687f1478b4a89a9db1b28fb56d6480_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_5b687f1478b4a89a9db1b28fb56d6480_5) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = PyDict_New();
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74, mod_consts[85], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_assign_source_38;
            tmp_assign_source_38 = PyDict_New();
            assert(tmp_AxislineStyle$class_creation_1__class_decl_dict == NULL);
            tmp_AxislineStyle$class_creation_1__class_decl_dict = tmp_assign_source_38;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_metaclass_value_5;
            bool tmp_condition_result_22;
            PyObject *tmp_key_value_13;
            PyObject *tmp_dict_arg_value_13;
            PyObject *tmp_dict_arg_value_14;
            PyObject *tmp_key_value_14;
            PyObject *tmp_bases_value_5;
            tmp_key_value_13 = mod_consts[55];
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_1__class_decl_dict);
            tmp_dict_arg_value_13 = tmp_AxislineStyle$class_creation_1__class_decl_dict;
            tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_13, tmp_key_value_13);
            assert(!(tmp_res == -1));
            tmp_condition_result_22 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_22 != false) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_1__class_decl_dict);
            tmp_dict_arg_value_14 = tmp_AxislineStyle$class_creation_1__class_decl_dict;
            tmp_key_value_14 = mod_consts[55];
            \
            tmp_metaclass_value_5 = DICT_GET_ITEM0(tmp_dict_arg_value_14, tmp_key_value_14);
            if (tmp_metaclass_value_5 == NULL) {
                tmp_metaclass_value_5 = Py_None;
            }

            assert(!(tmp_metaclass_value_5 == NULL));
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
            condexpr_end_8:;
            tmp_bases_value_5 = mod_consts[56];
            tmp_assign_source_39 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            assert(tmp_AxislineStyle$class_creation_1__metaclass == NULL);
            tmp_AxislineStyle$class_creation_1__metaclass = tmp_assign_source_39;
        }
        {
            bool tmp_condition_result_23;
            PyObject *tmp_key_value_15;
            PyObject *tmp_dict_arg_value_15;
            tmp_key_value_15 = mod_consts[55];
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_1__class_decl_dict);
            tmp_dict_arg_value_15 = tmp_AxislineStyle$class_creation_1__class_decl_dict;
            tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_15, tmp_key_value_15);
            assert(!(tmp_res == -1));
            tmp_condition_result_23 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_23 != false) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_AxislineStyle$class_creation_1__class_decl_dict);
        tmp_dictdel_dict = tmp_AxislineStyle$class_creation_1__class_decl_dict;
        tmp_dictdel_key = mod_consts[55];
        tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_2 = "o";
            goto try_except_handler_14;
        }
        branch_no_15:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_expression_value_20;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_1__metaclass);
            tmp_expression_value_20 = tmp_AxislineStyle$class_creation_1__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_20, mod_consts[57]);
            tmp_condition_result_24 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_args_value_8;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_1__metaclass);
            tmp_expression_value_21 = tmp_AxislineStyle$class_creation_1__metaclass;
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[57]);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_args_value_8 = mod_consts[86];
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_1__class_decl_dict);
            tmp_kwargs_value_8 = tmp_AxislineStyle$class_creation_1__class_decl_dict;
            frame_5b687f1478b4a89a9db1b28fb56d6480_5->m_frame.f_lineno = 97;
            tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_called_value_8);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            assert(tmp_AxislineStyle$class_creation_1__prepared == NULL);
            tmp_AxislineStyle$class_creation_1__prepared = tmp_assign_source_40;
        }
        {
            bool tmp_condition_result_25;
            PyObject *tmp_operand_value_5;
            PyObject *tmp_expression_value_22;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_1__prepared);
            tmp_expression_value_22 = tmp_AxislineStyle$class_creation_1__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[59]);
            tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_condition_result_25 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_25 != false) {
                goto branch_yes_17;
            } else {
                goto branch_no_17;
            }
        }
        branch_yes_17:;
        {
            PyObject *tmp_raise_type_5;
            PyObject *tmp_raise_value_5;
            PyObject *tmp_left_value_5;
            PyObject *tmp_right_value_5;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_getattr_target_5;
            PyObject *tmp_getattr_attr_5;
            PyObject *tmp_getattr_default_5;
            tmp_raise_type_5 = PyExc_TypeError;
            tmp_left_value_5 = mod_consts[60];
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_1__metaclass);
            tmp_getattr_target_5 = tmp_AxislineStyle$class_creation_1__metaclass;
            tmp_getattr_attr_5 = mod_consts[61];
            tmp_getattr_default_5 = mod_consts[62];
            tmp_tuple_element_14 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_right_value_5 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_23;
                PyObject *tmp_type_arg_8;
                PyTuple_SET_ITEM(tmp_right_value_5, 0, tmp_tuple_element_14);
                CHECK_OBJECT(tmp_AxislineStyle$class_creation_1__prepared);
                tmp_type_arg_8 = tmp_AxislineStyle$class_creation_1__prepared;
                tmp_expression_value_23 = BUILTIN_TYPE1(tmp_type_arg_8);
                assert(!(tmp_expression_value_23 == NULL));
                tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[61]);
                Py_DECREF(tmp_expression_value_23);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_right_value_5, 1, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_right_value_5);
            goto try_except_handler_14;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_5, tmp_right_value_5);
            Py_DECREF(tmp_right_value_5);
            if (tmp_raise_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            exception_type = tmp_raise_type_5;
            Py_INCREF(tmp_raise_type_5);
            exception_value = tmp_raise_value_5;
            exception_lineno = 97;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_14;
        }
        branch_no_17:;
        goto branch_end_16;
        branch_no_16:;
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = PyDict_New();
            assert(tmp_AxislineStyle$class_creation_1__prepared == NULL);
            tmp_AxislineStyle$class_creation_1__prepared = tmp_assign_source_41;
        }
        branch_end_16:;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_1__prepared);
            tmp_set_locals_5 = tmp_AxislineStyle$class_creation_1__prepared;
            locals_mpl_toolkits$axisartist$axisline_style$$$class__5__Base_97 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__5__Base_97, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__5__Base_97, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        if (isFrameUnusable(cache_frame_6f39a4feeb613fb8e8f58067a7ec50e1_6)) {
            Py_XDECREF(cache_frame_6f39a4feeb613fb8e8f58067a7ec50e1_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6f39a4feeb613fb8e8f58067a7ec50e1_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6f39a4feeb613fb8e8f58067a7ec50e1_6 = MAKE_FUNCTION_FRAME(codeobj_6f39a4feeb613fb8e8f58067a7ec50e1, module_mpl_toolkits$axisartist$axisline_style, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_6f39a4feeb613fb8e8f58067a7ec50e1_6->m_type_description == NULL);
        frame_6f39a4feeb613fb8e8f58067a7ec50e1_6 = cache_frame_6f39a4feeb613fb8e8f58067a7ec50e1_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_6f39a4feeb613fb8e8f58067a7ec50e1_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_6f39a4feeb613fb8e8f58067a7ec50e1_6) == 2); // Frame stack

        // Framed code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_4_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__6___init__(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__5__Base_97, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_3 = "c";
                goto frame_exception_exit_6;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__7___call__();

        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__5__Base_97, mod_consts[89], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_3 = "c";
            goto frame_exception_exit_6;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6f39a4feeb613fb8e8f58067a7ec50e1_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6f39a4feeb613fb8e8f58067a7ec50e1_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6f39a4feeb613fb8e8f58067a7ec50e1_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6f39a4feeb613fb8e8f58067a7ec50e1_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6f39a4feeb613fb8e8f58067a7ec50e1_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6f39a4feeb613fb8e8f58067a7ec50e1_6,
            type_description_3,
            outline_4_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_6f39a4feeb613fb8e8f58067a7ec50e1_6 == cache_frame_6f39a4feeb613fb8e8f58067a7ec50e1_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_6f39a4feeb613fb8e8f58067a7ec50e1_6);
            cache_frame_6f39a4feeb613fb8e8f58067a7ec50e1_6 = NULL;
        }

        assertFrameObject(frame_6f39a4feeb613fb8e8f58067a7ec50e1_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_5:;
        type_description_2 = "o";
        goto try_except_handler_16;
        skip_nested_handling_4:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_9;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_1__metaclass);
            tmp_called_value_9 = tmp_AxislineStyle$class_creation_1__metaclass;
            tmp_tuple_element_15 = mod_consts[91];
            tmp_args_value_9 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_15);
            tmp_tuple_element_15 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_mpl_toolkits$axisartist$axisline_style$$$class__5__Base_97;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_1__class_decl_dict);
            tmp_kwargs_value_9 = tmp_AxislineStyle$class_creation_1__class_decl_dict;
            frame_5b687f1478b4a89a9db1b28fb56d6480_5->m_frame.f_lineno = 97;
            tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(Nuitka_Cell_GET(outline_4_var___class__) == NULL);
            PyCell_SET(outline_4_var___class__, tmp_assign_source_42);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_4_var___class__));
        tmp_dictset_value = Nuitka_Cell_GET(outline_4_var___class__);
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_mpl_toolkits$axisartist$axisline_style$$$class__5__Base_97);
        locals_mpl_toolkits$axisartist$axisline_style$$$class__5__Base_97 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_mpl_toolkits$axisartist$axisline_style$$$class__5__Base_97);
        locals_mpl_toolkits$axisartist$axisline_style$$$class__5__Base_97 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
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

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 97;
        goto try_except_handler_14;
        outline_result_5:;
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74, mod_consts[91], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_2 = "o";
            goto try_except_handler_14;
        }
        goto try_end_5;
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

        Py_XDECREF(tmp_AxislineStyle$class_creation_1__class_decl_dict);
        tmp_AxislineStyle$class_creation_1__class_decl_dict = NULL;
        Py_XDECREF(tmp_AxislineStyle$class_creation_1__metaclass);
        tmp_AxislineStyle$class_creation_1__metaclass = NULL;
        Py_XDECREF(tmp_AxislineStyle$class_creation_1__prepared);
        tmp_AxislineStyle$class_creation_1__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto frame_exception_exit_5;
        // End of try:
        try_end_5:;
        Py_XDECREF(tmp_AxislineStyle$class_creation_1__class_decl_dict);
        tmp_AxislineStyle$class_creation_1__class_decl_dict = NULL;
        Py_XDECREF(tmp_AxislineStyle$class_creation_1__metaclass);
        tmp_AxislineStyle$class_creation_1__metaclass = NULL;
        CHECK_OBJECT(tmp_AxislineStyle$class_creation_1__prepared);
        Py_DECREF(tmp_AxislineStyle$class_creation_1__prepared);
        tmp_AxislineStyle$class_creation_1__prepared = NULL;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_tuple_element_16;
            tmp_tuple_element_16 = PyObject_GetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74, mod_consts[91]);

            if (unlikely(tmp_tuple_element_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_assign_source_43 = PyTuple_New(1);
            PyTuple_SET_ITEM(tmp_assign_source_43, 0, tmp_tuple_element_16);
            assert(tmp_AxislineStyle$class_creation_2__bases_orig == NULL);
            tmp_AxislineStyle$class_creation_2__bases_orig = tmp_assign_source_43;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_dircall_arg1_4;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__bases_orig);
            tmp_dircall_arg1_4 = tmp_AxislineStyle$class_creation_2__bases_orig;
            Py_INCREF(tmp_dircall_arg1_4);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
                tmp_assign_source_44 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            assert(tmp_AxislineStyle$class_creation_2__bases == NULL);
            tmp_AxislineStyle$class_creation_2__bases = tmp_assign_source_44;
        }
        {
            PyObject *tmp_assign_source_45;
            tmp_assign_source_45 = PyDict_New();
            assert(tmp_AxislineStyle$class_creation_2__class_decl_dict == NULL);
            tmp_AxislineStyle$class_creation_2__class_decl_dict = tmp_assign_source_45;
        }
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_metaclass_value_6;
            bool tmp_condition_result_26;
            PyObject *tmp_key_value_16;
            PyObject *tmp_dict_arg_value_16;
            PyObject *tmp_dict_arg_value_17;
            PyObject *tmp_key_value_17;
            nuitka_bool tmp_condition_result_27;
            int tmp_truth_name_4;
            PyObject *tmp_type_arg_9;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_bases_value_6;
            tmp_key_value_16 = mod_consts[55];
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__class_decl_dict);
            tmp_dict_arg_value_16 = tmp_AxislineStyle$class_creation_2__class_decl_dict;
            tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_16, tmp_key_value_16);
            assert(!(tmp_res == -1));
            tmp_condition_result_26 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_26 != false) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__class_decl_dict);
            tmp_dict_arg_value_17 = tmp_AxislineStyle$class_creation_2__class_decl_dict;
            tmp_key_value_17 = mod_consts[55];
            \
            tmp_metaclass_value_6 = DICT_GET_ITEM0(tmp_dict_arg_value_17, tmp_key_value_17);
            if (tmp_metaclass_value_6 == NULL) {
                tmp_metaclass_value_6 = Py_None;
            }

            assert(!(tmp_metaclass_value_6 == NULL));
            Py_INCREF(tmp_metaclass_value_6);
            goto condexpr_end_9;
            condexpr_false_9:;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__bases);
            tmp_truth_name_4 = CHECK_IF_TRUE(tmp_AxislineStyle$class_creation_2__bases);
            if (tmp_truth_name_4 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_condition_result_27 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__bases);
            tmp_expression_value_24 = tmp_AxislineStyle$class_creation_2__bases;
            tmp_subscript_value_4 = mod_consts[46];
            tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_24, tmp_subscript_value_4, 0);
            if (tmp_type_arg_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_9);
            Py_DECREF(tmp_type_arg_9);
            if (tmp_metaclass_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_6);
            condexpr_end_10:;
            condexpr_end_9:;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__bases);
            tmp_bases_value_6 = tmp_AxislineStyle$class_creation_2__bases;
            tmp_assign_source_46 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
            Py_DECREF(tmp_metaclass_value_6);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            assert(tmp_AxislineStyle$class_creation_2__metaclass == NULL);
            tmp_AxislineStyle$class_creation_2__metaclass = tmp_assign_source_46;
        }
        {
            bool tmp_condition_result_28;
            PyObject *tmp_key_value_18;
            PyObject *tmp_dict_arg_value_18;
            tmp_key_value_18 = mod_consts[55];
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__class_decl_dict);
            tmp_dict_arg_value_18 = tmp_AxislineStyle$class_creation_2__class_decl_dict;
            tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_18, tmp_key_value_18);
            assert(!(tmp_res == -1));
            tmp_condition_result_28 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_28 != false) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__class_decl_dict);
        tmp_dictdel_dict = tmp_AxislineStyle$class_creation_2__class_decl_dict;
        tmp_dictdel_key = mod_consts[55];
        tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_2 = "o";
            goto try_except_handler_17;
        }
        branch_no_18:;
        {
            nuitka_bool tmp_condition_result_29;
            PyObject *tmp_expression_value_25;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__metaclass);
            tmp_expression_value_25 = tmp_AxislineStyle$class_creation_2__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_25, mod_consts[57]);
            tmp_condition_result_29 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
                goto branch_yes_19;
            } else {
                goto branch_no_19;
            }
        }
        branch_yes_19:;
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__metaclass);
            tmp_expression_value_26 = tmp_AxislineStyle$class_creation_2__metaclass;
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[57]);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_tuple_element_17 = mod_consts[67];
            tmp_args_value_10 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__bases);
            tmp_tuple_element_17 = tmp_AxislineStyle$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__class_decl_dict);
            tmp_kwargs_value_10 = tmp_AxislineStyle$class_creation_2__class_decl_dict;
            frame_5b687f1478b4a89a9db1b28fb56d6480_5->m_frame.f_lineno = 115;
            tmp_assign_source_47 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            assert(tmp_AxislineStyle$class_creation_2__prepared == NULL);
            tmp_AxislineStyle$class_creation_2__prepared = tmp_assign_source_47;
        }
        {
            bool tmp_condition_result_30;
            PyObject *tmp_operand_value_6;
            PyObject *tmp_expression_value_27;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__prepared);
            tmp_expression_value_27 = tmp_AxislineStyle$class_creation_2__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_27, mod_consts[59]);
            tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_condition_result_30 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_30 != false) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
        }
        branch_yes_20:;
        {
            PyObject *tmp_raise_type_6;
            PyObject *tmp_raise_value_6;
            PyObject *tmp_left_value_6;
            PyObject *tmp_right_value_6;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_getattr_target_6;
            PyObject *tmp_getattr_attr_6;
            PyObject *tmp_getattr_default_6;
            tmp_raise_type_6 = PyExc_TypeError;
            tmp_left_value_6 = mod_consts[60];
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__metaclass);
            tmp_getattr_target_6 = tmp_AxislineStyle$class_creation_2__metaclass;
            tmp_getattr_attr_6 = mod_consts[61];
            tmp_getattr_default_6 = mod_consts[62];
            tmp_tuple_element_18 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_right_value_6 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_28;
                PyObject *tmp_type_arg_10;
                PyTuple_SET_ITEM(tmp_right_value_6, 0, tmp_tuple_element_18);
                CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__prepared);
                tmp_type_arg_10 = tmp_AxislineStyle$class_creation_2__prepared;
                tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_10);
                assert(!(tmp_expression_value_28 == NULL));
                tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[61]);
                Py_DECREF(tmp_expression_value_28);
                if (tmp_tuple_element_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 115;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_right_value_6, 1, tmp_tuple_element_18);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_right_value_6);
            goto try_except_handler_17;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_6, tmp_right_value_6);
            Py_DECREF(tmp_right_value_6);
            if (tmp_raise_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            exception_type = tmp_raise_type_6;
            Py_INCREF(tmp_raise_type_6);
            exception_value = tmp_raise_value_6;
            exception_lineno = 115;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_17;
        }
        branch_no_20:;
        goto branch_end_19;
        branch_no_19:;
        {
            PyObject *tmp_assign_source_48;
            tmp_assign_source_48 = PyDict_New();
            assert(tmp_AxislineStyle$class_creation_2__prepared == NULL);
            tmp_AxislineStyle$class_creation_2__prepared = tmp_assign_source_48;
        }
        branch_end_19:;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__prepared);
            tmp_set_locals_6 = tmp_AxislineStyle$class_creation_2__prepared;
            locals_mpl_toolkits$axisartist$axisline_style$$$class__6_SimpleArrow_115 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__6_SimpleArrow_115, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_2 = "o";
            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__6_SimpleArrow_115, mod_consts[40], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_2 = "o";
            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__6_SimpleArrow_115, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_2 = "o";
            goto try_except_handler_19;
        }
        if (isFrameUnusable(cache_frame_1bf884ebc92cf84163307d5ce4aeac74_7)) {
            Py_XDECREF(cache_frame_1bf884ebc92cf84163307d5ce4aeac74_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_1bf884ebc92cf84163307d5ce4aeac74_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_1bf884ebc92cf84163307d5ce4aeac74_7 = MAKE_FUNCTION_FRAME(codeobj_1bf884ebc92cf84163307d5ce4aeac74, module_mpl_toolkits$axisartist$axisline_style, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_1bf884ebc92cf84163307d5ce4aeac74_7->m_type_description == NULL);
        frame_1bf884ebc92cf84163307d5ce4aeac74_7 = cache_frame_1bf884ebc92cf84163307d5ce4aeac74_7;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_1bf884ebc92cf84163307d5ce4aeac74_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_1bf884ebc92cf84163307d5ce4aeac74_7) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_expression_value_29;
            tmp_expression_value_29 = PyObject_GetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__6_SimpleArrow_115, mod_consts[65]);

            if (tmp_expression_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[65]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 120;
                        type_description_3 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_29);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[67]);
            Py_DECREF(tmp_expression_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_3 = "c";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__6_SimpleArrow_115, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_3 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_defaults_2;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_defaults_2 = mod_consts[94];
            Py_INCREF(tmp_defaults_2);

            tmp_closure_2[0] = outline_5_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__8___init__(tmp_defaults_2, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__6_SimpleArrow_115, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_3 = "c";
                goto frame_exception_exit_7;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_mpl_toolkits$axisartist$axisline_style$$$function__9_new_line();

        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__6_SimpleArrow_115, mod_consts[33], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_3 = "c";
            goto frame_exception_exit_7;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1bf884ebc92cf84163307d5ce4aeac74_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1bf884ebc92cf84163307d5ce4aeac74_7);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1bf884ebc92cf84163307d5ce4aeac74_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1bf884ebc92cf84163307d5ce4aeac74_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1bf884ebc92cf84163307d5ce4aeac74_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1bf884ebc92cf84163307d5ce4aeac74_7,
            type_description_3,
            outline_5_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_1bf884ebc92cf84163307d5ce4aeac74_7 == cache_frame_1bf884ebc92cf84163307d5ce4aeac74_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_1bf884ebc92cf84163307d5ce4aeac74_7);
            cache_frame_1bf884ebc92cf84163307d5ce4aeac74_7 = NULL;
        }

        assertFrameObject(frame_1bf884ebc92cf84163307d5ce4aeac74_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_6:;
        type_description_2 = "o";
        goto try_except_handler_19;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_31;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__bases);
            tmp_compexpr_left_3 = tmp_AxislineStyle$class_creation_2__bases;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__bases_orig);
            tmp_compexpr_right_3 = tmp_AxislineStyle$class_creation_2__bases_orig;
            tmp_condition_result_31 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_condition_result_31 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
            if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
            assert(tmp_condition_result_31 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__bases_orig);
        tmp_dictset_value = tmp_AxislineStyle$class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__6_SimpleArrow_115, mod_consts[79], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_2 = "o";
            goto try_except_handler_19;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kwargs_value_11;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__metaclass);
            tmp_called_value_11 = tmp_AxislineStyle$class_creation_2__metaclass;
            tmp_tuple_element_19 = mod_consts[67];
            tmp_args_value_11 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__bases);
            tmp_tuple_element_19 = tmp_AxislineStyle$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = locals_mpl_toolkits$axisartist$axisline_style$$$class__6_SimpleArrow_115;
            PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__class_decl_dict);
            tmp_kwargs_value_11 = tmp_AxislineStyle$class_creation_2__class_decl_dict;
            frame_5b687f1478b4a89a9db1b28fb56d6480_5->m_frame.f_lineno = 115;
            tmp_assign_source_49 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_11);
            if (tmp_assign_source_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
            assert(Nuitka_Cell_GET(outline_5_var___class__) == NULL);
            PyCell_SET(outline_5_var___class__, tmp_assign_source_49);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_5_var___class__));
        tmp_dictset_value = Nuitka_Cell_GET(outline_5_var___class__);
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_mpl_toolkits$axisartist$axisline_style$$$class__6_SimpleArrow_115);
        locals_mpl_toolkits$axisartist$axisline_style$$$class__6_SimpleArrow_115 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_mpl_toolkits$axisartist$axisline_style$$$class__6_SimpleArrow_115);
        locals_mpl_toolkits$axisartist$axisline_style$$$class__6_SimpleArrow_115 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

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
        exception_lineno = 115;
        goto try_except_handler_17;
        outline_result_6:;
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74, mod_consts[67], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_2 = "o";
            goto try_except_handler_17;
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__bases_orig);
        Py_DECREF(tmp_AxislineStyle$class_creation_2__bases_orig);
        tmp_AxislineStyle$class_creation_2__bases_orig = NULL;
        Py_XDECREF(tmp_AxislineStyle$class_creation_2__bases);
        tmp_AxislineStyle$class_creation_2__bases = NULL;
        Py_XDECREF(tmp_AxislineStyle$class_creation_2__class_decl_dict);
        tmp_AxislineStyle$class_creation_2__class_decl_dict = NULL;
        Py_XDECREF(tmp_AxislineStyle$class_creation_2__metaclass);
        tmp_AxislineStyle$class_creation_2__metaclass = NULL;
        Py_XDECREF(tmp_AxislineStyle$class_creation_2__prepared);
        tmp_AxislineStyle$class_creation_2__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto frame_exception_exit_5;
        // End of try:
        try_end_6:;
        CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__bases_orig);
        Py_DECREF(tmp_AxislineStyle$class_creation_2__bases_orig);
        tmp_AxislineStyle$class_creation_2__bases_orig = NULL;
        Py_XDECREF(tmp_AxislineStyle$class_creation_2__bases);
        tmp_AxislineStyle$class_creation_2__bases = NULL;
        Py_XDECREF(tmp_AxislineStyle$class_creation_2__class_decl_dict);
        tmp_AxislineStyle$class_creation_2__class_decl_dict = NULL;
        Py_XDECREF(tmp_AxislineStyle$class_creation_2__metaclass);
        tmp_AxislineStyle$class_creation_2__metaclass = NULL;
        CHECK_OBJECT(tmp_AxislineStyle$class_creation_2__prepared);
        Py_DECREF(tmp_AxislineStyle$class_creation_2__prepared);
        tmp_AxislineStyle$class_creation_2__prepared = NULL;
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = PyObject_GetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74, mod_consts[67]);

            if (unlikely(tmp_ass_subvalue_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[67]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subvalue_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_1 = PyObject_GetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74, mod_consts[85]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_1);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[85]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_1);

                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_1 = mod_consts[70];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            Py_DECREF(tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_tuple_element_20;
            tmp_tuple_element_20 = PyObject_GetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74, mod_consts[67]);

            if (unlikely(tmp_tuple_element_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[67]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_assign_source_50 = PyTuple_New(1);
            PyTuple_SET_ITEM(tmp_assign_source_50, 0, tmp_tuple_element_20);
            assert(tmp_AxislineStyle$class_creation_3__bases_orig == NULL);
            tmp_AxislineStyle$class_creation_3__bases_orig = tmp_assign_source_50;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_dircall_arg1_5;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__bases_orig);
            tmp_dircall_arg1_5 = tmp_AxislineStyle$class_creation_3__bases_orig;
            Py_INCREF(tmp_dircall_arg1_5);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
                tmp_assign_source_51 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            assert(tmp_AxislineStyle$class_creation_3__bases == NULL);
            tmp_AxislineStyle$class_creation_3__bases = tmp_assign_source_51;
        }
        {
            PyObject *tmp_assign_source_52;
            tmp_assign_source_52 = PyDict_New();
            assert(tmp_AxislineStyle$class_creation_3__class_decl_dict == NULL);
            tmp_AxislineStyle$class_creation_3__class_decl_dict = tmp_assign_source_52;
        }
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_metaclass_value_7;
            bool tmp_condition_result_32;
            PyObject *tmp_key_value_19;
            PyObject *tmp_dict_arg_value_19;
            PyObject *tmp_dict_arg_value_20;
            PyObject *tmp_key_value_20;
            nuitka_bool tmp_condition_result_33;
            int tmp_truth_name_5;
            PyObject *tmp_type_arg_11;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_bases_value_7;
            tmp_key_value_19 = mod_consts[55];
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__class_decl_dict);
            tmp_dict_arg_value_19 = tmp_AxislineStyle$class_creation_3__class_decl_dict;
            tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_19, tmp_key_value_19);
            assert(!(tmp_res == -1));
            tmp_condition_result_32 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_32 != false) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__class_decl_dict);
            tmp_dict_arg_value_20 = tmp_AxislineStyle$class_creation_3__class_decl_dict;
            tmp_key_value_20 = mod_consts[55];
            \
            tmp_metaclass_value_7 = DICT_GET_ITEM0(tmp_dict_arg_value_20, tmp_key_value_20);
            if (tmp_metaclass_value_7 == NULL) {
                tmp_metaclass_value_7 = Py_None;
            }

            assert(!(tmp_metaclass_value_7 == NULL));
            Py_INCREF(tmp_metaclass_value_7);
            goto condexpr_end_11;
            condexpr_false_11:;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__bases);
            tmp_truth_name_5 = CHECK_IF_TRUE(tmp_AxislineStyle$class_creation_3__bases);
            if (tmp_truth_name_5 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_condition_result_33 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__bases);
            tmp_expression_value_30 = tmp_AxislineStyle$class_creation_3__bases;
            tmp_subscript_value_5 = mod_consts[46];
            tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_30, tmp_subscript_value_5, 0);
            if (tmp_type_arg_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_11);
            Py_DECREF(tmp_type_arg_11);
            if (tmp_metaclass_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_7);
            condexpr_end_12:;
            condexpr_end_11:;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__bases);
            tmp_bases_value_7 = tmp_AxislineStyle$class_creation_3__bases;
            tmp_assign_source_53 = SELECT_METACLASS(tmp_metaclass_value_7, tmp_bases_value_7);
            Py_DECREF(tmp_metaclass_value_7);
            if (tmp_assign_source_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            assert(tmp_AxislineStyle$class_creation_3__metaclass == NULL);
            tmp_AxislineStyle$class_creation_3__metaclass = tmp_assign_source_53;
        }
        {
            bool tmp_condition_result_34;
            PyObject *tmp_key_value_21;
            PyObject *tmp_dict_arg_value_21;
            tmp_key_value_21 = mod_consts[55];
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__class_decl_dict);
            tmp_dict_arg_value_21 = tmp_AxislineStyle$class_creation_3__class_decl_dict;
            tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_21, tmp_key_value_21);
            assert(!(tmp_res == -1));
            tmp_condition_result_34 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_34 != false) {
                goto branch_yes_22;
            } else {
                goto branch_no_22;
            }
        }
        branch_yes_22:;
        CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__class_decl_dict);
        tmp_dictdel_dict = tmp_AxislineStyle$class_creation_3__class_decl_dict;
        tmp_dictdel_key = mod_consts[55];
        tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_2 = "o";
            goto try_except_handler_20;
        }
        branch_no_22:;
        {
            nuitka_bool tmp_condition_result_35;
            PyObject *tmp_expression_value_31;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__metaclass);
            tmp_expression_value_31 = tmp_AxislineStyle$class_creation_3__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_31, mod_consts[57]);
            tmp_condition_result_35 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
                goto branch_yes_23;
            } else {
                goto branch_no_23;
            }
        }
        branch_yes_23:;
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__metaclass);
            tmp_expression_value_32 = tmp_AxislineStyle$class_creation_3__metaclass;
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[57]);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_tuple_element_21 = mod_consts[80];
            tmp_args_value_12 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__bases);
            tmp_tuple_element_21 = tmp_AxislineStyle$class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__class_decl_dict);
            tmp_kwargs_value_12 = tmp_AxislineStyle$class_creation_3__class_decl_dict;
            frame_5b687f1478b4a89a9db1b28fb56d6480_5->m_frame.f_lineno = 142;
            tmp_assign_source_54 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            assert(tmp_AxislineStyle$class_creation_3__prepared == NULL);
            tmp_AxislineStyle$class_creation_3__prepared = tmp_assign_source_54;
        }
        {
            bool tmp_condition_result_36;
            PyObject *tmp_operand_value_7;
            PyObject *tmp_expression_value_33;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__prepared);
            tmp_expression_value_33 = tmp_AxislineStyle$class_creation_3__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_33, mod_consts[59]);
            tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_condition_result_36 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_36 != false) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        {
            PyObject *tmp_raise_type_7;
            PyObject *tmp_raise_value_7;
            PyObject *tmp_left_value_7;
            PyObject *tmp_right_value_7;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_getattr_target_7;
            PyObject *tmp_getattr_attr_7;
            PyObject *tmp_getattr_default_7;
            tmp_raise_type_7 = PyExc_TypeError;
            tmp_left_value_7 = mod_consts[60];
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__metaclass);
            tmp_getattr_target_7 = tmp_AxislineStyle$class_creation_3__metaclass;
            tmp_getattr_attr_7 = mod_consts[61];
            tmp_getattr_default_7 = mod_consts[62];
            tmp_tuple_element_22 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_right_value_7 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_34;
                PyObject *tmp_type_arg_12;
                PyTuple_SET_ITEM(tmp_right_value_7, 0, tmp_tuple_element_22);
                CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__prepared);
                tmp_type_arg_12 = tmp_AxislineStyle$class_creation_3__prepared;
                tmp_expression_value_34 = BUILTIN_TYPE1(tmp_type_arg_12);
                assert(!(tmp_expression_value_34 == NULL));
                tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[61]);
                Py_DECREF(tmp_expression_value_34);
                if (tmp_tuple_element_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 142;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_right_value_7, 1, tmp_tuple_element_22);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_right_value_7);
            goto try_except_handler_20;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_7, tmp_right_value_7);
            Py_DECREF(tmp_right_value_7);
            if (tmp_raise_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            exception_type = tmp_raise_type_7;
            Py_INCREF(tmp_raise_type_7);
            exception_value = tmp_raise_value_7;
            exception_lineno = 142;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_20;
        }
        branch_no_24:;
        goto branch_end_23;
        branch_no_23:;
        {
            PyObject *tmp_assign_source_55;
            tmp_assign_source_55 = PyDict_New();
            assert(tmp_AxislineStyle$class_creation_3__prepared == NULL);
            tmp_AxislineStyle$class_creation_3__prepared = tmp_assign_source_55;
        }
        branch_end_23:;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__prepared);
            tmp_set_locals_7 = tmp_AxislineStyle$class_creation_3__prepared;
            locals_mpl_toolkits$axisartist$axisline_style$$$class__7_FilledArrow_142 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__7_FilledArrow_142, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__7_FilledArrow_142, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        if (isFrameUnusable(cache_frame_a68e06a85e7e5f341a620137d4d50a7c_8)) {
            Py_XDECREF(cache_frame_a68e06a85e7e5f341a620137d4d50a7c_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a68e06a85e7e5f341a620137d4d50a7c_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a68e06a85e7e5f341a620137d4d50a7c_8 = MAKE_FUNCTION_FRAME(codeobj_a68e06a85e7e5f341a620137d4d50a7c, module_mpl_toolkits$axisartist$axisline_style, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_a68e06a85e7e5f341a620137d4d50a7c_8->m_type_description == NULL);
        frame_a68e06a85e7e5f341a620137d4d50a7c_8 = cache_frame_a68e06a85e7e5f341a620137d4d50a7c_8;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_a68e06a85e7e5f341a620137d4d50a7c_8);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_a68e06a85e7e5f341a620137d4d50a7c_8) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_expression_value_35;
            tmp_expression_value_35 = PyObject_GetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__7_FilledArrow_142, mod_consts[65]);

            if (tmp_expression_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[65]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                    }

                    if (tmp_expression_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 143;
                        type_description_3 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_expression_value_35);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[80]);
            Py_DECREF(tmp_expression_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__7_FilledArrow_142, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a68e06a85e7e5f341a620137d4d50a7c_8);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a68e06a85e7e5f341a620137d4d50a7c_8);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a68e06a85e7e5f341a620137d4d50a7c_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a68e06a85e7e5f341a620137d4d50a7c_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a68e06a85e7e5f341a620137d4d50a7c_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a68e06a85e7e5f341a620137d4d50a7c_8,
            type_description_3,
            outline_6_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_a68e06a85e7e5f341a620137d4d50a7c_8 == cache_frame_a68e06a85e7e5f341a620137d4d50a7c_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_a68e06a85e7e5f341a620137d4d50a7c_8);
            cache_frame_a68e06a85e7e5f341a620137d4d50a7c_8 = NULL;
        }

        assertFrameObject(frame_a68e06a85e7e5f341a620137d4d50a7c_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_7:;
        type_description_2 = "o";
        goto try_except_handler_22;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_37;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__bases);
            tmp_compexpr_left_4 = tmp_AxislineStyle$class_creation_3__bases;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__bases_orig);
            tmp_compexpr_right_4 = tmp_AxislineStyle$class_creation_3__bases_orig;
            tmp_condition_result_37 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_4, tmp_compexpr_right_4);
            if (tmp_condition_result_37 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto try_except_handler_22;
            }
            if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
                goto branch_yes_25;
            } else {
                goto branch_no_25;
            }
            assert(tmp_condition_result_37 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_25:;
        CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__bases_orig);
        tmp_dictset_value = tmp_AxislineStyle$class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__7_FilledArrow_142, mod_consts[79], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        branch_no_25:;
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kwargs_value_13;
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__metaclass);
            tmp_called_value_13 = tmp_AxislineStyle$class_creation_3__metaclass;
            tmp_tuple_element_23 = mod_consts[80];
            tmp_args_value_13 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__bases);
            tmp_tuple_element_23 = tmp_AxislineStyle$class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = locals_mpl_toolkits$axisartist$axisline_style$$$class__7_FilledArrow_142;
            PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__class_decl_dict);
            tmp_kwargs_value_13 = tmp_AxislineStyle$class_creation_3__class_decl_dict;
            frame_5b687f1478b4a89a9db1b28fb56d6480_5->m_frame.f_lineno = 142;
            tmp_assign_source_56 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_13, tmp_kwargs_value_13);
            Py_DECREF(tmp_args_value_13);
            if (tmp_assign_source_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto try_except_handler_22;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_56;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_dictset_value = outline_6_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_mpl_toolkits$axisartist$axisline_style$$$class__7_FilledArrow_142);
        locals_mpl_toolkits$axisartist$axisline_style$$$class__7_FilledArrow_142 = NULL;
        goto try_return_handler_21;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_mpl_toolkits$axisartist$axisline_style$$$class__7_FilledArrow_142);
        locals_mpl_toolkits$axisartist$axisline_style$$$class__7_FilledArrow_142 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
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

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 142;
        goto try_except_handler_20;
        outline_result_7:;
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74, mod_consts[80], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_2 = "o";
            goto try_except_handler_20;
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

        CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__bases_orig);
        Py_DECREF(tmp_AxislineStyle$class_creation_3__bases_orig);
        tmp_AxislineStyle$class_creation_3__bases_orig = NULL;
        Py_XDECREF(tmp_AxislineStyle$class_creation_3__bases);
        tmp_AxislineStyle$class_creation_3__bases = NULL;
        Py_XDECREF(tmp_AxislineStyle$class_creation_3__class_decl_dict);
        tmp_AxislineStyle$class_creation_3__class_decl_dict = NULL;
        Py_XDECREF(tmp_AxislineStyle$class_creation_3__metaclass);
        tmp_AxislineStyle$class_creation_3__metaclass = NULL;
        Py_XDECREF(tmp_AxislineStyle$class_creation_3__prepared);
        tmp_AxislineStyle$class_creation_3__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto frame_exception_exit_5;
        // End of try:
        try_end_7:;
        CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__bases_orig);
        Py_DECREF(tmp_AxislineStyle$class_creation_3__bases_orig);
        tmp_AxislineStyle$class_creation_3__bases_orig = NULL;
        Py_XDECREF(tmp_AxislineStyle$class_creation_3__bases);
        tmp_AxislineStyle$class_creation_3__bases = NULL;
        Py_XDECREF(tmp_AxislineStyle$class_creation_3__class_decl_dict);
        tmp_AxislineStyle$class_creation_3__class_decl_dict = NULL;
        Py_XDECREF(tmp_AxislineStyle$class_creation_3__metaclass);
        tmp_AxislineStyle$class_creation_3__metaclass = NULL;
        CHECK_OBJECT(tmp_AxislineStyle$class_creation_3__prepared);
        Py_DECREF(tmp_AxislineStyle$class_creation_3__prepared);
        tmp_AxislineStyle$class_creation_3__prepared = NULL;
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = PyObject_GetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74, mod_consts[80]);

            if (unlikely(tmp_ass_subvalue_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[80]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subvalue_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_2 = PyObject_GetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74, mod_consts[85]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[85]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_2);

                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_2 = mod_consts[82];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            Py_DECREF(tmp_ass_subvalue_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5b687f1478b4a89a9db1b28fb56d6480_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5b687f1478b4a89a9db1b28fb56d6480_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5b687f1478b4a89a9db1b28fb56d6480_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5b687f1478b4a89a9db1b28fb56d6480_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5b687f1478b4a89a9db1b28fb56d6480_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5b687f1478b4a89a9db1b28fb56d6480_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_5b687f1478b4a89a9db1b28fb56d6480_5 == cache_frame_5b687f1478b4a89a9db1b28fb56d6480_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_5b687f1478b4a89a9db1b28fb56d6480_5);
            cache_frame_5b687f1478b4a89a9db1b28fb56d6480_5 = NULL;
        }

        assertFrameObject(frame_5b687f1478b4a89a9db1b28fb56d6480_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_4:;

        goto try_except_handler_13;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_38;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_5 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_compexpr_right_5 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_38 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_5, tmp_compexpr_right_5);
            if (tmp_condition_result_38 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
                goto branch_yes_26;
            } else {
                goto branch_no_26;
            }
            assert(tmp_condition_result_38 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_26:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74, mod_consts[79], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_13;
        }
        branch_no_26:;
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_14 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_24 = mod_consts[83];
            tmp_args_value_14 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_24 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_2__class_decl_dict;
            frame_ef670d06589f3ab6ab89ecff33f70fae->m_frame.f_lineno = 74;
            tmp_assign_source_57 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_57;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_37 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_37);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74);
        locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74);
        locals_mpl_toolkits$axisartist$axisline_style$$$class__4_AxislineStyle_74 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 74;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_37);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef670d06589f3ab6ab89ecff33f70fae);
#endif
    popFrameStack();

    assertFrameObject(frame_ef670d06589f3ab6ab89ecff33f70fae);

    goto frame_no_exception_8;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef670d06589f3ab6ab89ecff33f70fae);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ef670d06589f3ab6ab89ecff33f70fae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef670d06589f3ab6ab89ecff33f70fae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef670d06589f3ab6ab89ecff33f70fae, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_8:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("mpl_toolkits.axisartist.axisline_style", false);

    return module_mpl_toolkits$axisartist$axisline_style;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$axisartist$axisline_style, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("mpl_toolkits$axisartist$axisline_style", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
