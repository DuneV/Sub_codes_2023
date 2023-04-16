// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from com_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef COM_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
#define COM_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "com_interfaces/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace com_interfaces
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::com_interfaces::msg::Num num(::com_interfaces::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::com_interfaces::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::com_interfaces::msg::Num>()
{
  return com_interfaces::msg::builder::Init_Num_num();
}

}  // namespace com_interfaces

#endif  // COM_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
