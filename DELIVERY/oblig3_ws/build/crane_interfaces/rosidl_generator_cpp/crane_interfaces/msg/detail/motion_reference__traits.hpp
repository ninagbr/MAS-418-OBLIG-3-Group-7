// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crane_interfaces:msg/MotionReference.idl
// generated code does not contain a copyright notice

#ifndef CRANE_INTERFACES__MSG__DETAIL__MOTION_REFERENCE__TRAITS_HPP_
#define CRANE_INTERFACES__MSG__DETAIL__MOTION_REFERENCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "crane_interfaces/msg/detail/motion_reference__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace crane_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotionReference & msg,
  std::ostream & out)
{
  out << "{";
  // member: cyl_vel_ref
  {
    out << "cyl_vel_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.cyl_vel_ref, out);
    out << ", ";
  }

  // member: cyl_pos_ref
  {
    out << "cyl_pos_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.cyl_pos_ref, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotionReference & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cyl_vel_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cyl_vel_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.cyl_vel_ref, out);
    out << "\n";
  }

  // member: cyl_pos_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cyl_pos_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.cyl_pos_ref, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotionReference & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace crane_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use crane_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crane_interfaces::msg::MotionReference & msg,
  std::ostream & out, size_t indentation = 0)
{
  crane_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crane_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const crane_interfaces::msg::MotionReference & msg)
{
  return crane_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<crane_interfaces::msg::MotionReference>()
{
  return "crane_interfaces::msg::MotionReference";
}

template<>
inline const char * name<crane_interfaces::msg::MotionReference>()
{
  return "crane_interfaces/msg/MotionReference";
}

template<>
struct has_fixed_size<crane_interfaces::msg::MotionReference>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<crane_interfaces::msg::MotionReference>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<crane_interfaces::msg::MotionReference>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CRANE_INTERFACES__MSG__DETAIL__MOTION_REFERENCE__TRAITS_HPP_
