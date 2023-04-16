// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from com_interfaces:srv/CamAndColor.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "com_interfaces/srv/detail/cam_and_color__struct.h"
#include "com_interfaces/srv/detail/cam_and_color__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool com_interfaces__srv__cam_and_color__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("com_interfaces.srv._cam_and_color.CamAndColor_Request", full_classname_dest, 53) == 0);
  }
  com_interfaces__srv__CamAndColor_Request * ros_message = _ros_message;
  {  // cam
    PyObject * field = PyObject_GetAttrString(_pymsg, "cam");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cam = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // r
    PyObject * field = PyObject_GetAttrString(_pymsg, "r");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->r = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // g
    PyObject * field = PyObject_GetAttrString(_pymsg, "g");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->g = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // b
    PyObject * field = PyObject_GetAttrString(_pymsg, "b");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * com_interfaces__srv__cam_and_color__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CamAndColor_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("com_interfaces.srv._cam_and_color");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CamAndColor_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  com_interfaces__srv__CamAndColor_Request * ros_message = (com_interfaces__srv__CamAndColor_Request *)raw_ros_message;
  {  // cam
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->cam);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cam", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->r);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // g
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->g);
    {
      int rc = PyObject_SetAttrString(_pymessage, "g", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "com_interfaces/srv/detail/cam_and_color__struct.h"
// already included above
// #include "com_interfaces/srv/detail/cam_and_color__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool com_interfaces__srv__cam_and_color__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("com_interfaces.srv._cam_and_color.CamAndColor_Response", full_classname_dest, 54) == 0);
  }
  com_interfaces__srv__CamAndColor_Response * ros_message = _ros_message;
  {  // posx1
    PyObject * field = PyObject_GetAttrString(_pymsg, "posx1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->posx1 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // posy1
    PyObject * field = PyObject_GetAttrString(_pymsg, "posy1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->posy1 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // posx2
    PyObject * field = PyObject_GetAttrString(_pymsg, "posx2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->posx2 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // posy2
    PyObject * field = PyObject_GetAttrString(_pymsg, "posy2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->posy2 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->width = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->height = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * com_interfaces__srv__cam_and_color__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CamAndColor_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("com_interfaces.srv._cam_and_color");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CamAndColor_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  com_interfaces__srv__CamAndColor_Response * ros_message = (com_interfaces__srv__CamAndColor_Response *)raw_ros_message;
  {  // posx1
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->posx1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posx1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posy1
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->posy1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posy1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posx2
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->posx2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posx2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posy2
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->posy2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posy2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // width
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
