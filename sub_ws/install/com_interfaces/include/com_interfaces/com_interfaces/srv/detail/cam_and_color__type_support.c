// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from com_interfaces:srv/CamAndColor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "com_interfaces/srv/detail/cam_and_color__rosidl_typesupport_introspection_c.h"
#include "com_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "com_interfaces/srv/detail/cam_and_color__functions.h"
#include "com_interfaces/srv/detail/cam_and_color__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void com_interfaces__srv__CamAndColor_Request__rosidl_typesupport_introspection_c__CamAndColor_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  com_interfaces__srv__CamAndColor_Request__init(message_memory);
}

void com_interfaces__srv__CamAndColor_Request__rosidl_typesupport_introspection_c__CamAndColor_Request_fini_function(void * message_memory)
{
  com_interfaces__srv__CamAndColor_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember com_interfaces__srv__CamAndColor_Request__rosidl_typesupport_introspection_c__CamAndColor_Request_message_member_array[4] = {
  {
    "cam",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(com_interfaces__srv__CamAndColor_Request, cam),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(com_interfaces__srv__CamAndColor_Request, r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "g",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(com_interfaces__srv__CamAndColor_Request, g),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(com_interfaces__srv__CamAndColor_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers com_interfaces__srv__CamAndColor_Request__rosidl_typesupport_introspection_c__CamAndColor_Request_message_members = {
  "com_interfaces__srv",  // message namespace
  "CamAndColor_Request",  // message name
  4,  // number of fields
  sizeof(com_interfaces__srv__CamAndColor_Request),
  com_interfaces__srv__CamAndColor_Request__rosidl_typesupport_introspection_c__CamAndColor_Request_message_member_array,  // message members
  com_interfaces__srv__CamAndColor_Request__rosidl_typesupport_introspection_c__CamAndColor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  com_interfaces__srv__CamAndColor_Request__rosidl_typesupport_introspection_c__CamAndColor_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t com_interfaces__srv__CamAndColor_Request__rosidl_typesupport_introspection_c__CamAndColor_Request_message_type_support_handle = {
  0,
  &com_interfaces__srv__CamAndColor_Request__rosidl_typesupport_introspection_c__CamAndColor_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_com_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, com_interfaces, srv, CamAndColor_Request)() {
  if (!com_interfaces__srv__CamAndColor_Request__rosidl_typesupport_introspection_c__CamAndColor_Request_message_type_support_handle.typesupport_identifier) {
    com_interfaces__srv__CamAndColor_Request__rosidl_typesupport_introspection_c__CamAndColor_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &com_interfaces__srv__CamAndColor_Request__rosidl_typesupport_introspection_c__CamAndColor_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "com_interfaces/srv/detail/cam_and_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "com_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "com_interfaces/srv/detail/cam_and_color__functions.h"
// already included above
// #include "com_interfaces/srv/detail/cam_and_color__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void com_interfaces__srv__CamAndColor_Response__rosidl_typesupport_introspection_c__CamAndColor_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  com_interfaces__srv__CamAndColor_Response__init(message_memory);
}

void com_interfaces__srv__CamAndColor_Response__rosidl_typesupport_introspection_c__CamAndColor_Response_fini_function(void * message_memory)
{
  com_interfaces__srv__CamAndColor_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember com_interfaces__srv__CamAndColor_Response__rosidl_typesupport_introspection_c__CamAndColor_Response_message_member_array[6] = {
  {
    "posx1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(com_interfaces__srv__CamAndColor_Response, posx1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "posy1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(com_interfaces__srv__CamAndColor_Response, posy1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "posx2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(com_interfaces__srv__CamAndColor_Response, posx2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "posy2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(com_interfaces__srv__CamAndColor_Response, posy2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(com_interfaces__srv__CamAndColor_Response, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(com_interfaces__srv__CamAndColor_Response, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers com_interfaces__srv__CamAndColor_Response__rosidl_typesupport_introspection_c__CamAndColor_Response_message_members = {
  "com_interfaces__srv",  // message namespace
  "CamAndColor_Response",  // message name
  6,  // number of fields
  sizeof(com_interfaces__srv__CamAndColor_Response),
  com_interfaces__srv__CamAndColor_Response__rosidl_typesupport_introspection_c__CamAndColor_Response_message_member_array,  // message members
  com_interfaces__srv__CamAndColor_Response__rosidl_typesupport_introspection_c__CamAndColor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  com_interfaces__srv__CamAndColor_Response__rosidl_typesupport_introspection_c__CamAndColor_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t com_interfaces__srv__CamAndColor_Response__rosidl_typesupport_introspection_c__CamAndColor_Response_message_type_support_handle = {
  0,
  &com_interfaces__srv__CamAndColor_Response__rosidl_typesupport_introspection_c__CamAndColor_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_com_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, com_interfaces, srv, CamAndColor_Response)() {
  if (!com_interfaces__srv__CamAndColor_Response__rosidl_typesupport_introspection_c__CamAndColor_Response_message_type_support_handle.typesupport_identifier) {
    com_interfaces__srv__CamAndColor_Response__rosidl_typesupport_introspection_c__CamAndColor_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &com_interfaces__srv__CamAndColor_Response__rosidl_typesupport_introspection_c__CamAndColor_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "com_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "com_interfaces/srv/detail/cam_and_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers com_interfaces__srv__detail__cam_and_color__rosidl_typesupport_introspection_c__CamAndColor_service_members = {
  "com_interfaces__srv",  // service namespace
  "CamAndColor",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // com_interfaces__srv__detail__cam_and_color__rosidl_typesupport_introspection_c__CamAndColor_Request_message_type_support_handle,
  NULL  // response message
  // com_interfaces__srv__detail__cam_and_color__rosidl_typesupport_introspection_c__CamAndColor_Response_message_type_support_handle
};

static rosidl_service_type_support_t com_interfaces__srv__detail__cam_and_color__rosidl_typesupport_introspection_c__CamAndColor_service_type_support_handle = {
  0,
  &com_interfaces__srv__detail__cam_and_color__rosidl_typesupport_introspection_c__CamAndColor_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, com_interfaces, srv, CamAndColor_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, com_interfaces, srv, CamAndColor_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_com_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, com_interfaces, srv, CamAndColor)() {
  if (!com_interfaces__srv__detail__cam_and_color__rosidl_typesupport_introspection_c__CamAndColor_service_type_support_handle.typesupport_identifier) {
    com_interfaces__srv__detail__cam_and_color__rosidl_typesupport_introspection_c__CamAndColor_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)com_interfaces__srv__detail__cam_and_color__rosidl_typesupport_introspection_c__CamAndColor_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, com_interfaces, srv, CamAndColor_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, com_interfaces, srv, CamAndColor_Response)()->data;
  }

  return &com_interfaces__srv__detail__cam_and_color__rosidl_typesupport_introspection_c__CamAndColor_service_type_support_handle;
}
