// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from com_interfaces:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef COM_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
#define COM_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "com_interfaces/srv/detail/add_three_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace com_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Request_d
{
public:
  explicit Init_AddThreeInts_Request_d(::com_interfaces::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  ::com_interfaces::srv::AddThreeInts_Request d(::com_interfaces::srv::AddThreeInts_Request::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::com_interfaces::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_c
{
public:
  explicit Init_AddThreeInts_Request_c(::com_interfaces::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddThreeInts_Request_d c(::com_interfaces::srv::AddThreeInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_AddThreeInts_Request_d(msg_);
  }

private:
  ::com_interfaces::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_b
{
public:
  explicit Init_AddThreeInts_Request_b(::com_interfaces::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddThreeInts_Request_c b(::com_interfaces::srv::AddThreeInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddThreeInts_Request_c(msg_);
  }

private:
  ::com_interfaces::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_a
{
public:
  Init_AddThreeInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddThreeInts_Request_b a(::com_interfaces::srv::AddThreeInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddThreeInts_Request_b(msg_);
  }

private:
  ::com_interfaces::srv::AddThreeInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::com_interfaces::srv::AddThreeInts_Request>()
{
  return com_interfaces::srv::builder::Init_AddThreeInts_Request_a();
}

}  // namespace com_interfaces


namespace com_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Response_sum
{
public:
  Init_AddThreeInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::com_interfaces::srv::AddThreeInts_Response sum(::com_interfaces::srv::AddThreeInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::com_interfaces::srv::AddThreeInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::com_interfaces::srv::AddThreeInts_Response>()
{
  return com_interfaces::srv::builder::Init_AddThreeInts_Response_sum();
}

}  // namespace com_interfaces

#endif  // COM_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
