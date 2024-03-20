//This is a module that is intended to read a file from the filesystem with the names 
//of classes of a machine learning model, returning the class names in a list

#include "py/builtin.h"
#include "py/runtime.h"
#include "py/stream.h"
#include "py/objstr.h"

#if MICROBIT_MODEL_READER

// info()
STATIC mp_obj_t mlreader_read_class_names(void) {
    //return MP_OBJ_NEW_SMALL_INT(3);
    mp_obj_t open_args[2] = {
        mp_obj_new_str("namesOfClasses.txt", strlen("namesOfClasses.txt")), //filename
        MP_OBJ_NEW_QSTR(MP_QSTR_rb) //read binary
    };
    //getting file descriptor
    mp_obj_t classes_f_descriptor = mp_builtin_open(2, open_args, (mp_map_t *)&mp_const_empty_map);

    //Creating a variable to contain the data
    size_t sz = 1024;
    vstr_t vstr;
    vstr_init(&vstr, sz);

    //reading the file with the stream module
    int error;
    mp_uint_t out_sz = mp_stream_read_exactly(classes_f_descriptor, vstr.buf, sz, &error);
    vstr.len = out_sz;

    

    //Check for errors
    if(error != 0) {
        if(mp_is_nonblocking_error(error)) {
            return mp_const_none;
        }
        mp_raise_OSError(error);
    } else {
        //Return content as Python list object
        mp_obj_t bigString = mp_obj_new_str_from_vstr(&vstr);
        size_t size = 1;
        mp_obj_t list = mp_obj_str_split(size, &bigString);
        return list;
    }
}
MP_DEFINE_CONST_FUN_OBJ_0(mlreader_read_class_names_obj, mlreader_read_class_names);

STATIC const mp_rom_map_elem_t mlreader_module_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_mlreader) },
    { MP_ROM_QSTR(MP_QSTR_read_class_names), MP_ROM_PTR(&mlreader_read_class_names_obj) },
};
STATIC MP_DEFINE_CONST_DICT(mlreader_module_globals, mlreader_module_globals_table);

const mp_obj_module_t mlreader_module = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t *)&mlreader_module_globals,
};

MP_REGISTER_MODULE(MP_QSTR_mlreader, mlreader_module);

#endif
