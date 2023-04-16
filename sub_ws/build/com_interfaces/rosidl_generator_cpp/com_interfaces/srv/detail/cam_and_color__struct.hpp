// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from com_interfaces:srv/CamAndColor.idl
// generated code does not contain a copyright notice

#ifndef COM_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__STRUCT_HPP_
#define COM_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__com_interfaces__srv__CamAndColor_Request __attribute__((deprecated))
#else
# define DEPRECATED__com_interfaces__srv__CamAndColor_Request __declspec(deprecated)
#endif

namespace com_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CamAndColor_Request_
{
  using Type = CamAndColor_Request_<ContainerAllocator>;

  explicit CamAndColor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cam = 0ll;
      this->r = 0ll;
      this->g = 0ll;
      this->b = 0ll;
    }
  }

  explicit CamAndColor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cam = 0ll;
      this->r = 0ll;
      this->g = 0ll;
      this->b = 0ll;
    }
  }

  // field types and members
  using _cam_type =
    int64_t;
  _cam_type cam;
  using _r_type =
    int64_t;
  _r_type r;
  using _g_type =
    int64_t;
  _g_type g;
  using _b_type =
    int64_t;
  _b_type b;

  // setters for named parameter idiom
  Type & set__cam(
    const int64_t & _arg)
  {
    this->cam = _arg;
    return *this;
  }
  Type & set__r(
    const int64_t & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__g(
    const int64_t & _arg)
  {
    this->g = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    com_interfaces::srv::CamAndColor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const com_interfaces::srv::CamAndColor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<com_interfaces::srv::CamAndColor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<com_interfaces::srv::CamAndColor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      com_interfaces::srv::CamAndColor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<com_interfaces::srv::CamAndColor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      com_interfaces::srv::CamAndColor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<com_interfaces::srv::CamAndColor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<com_interfaces::srv::CamAndColor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<com_interfaces::srv::CamAndColor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__com_interfaces__srv__CamAndColor_Request
    std::shared_ptr<com_interfaces::srv::CamAndColor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__com_interfaces__srv__CamAndColor_Request
    std::shared_ptr<com_interfaces::srv::CamAndColor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CamAndColor_Request_ & other) const
  {
    if (this->cam != other.cam) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->g != other.g) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const CamAndColor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CamAndColor_Request_

// alias to use template instance with default allocator
using CamAndColor_Request =
  com_interfaces::srv::CamAndColor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace com_interfaces


#ifndef _WIN32
# define DEPRECATED__com_interfaces__srv__CamAndColor_Response __attribute__((deprecated))
#else
# define DEPRECATED__com_interfaces__srv__CamAndColor_Response __declspec(deprecated)
#endif

namespace com_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CamAndColor_Response_
{
  using Type = CamAndColor_Response_<ContainerAllocator>;

  explicit CamAndColor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posx1 = 0ll;
      this->posy1 = 0ll;
      this->posx2 = 0ll;
      this->posy2 = 0ll;
      this->width = 0ll;
      this->height = 0ll;
    }
  }

  explicit CamAndColor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posx1 = 0ll;
      this->posy1 = 0ll;
      this->posx2 = 0ll;
      this->posy2 = 0ll;
      this->width = 0ll;
      this->height = 0ll;
    }
  }

  // field types and members
  using _posx1_type =
    int64_t;
  _posx1_type posx1;
  using _posy1_type =
    int64_t;
  _posy1_type posy1;
  using _posx2_type =
    int64_t;
  _posx2_type posx2;
  using _posy2_type =
    int64_t;
  _posy2_type posy2;
  using _width_type =
    int64_t;
  _width_type width;
  using _height_type =
    int64_t;
  _height_type height;

  // setters for named parameter idiom
  Type & set__posx1(
    const int64_t & _arg)
  {
    this->posx1 = _arg;
    return *this;
  }
  Type & set__posy1(
    const int64_t & _arg)
  {
    this->posy1 = _arg;
    return *this;
  }
  Type & set__posx2(
    const int64_t & _arg)
  {
    this->posx2 = _arg;
    return *this;
  }
  Type & set__posy2(
    const int64_t & _arg)
  {
    this->posy2 = _arg;
    return *this;
  }
  Type & set__width(
    const int64_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const int64_t & _arg)
  {
    this->height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    com_interfaces::srv::CamAndColor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const com_interfaces::srv::CamAndColor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<com_interfaces::srv::CamAndColor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<com_interfaces::srv::CamAndColor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      com_interfaces::srv::CamAndColor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<com_interfaces::srv::CamAndColor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      com_interfaces::srv::CamAndColor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<com_interfaces::srv::CamAndColor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<com_interfaces::srv::CamAndColor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<com_interfaces::srv::CamAndColor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__com_interfaces__srv__CamAndColor_Response
    std::shared_ptr<com_interfaces::srv::CamAndColor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__com_interfaces__srv__CamAndColor_Response
    std::shared_ptr<com_interfaces::srv::CamAndColor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CamAndColor_Response_ & other) const
  {
    if (this->posx1 != other.posx1) {
      return false;
    }
    if (this->posy1 != other.posy1) {
      return false;
    }
    if (this->posx2 != other.posx2) {
      return false;
    }
    if (this->posy2 != other.posy2) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    return true;
  }
  bool operator!=(const CamAndColor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CamAndColor_Response_

// alias to use template instance with default allocator
using CamAndColor_Response =
  com_interfaces::srv::CamAndColor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace com_interfaces

namespace com_interfaces
{

namespace srv
{

struct CamAndColor
{
  using Request = com_interfaces::srv::CamAndColor_Request;
  using Response = com_interfaces::srv::CamAndColor_Response;
};

}  // namespace srv

}  // namespace com_interfaces

#endif  // COM_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__STRUCT_HPP_
