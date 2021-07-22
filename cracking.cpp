#define PY_SSIZE_T_CLEAN
#include <python3.9/Python.h>
#include "src/includes/cracking.h"
PyObject *PyisUnique(PyObject *self,PyObject *args){
    char *str;
    if(!PyArg_ParseTuple(args,"s",&str)) return NULL;
    std::string str_(str);
    uint8_t r = isUnique(str_);
    return PyBool_FromLong(r);
}
PyObject *PyisPerm(PyObject *self, PyObject *args){
    char* str;
    char *str2;
    if(!PyArg_ParseTuple(args,"ss",&str,&str2)) return NULL;
    std::string str_(str);
    std::string str2_(str2);
    uint8_t r = isPerm(str,str2);
    return PyBool_FromLong(r);
}

PyMethodDef moduleMethods[] = {
    {"is_unique",PyisUnique,METH_VARARGS,"Check if the string provide has unique characters"},
    {"is_permutation",PyisPerm,METH_VARARGS,"Check if the second string is a permutation of the first"},
    {NULL}
};

struct PyModuleDef cracking_module = {
    PyModuleDef_HEAD_INIT,
    "cracking",
    "Cracking the coding interview methods in C++",
    -1,
    moduleMethods
};

PyMODINIT_FUNC PyInit_cracking(){
    return PyModule_Create(&cracking_module);
}