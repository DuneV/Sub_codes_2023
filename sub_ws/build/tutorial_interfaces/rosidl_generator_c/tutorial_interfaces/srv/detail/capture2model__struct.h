// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:srv/Capture2model.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__CAPTURE2MODEL__STRUCT_H_
#define TUTORIAL_INTERFACES__SRV__DETAIL__CAPTURE2MODEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Capture2model in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__Capture2model_Request
{
  /// enable/disable camera shots
  bool input;
} tutorial_interfaces__srv__Capture2model_Request;

// Struct for a sequence of tutorial_interfaces__srv__Capture2model_Request.
typedef struct tutorial_interfaces__srv__Capture2model_Request__Sequence
{
  tutorial_interfaces__srv__Capture2model_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__Capture2model_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Capture2model in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__Capture2model_Response
{
  /// the number of images that take
  int64_t quantity;
} tutorial_interfaces__srv__Capture2model_Response;

// Struct for a sequence of tutorial_interfaces__srv__Capture2model_Response.
typedef struct tutorial_interfaces__srv__Capture2model_Response__Sequence
{
  tutorial_interfaces__srv__Capture2model_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__Capture2model_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__CAPTURE2MODEL__STRUCT_H_
