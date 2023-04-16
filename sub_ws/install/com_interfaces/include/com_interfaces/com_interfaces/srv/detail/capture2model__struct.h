// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from com_interfaces:srv/Capture2model.idl
// generated code does not contain a copyright notice

#ifndef COM_INTERFACES__SRV__DETAIL__CAPTURE2MODEL__STRUCT_H_
#define COM_INTERFACES__SRV__DETAIL__CAPTURE2MODEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Capture2model in the package com_interfaces.
typedef struct com_interfaces__srv__Capture2model_Request
{
  /// enable/disable camera shots
  bool input;
} com_interfaces__srv__Capture2model_Request;

// Struct for a sequence of com_interfaces__srv__Capture2model_Request.
typedef struct com_interfaces__srv__Capture2model_Request__Sequence
{
  com_interfaces__srv__Capture2model_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} com_interfaces__srv__Capture2model_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Capture2model in the package com_interfaces.
typedef struct com_interfaces__srv__Capture2model_Response
{
  /// the number of images that take
  int64_t quantity;
} com_interfaces__srv__Capture2model_Response;

// Struct for a sequence of com_interfaces__srv__Capture2model_Response.
typedef struct com_interfaces__srv__Capture2model_Response__Sequence
{
  com_interfaces__srv__Capture2model_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} com_interfaces__srv__Capture2model_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COM_INTERFACES__SRV__DETAIL__CAPTURE2MODEL__STRUCT_H_
