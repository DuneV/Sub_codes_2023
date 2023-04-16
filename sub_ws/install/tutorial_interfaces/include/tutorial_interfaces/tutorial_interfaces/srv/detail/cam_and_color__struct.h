// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:srv/CamAndColor.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__STRUCT_H_
#define TUTORIAL_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CamAndColor in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__CamAndColor_Request
{
  int64_t cam;
  int64_t r;
  int64_t g;
  int64_t b;
} tutorial_interfaces__srv__CamAndColor_Request;

// Struct for a sequence of tutorial_interfaces__srv__CamAndColor_Request.
typedef struct tutorial_interfaces__srv__CamAndColor_Request__Sequence
{
  tutorial_interfaces__srv__CamAndColor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__CamAndColor_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CamAndColor in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__CamAndColor_Response
{
  int64_t posx1;
  int64_t posy1;
  int64_t posx2;
  int64_t posy2;
  int64_t width;
  int64_t height;
} tutorial_interfaces__srv__CamAndColor_Response;

// Struct for a sequence of tutorial_interfaces__srv__CamAndColor_Response.
typedef struct tutorial_interfaces__srv__CamAndColor_Response__Sequence
{
  tutorial_interfaces__srv__CamAndColor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__CamAndColor_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__STRUCT_H_
