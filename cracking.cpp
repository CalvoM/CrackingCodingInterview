#define PY_SSIZE_T_CLEAN
#include <python3.9/Python.h>
#include "src/includes/cracking.h"
PyObject *PyisUnique(PyObject *self,PyObject *args){
    char *str;
    if(!PyArg_ParseTuple(args,"s",&str)) return NULL;
    uint8_t r = isUnique(str);
    return PyBool_FromLong(r);
}
PyObject *PyisPerm(PyObject *self, PyObject *args){
    char* str;
    char *str2;
    if(!PyArg_ParseTuple(args,"ss",&str,&str2)) return NULL;
    uint8_t r = isPerm(str,str2);
    return PyBool_FromLong(r);
}
PyObject *Pyurlify(PyObject *self, PyObject *args){
    char *str;
    int len;
    if(!PyArg_ParseTuple(args,"si",&str,&len)) return NULL;
    std::string res = urlify(str,len);
    return PyUnicode_FromString(res.c_str());
}
PyObject *PyPalindrome(PyObject *self, PyObject *args){
    char *str;
    if(!PyArg_ParseTuple(args,"s",&str)) return NULL;
    uint8_t r = isPalindromePerm(str);
    return PyBool_FromLong(r);
}
PyObject *PyoneAway(PyObject *self, PyObject *args){
    char *f;
    char* s;
    if(!PyArg_ParseTuple(args,"ss",&f,&s)) return NULL;
    uint8_t r = oneAway(f,s);
    return PyBool_FromLong(r);
}

PyMethodDef moduleMethods[] = {
    {"is_unique",PyisUnique,METH_VARARGS,"Check if the string provide has unique characters"},
    {"is_permutation",PyisPerm,METH_VARARGS,"Check if the second string is a permutation of the first"},
    {"urlify",Pyurlify,METH_VARARGS,"Urlify spaces in strings"},
    {"is_palindrome_permutation",PyPalindrome,METH_VARARGS,"Check if the string is a permutation of palindrome"},
    {"is_one_away",PyoneAway,METH_VARARGS,"Check if the two strings are one change away"},
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