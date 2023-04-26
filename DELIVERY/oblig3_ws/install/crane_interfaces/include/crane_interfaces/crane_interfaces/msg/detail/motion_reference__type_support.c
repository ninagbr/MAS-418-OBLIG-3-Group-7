// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crane_interfaces:msg/MotionReference.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crane_interfaces/msg/detail/motion_reference__rosidl_typesupport_introspection_c.h"
#include "crane_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crane_interfaces/msg/detail/motion_reference__functions.h"
#include "crane_interfaces/msg/detail/motion_reference__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void crane_interfaces__msg__MotionReference__rosidl_typesupport_introspection_c__MotionReference_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crane_interfaces__msg__MotionReference__init(message_memory);
}

void crane_interfaces__msg__MotionReference__rosidl_typesupport_introspection_c__MotionReference_fini_function(void * message_memory)
{
  crane_interfaces__msg__MotionReference__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember crane_interfaces__msg__MotionReference__rosidl_typesupport_introspection_c__MotionReference_message_member_array[2] = {
  {
    "cyl_vel_ref",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crane_interfaces__msg__MotionReference, cyl_vel_ref),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cyl_pos_ref",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crane_interfaces__msg__MotionReference, cyl_pos_ref),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers crane_interfaces__msg__MotionReference__rosidl_typesupport_introspection_c__MotionReference_message_members = {
  "crane_interfaces__msg",  // message namespace
  "MotionReference",  // message name
  2,  // number of fields
  sizeof(crane_interfaces__msg__MotionReference),
  crane_interfaces__msg__MotionReference__rosidl_typesupport_introspection_c__MotionReference_message_member_array,  // message members
  crane_interfaces__msg__MotionReference__rosidl_typesupport_introspection_c__MotionReference_init_function,  // function to initialize message memory (memory has to be allocated)
  crane_interfaces__msg__MotionReference__rosidl_typesupport_introspection_c__MotionReference_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t crane_interfaces__msg__MotionReference__rosidl_typesupport_introspection_c__MotionReference_message_type_support_handle = {
  0,
  &crane_interfaces__msg__MotionReference__rosidl_typesupport_introspection_c__MotionReference_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crane_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crane_interfaces, msg, MotionReference)() {
  if (!crane_interfaces__msg__MotionReference__rosidl_typesupport_introspection_c__MotionReference_message_type_support_handle.typesupport_identifier) {
    crane_interfaces__msg__MotionReference__rosidl_typesupport_introspection_c__MotionReference_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &crane_interfaces__msg__MotionReference__rosidl_typesupport_introspection_c__MotionReference_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
