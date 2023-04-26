// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from crane_interfaces:msg/MotionReference.idl
// generated code does not contain a copyright notice
#include "crane_interfaces/msg/detail/motion_reference__rosidl_typesupport_fastrtps_cpp.hpp"
#include "crane_interfaces/msg/detail/motion_reference__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace crane_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crane_interfaces
cdr_serialize(
  const crane_interfaces::msg::MotionReference & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cyl_vel_ref
  cdr << ros_message.cyl_vel_ref;
  // Member: cyl_pos_ref
  cdr << ros_message.cyl_pos_ref;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crane_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  crane_interfaces::msg::MotionReference & ros_message)
{
  // Member: cyl_vel_ref
  cdr >> ros_message.cyl_vel_ref;

  // Member: cyl_pos_ref
  cdr >> ros_message.cyl_pos_ref;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crane_interfaces
get_serialized_size(
  const crane_interfaces::msg::MotionReference & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cyl_vel_ref
  {
    size_t item_size = sizeof(ros_message.cyl_vel_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cyl_pos_ref
  {
    size_t item_size = sizeof(ros_message.cyl_pos_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crane_interfaces
max_serialized_size_MotionReference(
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


  // Member: cyl_vel_ref
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cyl_pos_ref
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _MotionReference__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const crane_interfaces::msg::MotionReference *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotionReference__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<crane_interfaces::msg::MotionReference *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotionReference__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const crane_interfaces::msg::MotionReference *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotionReference__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MotionReference(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MotionReference__callbacks = {
  "crane_interfaces::msg",
  "MotionReference",
  _MotionReference__cdr_serialize,
  _MotionReference__cdr_deserialize,
  _MotionReference__get_serialized_size,
  _MotionReference__max_serialized_size
};

static rosidl_message_type_support_t _MotionReference__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotionReference__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace crane_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_crane_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<crane_interfaces::msg::MotionReference>()
{
  return &crane_interfaces::msg::typesupport_fastrtps_cpp::_MotionReference__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crane_interfaces, msg, MotionReference)() {
  return &crane_interfaces::msg::typesupport_fastrtps_cpp::_MotionReference__handle;
}

#ifdef __cplusplus
}
#endif
