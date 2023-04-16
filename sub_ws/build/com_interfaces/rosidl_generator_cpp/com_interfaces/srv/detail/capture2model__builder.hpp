// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from com_interfaces:srv/Capture2model.idl
// generated code does not contain a copyright notice

#ifndef COM_INTERFACES__SRV__DETAIL__CAPTURE2MODEL__BUILDER_HPP_
#define COM_INTERFACES__SRV__DETAIL__CAPTURE2MODEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "com_interfaces/srv/detail/capture2model__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace com_interfaces
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
  ::com_interfaces::srv::Capture2model_Request input(::com_interfaces::srv::Capture2model_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::com_interfaces::srv::Capture2model_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::com_interfaces::srv::Capture2model_Request>()
{
  return com_interfaces::srv::builder::Init_Capture2model_Request_input();
}

}  // namespace com_interfaces


namespace com_interfaces
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
  ::com_interfaces::srv::Capture2model_Response quantity(::com_interfaces::srv::Capture2model_Response::_quantity_type arg)
  {
    msg_.quantity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::com_interfaces::srv::Capture2model_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::com_interfaces::srv::Capture2model_Response>()
{
  return com_interfaces::srv::builder::Init_Capture2model_Response_quantity();
}

}  // namespace com_interfaces

#endif  // COM_INTERFACES__SRV__DETAIL__CAPTURE2MODEL__BUILDER_HPP_
