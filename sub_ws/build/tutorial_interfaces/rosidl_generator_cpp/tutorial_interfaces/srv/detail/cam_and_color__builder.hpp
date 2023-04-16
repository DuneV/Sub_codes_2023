// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/CamAndColor.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/cam_and_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_CamAndColor_Request_b
{
public:
  explicit Init_CamAndColor_Request_b(::tutorial_interfaces::srv::CamAndColor_Request & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::CamAndColor_Request b(::tutorial_interfaces::srv::CamAndColor_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::CamAndColor_Request msg_;
};

class Init_CamAndColor_Request_g
{
public:
  explicit Init_CamAndColor_Request_g(::tutorial_interfaces::srv::CamAndColor_Request & msg)
  : msg_(msg)
  {}
  Init_CamAndColor_Request_b g(::tutorial_interfaces::srv::CamAndColor_Request::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_CamAndColor_Request_b(msg_);
  }

private:
  ::tutorial_interfaces::srv::CamAndColor_Request msg_;
};

class Init_CamAndColor_Request_r
{
public:
  explicit Init_CamAndColor_Request_r(::tutorial_interfaces::srv::CamAndColor_Request & msg)
  : msg_(msg)
  {}
  Init_CamAndColor_Request_g r(::tutorial_interfaces::srv::CamAndColor_Request::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_CamAndColor_Request_g(msg_);
  }

private:
  ::tutorial_interfaces::srv::CamAndColor_Request msg_;
};

class Init_CamAndColor_Request_cam
{
public:
  Init_CamAndColor_Request_cam()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CamAndColor_Request_r cam(::tutorial_interfaces::srv::CamAndColor_Request::_cam_type arg)
  {
    msg_.cam = std::move(arg);
    return Init_CamAndColor_Request_r(msg_);
  }

private:
  ::tutorial_interfaces::srv::CamAndColor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::CamAndColor_Request>()
{
  return tutorial_interfaces::srv::builder::Init_CamAndColor_Request_cam();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_CamAndColor_Response_height
{
public:
  explicit Init_CamAndColor_Response_height(::tutorial_interfaces::srv::CamAndColor_Response & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::CamAndColor_Response height(::tutorial_interfaces::srv::CamAndColor_Response::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::CamAndColor_Response msg_;
};

class Init_CamAndColor_Response_width
{
public:
  explicit Init_CamAndColor_Response_width(::tutorial_interfaces::srv::CamAndColor_Response & msg)
  : msg_(msg)
  {}
  Init_CamAndColor_Response_height width(::tutorial_interfaces::srv::CamAndColor_Response::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_CamAndColor_Response_height(msg_);
  }

private:
  ::tutorial_interfaces::srv::CamAndColor_Response msg_;
};

class Init_CamAndColor_Response_posy2
{
public:
  explicit Init_CamAndColor_Response_posy2(::tutorial_interfaces::srv::CamAndColor_Response & msg)
  : msg_(msg)
  {}
  Init_CamAndColor_Response_width posy2(::tutorial_interfaces::srv::CamAndColor_Response::_posy2_type arg)
  {
    msg_.posy2 = std::move(arg);
    return Init_CamAndColor_Response_width(msg_);
  }

private:
  ::tutorial_interfaces::srv::CamAndColor_Response msg_;
};

class Init_CamAndColor_Response_posx2
{
public:
  explicit Init_CamAndColor_Response_posx2(::tutorial_interfaces::srv::CamAndColor_Response & msg)
  : msg_(msg)
  {}
  Init_CamAndColor_Response_posy2 posx2(::tutorial_interfaces::srv::CamAndColor_Response::_posx2_type arg)
  {
    msg_.posx2 = std::move(arg);
    return Init_CamAndColor_Response_posy2(msg_);
  }

private:
  ::tutorial_interfaces::srv::CamAndColor_Response msg_;
};

class Init_CamAndColor_Response_posy1
{
public:
  explicit Init_CamAndColor_Response_posy1(::tutorial_interfaces::srv::CamAndColor_Response & msg)
  : msg_(msg)
  {}
  Init_CamAndColor_Response_posx2 posy1(::tutorial_interfaces::srv::CamAndColor_Response::_posy1_type arg)
  {
    msg_.posy1 = std::move(arg);
    return Init_CamAndColor_Response_posx2(msg_);
  }

private:
  ::tutorial_interfaces::srv::CamAndColor_Response msg_;
};

class Init_CamAndColor_Response_posx1
{
public:
  Init_CamAndColor_Response_posx1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CamAndColor_Response_posy1 posx1(::tutorial_interfaces::srv::CamAndColor_Response::_posx1_type arg)
  {
    msg_.posx1 = std::move(arg);
    return Init_CamAndColor_Response_posy1(msg_);
  }

private:
  ::tutorial_interfaces::srv::CamAndColor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::CamAndColor_Response>()
{
  return tutorial_interfaces::srv::builder::Init_CamAndColor_Response_posx1();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__BUILDER_HPP_
