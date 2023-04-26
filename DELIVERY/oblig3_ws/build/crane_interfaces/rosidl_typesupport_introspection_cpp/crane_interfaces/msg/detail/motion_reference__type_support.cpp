// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from crane_interfaces:msg/MotionReference.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "crane_interfaces/msg/detail/motion_reference__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace crane_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotionReference_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) crane_interfaces::msg::MotionReference(_init);
}

void MotionReference_fini_function(void * message_memory)
{
  auto typed_message = static_cast<crane_interfaces::msg::MotionReference *>(message_memory);
  typed_message->~MotionReference();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotionReference_message_member_array[2] = {
  {
    "cyl_vel_ref",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crane_interfaces::msg::MotionReference, cyl_vel_ref),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cyl_pos_ref",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crane_interfaces::msg::MotionReference, cyl_pos_ref),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotionReference_message_members = {
  "crane_interfaces::msg",  // message namespace
  "MotionReference",  // message name
  2,  // number of fields
  sizeof(crane_interfaces::msg::MotionReference),
  MotionReference_message_member_array,  // message members
  MotionReference_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionReference_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotionReference_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotionReference_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace crane_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<crane_interfaces::msg::MotionReference>()
{
  return &::crane_interfaces::msg::rosidl_typesupport_introspection_cpp::MotionReference_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crane_interfaces, msg, MotionReference)() {
  return &::crane_interfaces::msg::rosidl_typesupport_introspection_cpp::MotionReference_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
