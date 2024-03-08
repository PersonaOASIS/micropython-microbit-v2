/*
 * This file is an attempted new micropython module to facilitate the use of a machine learning model trained in browser and run on the Micro:Bit.
 */

#include "py/runtime.h"
#include "py/mphal.h"
#include "py/builtin.h"
#include "modmicrobit.h"
#include <math.h>

#if MICROBIT_ML

STATIC mp_obj_t ml_importModel(mp_obj_t self_in){

};
STATIC MP_DEFINE_CONST_FUN_OBJ_1(ml_importModel_obj, ml_importModel);

STATIC mp_obj_t ml_startRecognising(mp_obj_t self_in){

};
STATIC MP_DEFINE_CONST_FUN_OBJ_1(ml_startRecognising_obj, ml_startRecognising);

STATIC mp_obj_t ml_current_action(mp_obj_t self_in){

};
STATIC MP_DEFINE_CONST_FUN_OBJ_1(ml_current_action_obj, ml_current_action);

STATIC mp_obj_t ml_is_action(mp_obj_t self_in, mp_obj_t action_in){

};
STATIC MP_DEFINE_CONST_FUN_OBJ_2(ml_is_action_obj, ml_is_action);

STATIC mp_obj_t ml_was_action(mp_obj_t self_in, mp_obj_t action_in){

};
STATIC MP_DEFINE_CONST_FUN_OBJ_2(ml_was_action_obj, ml_was_action);

STATIC mp_obj_t ml_get_actions(mp_obj_t self_in){

};
STATIC MP_DEFINE_CONST_FUN_OBJ_1(ml_get_actions_obj, ml_get_actions);

STATIC const mp_rom_map_elem_t ml_module_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_ml) },
    { MP_ROM_QSTR(MP_QSTR_importModel), MP_ROM_PTR(&ml_importModel_obj) },
    { MP_ROM_QSTR(ml_startRecognising), MP_ROM_PTR(&ml_startRecognising_obj) },
    { MP_ROM_QSTR(ml_current_action), MP_ROM_PTR(&ml_current_action_obj) },
    { MP_ROM_QSTR(ml_is_action), MP_ROM_PTR(&ml_is_action_obj) },
    { MP_ROM_QSTR(ml_was_action), MP_ROM_PTR(&ml_was_action_obj) },
    { MP_ROM_QSTR(ml_get_actions), MP_ROM_PTR(&ml_get_actions_obj) },
};
STATIC MP_DEFINE_CONST_DICT(ml_module_globals, ml_module_globals_table);

const mp_obj_module_t ml_module = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t *)&ml_module_globals,
};

MP_REGISTER_MODULE(MP_QSTR_ml, ml_module);

#endif