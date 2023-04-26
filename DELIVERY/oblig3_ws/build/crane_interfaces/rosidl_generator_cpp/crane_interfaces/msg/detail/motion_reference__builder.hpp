// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crane_interfaces:msg/MotionReference.idl
// generated code does not contain a copyright notice

#ifndef CRANE_INTERFACES__MSG__DETAIL__MOTION_REFERENCE__BUILDER_HPP_
#define CRANE_INTERFACES__MSG__DETAIL__MOTION_REFERENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crane_interfaces/msg/detail/motion_reference__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crane_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotionReference_cyl_pos_ref
{
public:
  explicit Init_MotionReference_cyl_pos_ref(::crane_interfaces::msg::MotionReference & msg)
  : msg_(msg)
  {}
  ::crane_interfaces::msg::MotionReference cyl_pos_ref(::crane_interfaces::msg::MotionReference::_cyl_pos_ref_type arg)
  {
    msg_.cyl_pos_ref = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crane_interfaces::msg::MotionReference msg_;
};

class Init_MotionReference_cyl_vel_ref
{
public:
  Init_MotionReference_cyl_vel_ref()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionReference_cyl_pos_ref cyl_vel_ref(::crane_interfaces::msg::MotionReference::_cyl_vel_ref_type arg)
  {
    msg_.cyl_vel_ref = std::move(arg);
    return Init_MotionReference_cyl_pos_ref(msg_);
  }

private:
  ::crane_interfaces::msg::MotionReference msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crane_interfaces::msg::MotionReference>()
{
  return crane_interfaces::msg::builder::Init_MotionReference_cyl_vel_ref();
}

}  // namespace crane_interfaces

#endif  // CRANE_INTERFACES__MSG__DETAIL__MOTION_REFERENCE__BUILDER_HPP_
