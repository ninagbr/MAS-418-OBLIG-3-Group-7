// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crane_interfaces:msg/MotionReference.idl
// generated code does not contain a copyright notice

#ifndef CRANE_INTERFACES__MSG__DETAIL__MOTION_REFERENCE__STRUCT_HPP_
#define CRANE_INTERFACES__MSG__DETAIL__MOTION_REFERENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__crane_interfaces__msg__MotionReference __attribute__((deprecated))
#else
# define DEPRECATED__crane_interfaces__msg__MotionReference __declspec(deprecated)
#endif

namespace crane_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionReference_
{
  using Type = MotionReference_<ContainerAllocator>;

  explicit MotionReference_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cyl_vel_ref = 0.0;
      this->cyl_pos_ref = 0.0;
    }
  }

  explicit MotionReference_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cyl_vel_ref = 0.0;
      this->cyl_pos_ref = 0.0;
    }
  }

  // field types and members
  using _cyl_vel_ref_type =
    double;
  _cyl_vel_ref_type cyl_vel_ref;
  using _cyl_pos_ref_type =
    double;
  _cyl_pos_ref_type cyl_pos_ref;

  // setters for named parameter idiom
  Type & set__cyl_vel_ref(
    const double & _arg)
  {
    this->cyl_vel_ref = _arg;
    return *this;
  }
  Type & set__cyl_pos_ref(
    const double & _arg)
  {
    this->cyl_pos_ref = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crane_interfaces::msg::MotionReference_<ContainerAllocator> *;
  using ConstRawPtr =
    const crane_interfaces::msg::MotionReference_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crane_interfaces::msg::MotionReference_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crane_interfaces::msg::MotionReference_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crane_interfaces::msg::MotionReference_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crane_interfaces::msg::MotionReference_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crane_interfaces::msg::MotionReference_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crane_interfaces::msg::MotionReference_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crane_interfaces::msg::MotionReference_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crane_interfaces::msg::MotionReference_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crane_interfaces__msg__MotionReference
    std::shared_ptr<crane_interfaces::msg::MotionReference_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crane_interfaces__msg__MotionReference
    std::shared_ptr<crane_interfaces::msg::MotionReference_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionReference_ & other) const
  {
    if (this->cyl_vel_ref != other.cyl_vel_ref) {
      return false;
    }
    if (this->cyl_pos_ref != other.cyl_pos_ref) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionReference_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionReference_

// alias to use template instance with default allocator
using MotionReference =
  crane_interfaces::msg::MotionReference_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace crane_interfaces

#endif  // CRANE_INTERFACES__MSG__DETAIL__MOTION_REFERENCE__STRUCT_HPP_
