// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crane_interfaces:msg/MotionReference.idl
// generated code does not contain a copyright notice

#ifndef CRANE_INTERFACES__MSG__DETAIL__MOTION_REFERENCE__STRUCT_H_
#define CRANE_INTERFACES__MSG__DETAIL__MOTION_REFERENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotionReference in the package crane_interfaces.
typedef struct crane_interfaces__msg__MotionReference
{
  double cyl_vel_ref;
  double cyl_pos_ref;
} crane_interfaces__msg__MotionReference;

// Struct for a sequence of crane_interfaces__msg__MotionReference.
typedef struct crane_interfaces__msg__MotionReference__Sequence
{
  crane_interfaces__msg__MotionReference * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crane_interfaces__msg__MotionReference__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRANE_INTERFACES__MSG__DETAIL__MOTION_REFERENCE__STRUCT_H_
