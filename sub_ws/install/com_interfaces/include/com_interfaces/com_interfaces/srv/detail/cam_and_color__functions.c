// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from com_interfaces:srv/CamAndColor.idl
// generated code does not contain a copyright notice
#include "com_interfaces/srv/detail/cam_and_color__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
com_interfaces__srv__CamAndColor_Request__init(com_interfaces__srv__CamAndColor_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cam
  // r
  // g
  // b
  return true;
}

void
com_interfaces__srv__CamAndColor_Request__fini(com_interfaces__srv__CamAndColor_Request * msg)
{
  if (!msg) {
    return;
  }
  // cam
  // r
  // g
  // b
}

bool
com_interfaces__srv__CamAndColor_Request__are_equal(const com_interfaces__srv__CamAndColor_Request * lhs, const com_interfaces__srv__CamAndColor_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cam
  if (lhs->cam != rhs->cam) {
    return false;
  }
  // r
  if (lhs->r != rhs->r) {
    return false;
  }
  // g
  if (lhs->g != rhs->g) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
com_interfaces__srv__CamAndColor_Request__copy(
  const com_interfaces__srv__CamAndColor_Request * input,
  com_interfaces__srv__CamAndColor_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // cam
  output->cam = input->cam;
  // r
  output->r = input->r;
  // g
  output->g = input->g;
  // b
  output->b = input->b;
  return true;
}

com_interfaces__srv__CamAndColor_Request *
com_interfaces__srv__CamAndColor_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  com_interfaces__srv__CamAndColor_Request * msg = (com_interfaces__srv__CamAndColor_Request *)allocator.allocate(sizeof(com_interfaces__srv__CamAndColor_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(com_interfaces__srv__CamAndColor_Request));
  bool success = com_interfaces__srv__CamAndColor_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
com_interfaces__srv__CamAndColor_Request__destroy(com_interfaces__srv__CamAndColor_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    com_interfaces__srv__CamAndColor_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
com_interfaces__srv__CamAndColor_Request__Sequence__init(com_interfaces__srv__CamAndColor_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  com_interfaces__srv__CamAndColor_Request * data = NULL;

  if (size) {
    data = (com_interfaces__srv__CamAndColor_Request *)allocator.zero_allocate(size, sizeof(com_interfaces__srv__CamAndColor_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = com_interfaces__srv__CamAndColor_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        com_interfaces__srv__CamAndColor_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
com_interfaces__srv__CamAndColor_Request__Sequence__fini(com_interfaces__srv__CamAndColor_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      com_interfaces__srv__CamAndColor_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

com_interfaces__srv__CamAndColor_Request__Sequence *
com_interfaces__srv__CamAndColor_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  com_interfaces__srv__CamAndColor_Request__Sequence * array = (com_interfaces__srv__CamAndColor_Request__Sequence *)allocator.allocate(sizeof(com_interfaces__srv__CamAndColor_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = com_interfaces__srv__CamAndColor_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
com_interfaces__srv__CamAndColor_Request__Sequence__destroy(com_interfaces__srv__CamAndColor_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    com_interfaces__srv__CamAndColor_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
com_interfaces__srv__CamAndColor_Request__Sequence__are_equal(const com_interfaces__srv__CamAndColor_Request__Sequence * lhs, const com_interfaces__srv__CamAndColor_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!com_interfaces__srv__CamAndColor_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
com_interfaces__srv__CamAndColor_Request__Sequence__copy(
  const com_interfaces__srv__CamAndColor_Request__Sequence * input,
  com_interfaces__srv__CamAndColor_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(com_interfaces__srv__CamAndColor_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    com_interfaces__srv__CamAndColor_Request * data =
      (com_interfaces__srv__CamAndColor_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!com_interfaces__srv__CamAndColor_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          com_interfaces__srv__CamAndColor_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!com_interfaces__srv__CamAndColor_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
com_interfaces__srv__CamAndColor_Response__init(com_interfaces__srv__CamAndColor_Response * msg)
{
  if (!msg) {
    return false;
  }
  // posx1
  // posy1
  // posx2
  // posy2
  // width
  // height
  return true;
}

void
com_interfaces__srv__CamAndColor_Response__fini(com_interfaces__srv__CamAndColor_Response * msg)
{
  if (!msg) {
    return;
  }
  // posx1
  // posy1
  // posx2
  // posy2
  // width
  // height
}

bool
com_interfaces__srv__CamAndColor_Response__are_equal(const com_interfaces__srv__CamAndColor_Response * lhs, const com_interfaces__srv__CamAndColor_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // posx1
  if (lhs->posx1 != rhs->posx1) {
    return false;
  }
  // posy1
  if (lhs->posy1 != rhs->posy1) {
    return false;
  }
  // posx2
  if (lhs->posx2 != rhs->posx2) {
    return false;
  }
  // posy2
  if (lhs->posy2 != rhs->posy2) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  return true;
}

bool
com_interfaces__srv__CamAndColor_Response__copy(
  const com_interfaces__srv__CamAndColor_Response * input,
  com_interfaces__srv__CamAndColor_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // posx1
  output->posx1 = input->posx1;
  // posy1
  output->posy1 = input->posy1;
  // posx2
  output->posx2 = input->posx2;
  // posy2
  output->posy2 = input->posy2;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  return true;
}

com_interfaces__srv__CamAndColor_Response *
com_interfaces__srv__CamAndColor_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  com_interfaces__srv__CamAndColor_Response * msg = (com_interfaces__srv__CamAndColor_Response *)allocator.allocate(sizeof(com_interfaces__srv__CamAndColor_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(com_interfaces__srv__CamAndColor_Response));
  bool success = com_interfaces__srv__CamAndColor_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
com_interfaces__srv__CamAndColor_Response__destroy(com_interfaces__srv__CamAndColor_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    com_interfaces__srv__CamAndColor_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
com_interfaces__srv__CamAndColor_Response__Sequence__init(com_interfaces__srv__CamAndColor_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  com_interfaces__srv__CamAndColor_Response * data = NULL;

  if (size) {
    data = (com_interfaces__srv__CamAndColor_Response *)allocator.zero_allocate(size, sizeof(com_interfaces__srv__CamAndColor_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = com_interfaces__srv__CamAndColor_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        com_interfaces__srv__CamAndColor_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
com_interfaces__srv__CamAndColor_Response__Sequence__fini(com_interfaces__srv__CamAndColor_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      com_interfaces__srv__CamAndColor_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

com_interfaces__srv__CamAndColor_Response__Sequence *
com_interfaces__srv__CamAndColor_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  com_interfaces__srv__CamAndColor_Response__Sequence * array = (com_interfaces__srv__CamAndColor_Response__Sequence *)allocator.allocate(sizeof(com_interfaces__srv__CamAndColor_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = com_interfaces__srv__CamAndColor_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
com_interfaces__srv__CamAndColor_Response__Sequence__destroy(com_interfaces__srv__CamAndColor_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    com_interfaces__srv__CamAndColor_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
com_interfaces__srv__CamAndColor_Response__Sequence__are_equal(const com_interfaces__srv__CamAndColor_Response__Sequence * lhs, const com_interfaces__srv__CamAndColor_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!com_interfaces__srv__CamAndColor_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
com_interfaces__srv__CamAndColor_Response__Sequence__copy(
  const com_interfaces__srv__CamAndColor_Response__Sequence * input,
  com_interfaces__srv__CamAndColor_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(com_interfaces__srv__CamAndColor_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    com_interfaces__srv__CamAndColor_Response * data =
      (com_interfaces__srv__CamAndColor_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!com_interfaces__srv__CamAndColor_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          com_interfaces__srv__CamAndColor_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!com_interfaces__srv__CamAndColor_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
