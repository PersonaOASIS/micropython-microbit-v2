/*
 * This file is an attempted new micropython module to facilitate the use of a machine learning model trained in browser and run on the Micro:Bit.
 */

#include "py/runtime.h"
#include "py/mphal.h"
#include "py/builtin.h"
#include "modmicrobit.h"
#include <math.h>

#if MICROBIT_MODEL

STATIC mp_obj_t model_importModel(mp_obj_t self_in){

};
STATIC MP_DEFINE_CONST_FUN_OBJ_1(model_importModel_obj, model_importModel);

STATIC mp_obj_t model_startRecognising(mp_obj_t self_in){

};
STATIC MP_DEFINE_CONST_FUN_OBJ_1(model_startRecognising_obj, model_startRecognising);

STATIC mp_obj_t model_current_action(mp_obj_t self_in){

};
STATIC MP_DEFINE_CONST_FUN_OBJ_1(model_current_action_obj, model_current_action);

STATIC mp_obj_t model_is_action(mp_obj_t self_in, mp_obj_t action_in){

};
STATIC MP_DEFINE_CONST_FUN_OBJ_2(model_is_action_obj, model_is_action);

STATIC mp_obj_t model_was_action(mp_obj_t self_in, mp_obj_t action_in){

};
STATIC MP_DEFINE_CONST_FUN_OBJ_2(model_was_action_obj, model_was_action);

STATIC mp_obj_t model_get_actions(mp_obj_t self_in){

};
STATIC MP_DEFINE_CONST_FUN_OBJ_1(model_get_actions_obj, model_get_actions);

STATIC const mp_rom_map_elem_t model_module_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_ml) },
    { MP_ROM_QSTR(MP_QSTR_importModel), MP_ROM_PTR(&model_importModel_obj) },
    { MP_ROM_QSTR(MP_QSTR_startRecognising), MP_ROM_PTR(&model_startRecognising_obj) },
    { MP_ROM_QSTR(MP_QSTR_current_action), MP_ROM_PTR(&model_current_action_obj) },
    { MP_ROM_QSTR(MP_QSTR_is_action), MP_ROM_PTR(&model_is_action_obj) },
    { MP_ROM_QSTR(MP_QSTR_was_action), MP_ROM_PTR(&model_was_action_obj) },
    { MP_ROM_QSTR(MP_QSTR_get_actions), MP_ROM_PTR(&model_get_actions_obj) },
};
STATIC MP_DEFINE_CONST_DICT(model_module_globals, model_module_globals_table);

const mp_obj_module_t model_module = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t *)&model_module_globals,
};

MP_REGISTER_MODULE(MP_QSTR_model, model_module);

#endif