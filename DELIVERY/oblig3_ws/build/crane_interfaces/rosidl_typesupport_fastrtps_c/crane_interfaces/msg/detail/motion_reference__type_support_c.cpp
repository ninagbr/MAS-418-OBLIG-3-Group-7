// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from crane_interfaces:msg/MotionReference.idl
// generated code does not contain a copyright notice
#include "crane_interfaces/msg/detail/motion_reference__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "crane_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "crane_interfaces/msg/detail/motion_reference__struct.h"
#include "crane_interfaces/msg/detail/motion_reference__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MotionReference__ros_msg_type = crane_interfaces__msg__MotionReference;

static bool _MotionReference__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionReference__ros_msg_type * ros_message = static_cast<const _MotionReference__ros_msg_type *>(untyped_ros_message);
  // Field name: cyl_vel_ref
  {
    cdr << ros_message->cyl_vel_ref;
  }

  // Field name: cyl_pos_ref
  {
    cdr << ros_message->cyl_pos_ref;
  }

  return true;
}

static bool _MotionReference__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionReference__ros_msg_type * ros_message = static_cast<_MotionReference__ros_msg_type *>(untyped_ros_message);
  // Field name: cyl_vel_ref
  {
    cdr >> ros_message->cyl_vel_ref;
  }

  // Field name: cyl_pos_ref
  {
    cdr >> ros_message->cyl_pos_ref;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crane_interfaces
size_t get_serialized_size_crane_interfaces__msg__MotionReference(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionReference__ros_msg_type * ros_message = static_cast<const _MotionReference__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cyl_vel_ref
  {
    size_t item_size = sizeof(ros_message->cyl_vel_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cyl_pos_ref
  {
    size_t item_size = sizeof(ros_message->cyl_pos_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotionReference__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crane_interfaces__msg__MotionReference(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crane_interfaces
size_t max_serialized_size_crane_interfaces__msg__MotionReference(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: cyl_vel_ref
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cyl_pos_ref
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MotionReference__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_crane_interfaces__msg__MotionReference(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotionReference = {
  "crane_interfaces::msg",
  "MotionReference",
  _MotionReference__cdr_serialize,
  _MotionReference__cdr_deserialize,
  _MotionReference__get_serialized_size,
  _MotionReference__max_serialized_size
};

static rosidl_message_type_support_t _MotionReference__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionReference,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crane_interfaces, msg, MotionReference)() {
  return &_MotionReference__type_support;
}

#if defined(__cplusplus)
}
#endif
