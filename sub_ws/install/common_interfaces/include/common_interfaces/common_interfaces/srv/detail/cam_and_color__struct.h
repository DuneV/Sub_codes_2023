// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from common_interfaces:srv/CamAndColor.idl
// generated code does not contain a copyright notice

#ifndef COMMON_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__STRUCT_H_
#define COMMON_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CamAndColor in the package common_interfaces.
typedef struct common_interfaces__srv__CamAndColor_Request
{
  int64_t cam;
  int64_t r;
  int64_t g;
  int64_t b;
} common_interfaces__srv__CamAndColor_Request;

// Struct for a sequence of common_interfaces__srv__CamAndColor_Request.
typedef struct common_interfaces__srv__CamAndColor_Request__Sequence
{
  common_interfaces__srv__CamAndColor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_interfaces__srv__CamAndColor_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CamAndColor in the package common_interfaces.
typedef struct common_interfaces__srv__CamAndColor_Response
{
  int64_t posx1;
  int64_t posy1;
  int64_t posx2;
  int64_t posy2;
  int64_t width;
  int64_t height;
} common_interfaces__srv__CamAndColor_Response;

// Struct for a sequence of common_interfaces__srv__CamAndColor_Response.
typedef struct common_interfaces__srv__CamAndColor_Response__Sequence
{
  common_interfaces__srv__CamAndColor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_interfaces__srv__CamAndColor_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMON_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__STRUCT_H_
