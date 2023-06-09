// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from common_interfaces:srv/CamAndColor.idl
// generated code does not contain a copyright notice

#ifndef COMMON_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__FUNCTIONS_H_
#define COMMON_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "common_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "common_interfaces/srv/detail/cam_and_color__struct.h"

/// Initialize srv/CamAndColor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * common_interfaces__srv__CamAndColor_Request
 * )) before or use
 * common_interfaces__srv__CamAndColor_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
bool
common_interfaces__srv__CamAndColor_Request__init(common_interfaces__srv__CamAndColor_Request * msg);

/// Finalize srv/CamAndColor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
void
common_interfaces__srv__CamAndColor_Request__fini(common_interfaces__srv__CamAndColor_Request * msg);

/// Create srv/CamAndColor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * common_interfaces__srv__CamAndColor_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
common_interfaces__srv__CamAndColor_Request *
common_interfaces__srv__CamAndColor_Request__create();

/// Destroy srv/CamAndColor message.
/**
 * It calls
 * common_interfaces__srv__CamAndColor_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
void
common_interfaces__srv__CamAndColor_Request__destroy(common_interfaces__srv__CamAndColor_Request * msg);

/// Check for srv/CamAndColor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
bool
common_interfaces__srv__CamAndColor_Request__are_equal(const common_interfaces__srv__CamAndColor_Request * lhs, const common_interfaces__srv__CamAndColor_Request * rhs);

/// Copy a srv/CamAndColor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
bool
common_interfaces__srv__CamAndColor_Request__copy(
  const common_interfaces__srv__CamAndColor_Request * input,
  common_interfaces__srv__CamAndColor_Request * output);

/// Initialize array of srv/CamAndColor messages.
/**
 * It allocates the memory for the number of elements and calls
 * common_interfaces__srv__CamAndColor_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
bool
common_interfaces__srv__CamAndColor_Request__Sequence__init(common_interfaces__srv__CamAndColor_Request__Sequence * array, size_t size);

/// Finalize array of srv/CamAndColor messages.
/**
 * It calls
 * common_interfaces__srv__CamAndColor_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
void
common_interfaces__srv__CamAndColor_Request__Sequence__fini(common_interfaces__srv__CamAndColor_Request__Sequence * array);

/// Create array of srv/CamAndColor messages.
/**
 * It allocates the memory for the array and calls
 * common_interfaces__srv__CamAndColor_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
common_interfaces__srv__CamAndColor_Request__Sequence *
common_interfaces__srv__CamAndColor_Request__Sequence__create(size_t size);

/// Destroy array of srv/CamAndColor messages.
/**
 * It calls
 * common_interfaces__srv__CamAndColor_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
void
common_interfaces__srv__CamAndColor_Request__Sequence__destroy(common_interfaces__srv__CamAndColor_Request__Sequence * array);

/// Check for srv/CamAndColor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
bool
common_interfaces__srv__CamAndColor_Request__Sequence__are_equal(const common_interfaces__srv__CamAndColor_Request__Sequence * lhs, const common_interfaces__srv__CamAndColor_Request__Sequence * rhs);

/// Copy an array of srv/CamAndColor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
bool
common_interfaces__srv__CamAndColor_Request__Sequence__copy(
  const common_interfaces__srv__CamAndColor_Request__Sequence * input,
  common_interfaces__srv__CamAndColor_Request__Sequence * output);

/// Initialize srv/CamAndColor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * common_interfaces__srv__CamAndColor_Response
 * )) before or use
 * common_interfaces__srv__CamAndColor_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
bool
common_interfaces__srv__CamAndColor_Response__init(common_interfaces__srv__CamAndColor_Response * msg);

/// Finalize srv/CamAndColor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
void
common_interfaces__srv__CamAndColor_Response__fini(common_interfaces__srv__CamAndColor_Response * msg);

/// Create srv/CamAndColor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * common_interfaces__srv__CamAndColor_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
common_interfaces__srv__CamAndColor_Response *
common_interfaces__srv__CamAndColor_Response__create();

/// Destroy srv/CamAndColor message.
/**
 * It calls
 * common_interfaces__srv__CamAndColor_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
void
common_interfaces__srv__CamAndColor_Response__destroy(common_interfaces__srv__CamAndColor_Response * msg);

/// Check for srv/CamAndColor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
bool
common_interfaces__srv__CamAndColor_Response__are_equal(const common_interfaces__srv__CamAndColor_Response * lhs, const common_interfaces__srv__CamAndColor_Response * rhs);

/// Copy a srv/CamAndColor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
bool
common_interfaces__srv__CamAndColor_Response__copy(
  const common_interfaces__srv__CamAndColor_Response * input,
  common_interfaces__srv__CamAndColor_Response * output);

/// Initialize array of srv/CamAndColor messages.
/**
 * It allocates the memory for the number of elements and calls
 * common_interfaces__srv__CamAndColor_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
bool
common_interfaces__srv__CamAndColor_Response__Sequence__init(common_interfaces__srv__CamAndColor_Response__Sequence * array, size_t size);

/// Finalize array of srv/CamAndColor messages.
/**
 * It calls
 * common_interfaces__srv__CamAndColor_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
void
common_interfaces__srv__CamAndColor_Response__Sequence__fini(common_interfaces__srv__CamAndColor_Response__Sequence * array);

/// Create array of srv/CamAndColor messages.
/**
 * It allocates the memory for the array and calls
 * common_interfaces__srv__CamAndColor_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
common_interfaces__srv__CamAndColor_Response__Sequence *
common_interfaces__srv__CamAndColor_Response__Sequence__create(size_t size);

/// Destroy array of srv/CamAndColor messages.
/**
 * It calls
 * common_interfaces__srv__CamAndColor_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
void
common_interfaces__srv__CamAndColor_Response__Sequence__destroy(common_interfaces__srv__CamAndColor_Response__Sequence * array);

/// Check for srv/CamAndColor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
bool
common_interfaces__srv__CamAndColor_Response__Sequence__are_equal(const common_interfaces__srv__CamAndColor_Response__Sequence * lhs, const common_interfaces__srv__CamAndColor_Response__Sequence * rhs);

/// Copy an array of srv/CamAndColor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_interfaces
bool
common_interfaces__srv__CamAndColor_Response__Sequence__copy(
  const common_interfaces__srv__CamAndColor_Response__Sequence * input,
  common_interfaces__srv__CamAndColor_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COMMON_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__FUNCTIONS_H_
