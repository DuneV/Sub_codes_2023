// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from com_interfaces:srv/Capture2model.idl
// generated code does not contain a copyright notice

#ifndef COM_INTERFACES__SRV__DETAIL__CAPTURE2MODEL__STRUCT_HPP_
#define COM_INTERFACES__SRV__DETAIL__CAPTURE2MODEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__com_interfaces__srv__Capture2model_Request __attribute__((deprecated))
#else
# define DEPRECATED__com_interfaces__srv__Capture2model_Request __declspec(deprecated)
#endif

namespace com_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Capture2model_Request_
{
  using Type = Capture2model_Request_<ContainerAllocator>;

  explicit Capture2model_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input = false;
    }
  }

  explicit Capture2model_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input = false;
    }
  }

  // field types and members
  using _input_type =
    bool;
  _input_type input;

  // setters for named parameter idiom
  Type & set__input(
    const bool & _arg)
  {
    this->input = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    com_interfaces::srv::Capture2model_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const com_interfaces::srv::Capture2model_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<com_interfaces::srv::Capture2model_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<com_interfaces::srv::Capture2model_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      com_interfaces::srv::Capture2model_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<com_interfaces::srv::Capture2model_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      com_interfaces::srv::Capture2model_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<com_interfaces::srv::Capture2model_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<com_interfaces::srv::Capture2model_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<com_interfaces::srv::Capture2model_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__com_interfaces__srv__Capture2model_Request
    std::shared_ptr<com_interfaces::srv::Capture2model_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__com_interfaces__srv__Capture2model_Request
    std::shared_ptr<com_interfaces::srv::Capture2model_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Capture2model_Request_ & other) const
  {
    if (this->input != other.input) {
      return false;
    }
    return true;
  }
  bool operator!=(const Capture2model_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Capture2model_Request_

// alias to use template instance with default allocator
using Capture2model_Request =
  com_interfaces::srv::Capture2model_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace com_interfaces


#ifndef _WIN32
# define DEPRECATED__com_interfaces__srv__Capture2model_Response __attribute__((deprecated))
#else
# define DEPRECATED__com_interfaces__srv__Capture2model_Response __declspec(deprecated)
#endif

namespace com_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Capture2model_Response_
{
  using Type = Capture2model_Response_<ContainerAllocator>;

  explicit Capture2model_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->quantity = 0ll;
    }
  }

  explicit Capture2model_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->quantity = 0ll;
    }
  }

  // field types and members
  using _quantity_type =
    int64_t;
  _quantity_type quantity;

  // setters for named parameter idiom
  Type & set__quantity(
    const int64_t & _arg)
  {
    this->quantity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    com_interfaces::srv::Capture2model_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const com_interfaces::srv::Capture2model_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<com_interfaces::srv::Capture2model_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<com_interfaces::srv::Capture2model_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      com_interfaces::srv::Capture2model_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<com_interfaces::srv::Capture2model_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      com_interfaces::srv::Capture2model_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<com_interfaces::srv::Capture2model_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<com_interfaces::srv::Capture2model_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<com_interfaces::srv::Capture2model_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__com_interfaces__srv__Capture2model_Response
    std::shared_ptr<com_interfaces::srv::Capture2model_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__com_interfaces__srv__Capture2model_Response
    std::shared_ptr<com_interfaces::srv::Capture2model_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Capture2model_Response_ & other) const
  {
    if (this->quantity != other.quantity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Capture2model_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Capture2model_Response_

// alias to use template instance with default allocator
using Capture2model_Response =
  com_interfaces::srv::Capture2model_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace com_interfaces

namespace com_interfaces
{

namespace srv
{

struct Capture2model
{
  using Request = com_interfaces::srv::Capture2model_Request;
  using Response = com_interfaces::srv::Capture2model_Response;
};

}  // namespace srv

}  // namespace com_interfaces

#endif  // COM_INTERFACES__SRV__DETAIL__CAPTURE2MODEL__STRUCT_HPP_
