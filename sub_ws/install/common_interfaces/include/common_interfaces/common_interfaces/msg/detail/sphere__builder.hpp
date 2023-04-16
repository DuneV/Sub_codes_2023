// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_interfaces:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef COMMON_INTERFACES__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define COMMON_INTERFACES__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "common_interfaces/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace common_interfaces
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::common_interfaces::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::common_interfaces::msg::Sphere radius(::common_interfaces::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_interfaces::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::common_interfaces::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::common_interfaces::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_interfaces::msg::Sphere>()
{
  return common_interfaces::msg::builder::Init_Sphere_center();
}

}  // namespace common_interfaces

#endif  // COMMON_INTERFACES__MSG__DETAIL__SPHERE__BUILDER_HPP_
