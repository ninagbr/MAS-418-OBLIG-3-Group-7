// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crane_interfaces:msg/MotionReference.idl
// generated code does not contain a copyright notice
#include "crane_interfaces/msg/detail/motion_reference__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
crane_interfaces__msg__MotionReference__init(crane_interfaces__msg__MotionReference * msg)
{
  if (!msg) {
    return false;
  }
  // cyl_vel_ref
  // cyl_pos_ref
  return true;
}

void
crane_interfaces__msg__MotionReference__fini(crane_interfaces__msg__MotionReference * msg)
{
  if (!msg) {
    return;
  }
  // cyl_vel_ref
  // cyl_pos_ref
}

bool
crane_interfaces__msg__MotionReference__are_equal(const crane_interfaces__msg__MotionReference * lhs, const crane_interfaces__msg__MotionReference * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cyl_vel_ref
  if (lhs->cyl_vel_ref != rhs->cyl_vel_ref) {
    return false;
  }
  // cyl_pos_ref
  if (lhs->cyl_pos_ref != rhs->cyl_pos_ref) {
    return false;
  }
  return true;
}

bool
crane_interfaces__msg__MotionReference__copy(
  const crane_interfaces__msg__MotionReference * input,
  crane_interfaces__msg__MotionReference * output)
{
  if (!input || !output) {
    return false;
  }
  // cyl_vel_ref
  output->cyl_vel_ref = input->cyl_vel_ref;
  // cyl_pos_ref
  output->cyl_pos_ref = input->cyl_pos_ref;
  return true;
}

crane_interfaces__msg__MotionReference *
crane_interfaces__msg__MotionReference__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crane_interfaces__msg__MotionReference * msg = (crane_interfaces__msg__MotionReference *)allocator.allocate(sizeof(crane_interfaces__msg__MotionReference), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crane_interfaces__msg__MotionReference));
  bool success = crane_interfaces__msg__MotionReference__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crane_interfaces__msg__MotionReference__destroy(crane_interfaces__msg__MotionReference * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crane_interfaces__msg__MotionReference__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crane_interfaces__msg__MotionReference__Sequence__init(crane_interfaces__msg__MotionReference__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crane_interfaces__msg__MotionReference * data = NULL;

  if (size) {
    data = (crane_interfaces__msg__MotionReference *)allocator.zero_allocate(size, sizeof(crane_interfaces__msg__MotionReference), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crane_interfaces__msg__MotionReference__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crane_interfaces__msg__MotionReference__fini(&data[i - 1]);
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
crane_interfaces__msg__MotionReference__Sequence__fini(crane_interfaces__msg__MotionReference__Sequence * array)
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
      crane_interfaces__msg__MotionReference__fini(&array->data[i]);
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

crane_interfaces__msg__MotionReference__Sequence *
crane_interfaces__msg__MotionReference__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crane_interfaces__msg__MotionReference__Sequence * array = (crane_interfaces__msg__MotionReference__Sequence *)allocator.allocate(sizeof(crane_interfaces__msg__MotionReference__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crane_interfaces__msg__MotionReference__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crane_interfaces__msg__MotionReference__Sequence__destroy(crane_interfaces__msg__MotionReference__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crane_interfaces__msg__MotionReference__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crane_interfaces__msg__MotionReference__Sequence__are_equal(const crane_interfaces__msg__MotionReference__Sequence * lhs, const crane_interfaces__msg__MotionReference__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crane_interfaces__msg__MotionReference__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crane_interfaces__msg__MotionReference__Sequence__copy(
  const crane_interfaces__msg__MotionReference__Sequence * input,
  crane_interfaces__msg__MotionReference__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crane_interfaces__msg__MotionReference);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crane_interfaces__msg__MotionReference * data =
      (crane_interfaces__msg__MotionReference *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crane_interfaces__msg__MotionReference__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crane_interfaces__msg__MotionReference__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crane_interfaces__msg__MotionReference__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
