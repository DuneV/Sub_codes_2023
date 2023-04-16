// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/Capture2model.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__CAPTURE2MODEL__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__CAPTURE2MODEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/capture2model__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_Capture2model_Request_input
{
public:
  Init_Capture2model_Request_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::Capture2model_Request input(::tutorial_interfaces::srv::Capture2model_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::Capture2model_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::Capture2model_Request>()
{
  return tutorial_interfaces::srv::builder::Init_Capture2model_Request_input();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_Capture2model_Response_quantity
{
public:
  Init_Capture2model_Response_quantity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::Capture2model_Response quantity(::tutorial_interfaces::srv::Capture2model_Response::_quantity_type arg)
  {
    msg_.quantity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::Capture2model_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::Capture2model_Response>()
{
  return tutorial_interfaces::srv::builder::Init_Capture2model_Response_quantity();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__CAPTURE2MODEL__BUILDER_HPP_
