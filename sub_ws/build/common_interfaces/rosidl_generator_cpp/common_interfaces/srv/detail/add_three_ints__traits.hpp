// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from common_interfaces:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef COMMON_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_
#define COMMON_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "common_interfaces/srv/detail/add_three_ints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace common_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddThreeInts_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddThreeInts_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddThreeInts_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace common_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use common_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const common_interfaces::srv::AddThreeInts_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  common_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use common_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const common_interfaces::srv::AddThreeInts_Request & msg)
{
  return common_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<common_interfaces::srv::AddThreeInts_Request>()
{
  return "common_interfaces::srv::AddThreeInts_Request";
}

template<>
inline const char * name<common_interfaces::srv::AddThreeInts_Request>()
{
  return "common_interfaces/srv/AddThreeInts_Request";
}

template<>
struct has_fixed_size<common_interfaces::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<common_interfaces::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<common_interfaces::srv::AddThreeInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace common_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddThreeInts_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddThreeInts_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddThreeInts_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace common_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use common_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const common_interfaces::srv::AddThreeInts_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  common_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use common_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const common_interfaces::srv::AddThreeInts_Response & msg)
{
  return common_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<common_interfaces::srv::AddThreeInts_Response>()
{
  return "common_interfaces::srv::AddThreeInts_Response";
}

template<>
inline const char * name<common_interfaces::srv::AddThreeInts_Response>()
{
  return "common_interfaces/srv/AddThreeInts_Response";
}

template<>
struct has_fixed_size<common_interfaces::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<common_interfaces::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<common_interfaces::srv::AddThreeInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<common_interfaces::srv::AddThreeInts>()
{
  return "common_interfaces::srv::AddThreeInts";
}

template<>
inline const char * name<common_interfaces::srv::AddThreeInts>()
{
  return "common_interfaces/srv/AddThreeInts";
}

template<>
struct has_fixed_size<common_interfaces::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_fixed_size<common_interfaces::srv::AddThreeInts_Request>::value &&
    has_fixed_size<common_interfaces::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<common_interfaces::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_bounded_size<common_interfaces::srv::AddThreeInts_Request>::value &&
    has_bounded_size<common_interfaces::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct is_service<common_interfaces::srv::AddThreeInts>
  : std::true_type
{
};

template<>
struct is_service_request<common_interfaces::srv::AddThreeInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<common_interfaces::srv::AddThreeInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMON_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_
