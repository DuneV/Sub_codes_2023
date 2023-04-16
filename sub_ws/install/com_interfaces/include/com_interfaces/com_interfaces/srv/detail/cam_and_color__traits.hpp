// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from com_interfaces:srv/CamAndColor.idl
// generated code does not contain a copyright notice

#ifndef COM_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__TRAITS_HPP_
#define COM_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "com_interfaces/srv/detail/cam_and_color__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace com_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CamAndColor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: cam
  {
    out << "cam: ";
    rosidl_generator_traits::value_to_yaml(msg.cam, out);
    out << ", ";
  }

  // member: r
  {
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << ", ";
  }

  // member: g
  {
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CamAndColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cam
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam: ";
    rosidl_generator_traits::value_to_yaml(msg.cam, out);
    out << "\n";
  }

  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CamAndColor_Request & msg, bool use_flow_style = false)
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

}  // namespace com_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use com_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const com_interfaces::srv::CamAndColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  com_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use com_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const com_interfaces::srv::CamAndColor_Request & msg)
{
  return com_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<com_interfaces::srv::CamAndColor_Request>()
{
  return "com_interfaces::srv::CamAndColor_Request";
}

template<>
inline const char * name<com_interfaces::srv::CamAndColor_Request>()
{
  return "com_interfaces/srv/CamAndColor_Request";
}

template<>
struct has_fixed_size<com_interfaces::srv::CamAndColor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<com_interfaces::srv::CamAndColor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<com_interfaces::srv::CamAndColor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace com_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CamAndColor_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: posx1
  {
    out << "posx1: ";
    rosidl_generator_traits::value_to_yaml(msg.posx1, out);
    out << ", ";
  }

  // member: posy1
  {
    out << "posy1: ";
    rosidl_generator_traits::value_to_yaml(msg.posy1, out);
    out << ", ";
  }

  // member: posx2
  {
    out << "posx2: ";
    rosidl_generator_traits::value_to_yaml(msg.posx2, out);
    out << ", ";
  }

  // member: posy2
  {
    out << "posy2: ";
    rosidl_generator_traits::value_to_yaml(msg.posy2, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CamAndColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: posx1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posx1: ";
    rosidl_generator_traits::value_to_yaml(msg.posx1, out);
    out << "\n";
  }

  // member: posy1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posy1: ";
    rosidl_generator_traits::value_to_yaml(msg.posy1, out);
    out << "\n";
  }

  // member: posx2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posx2: ";
    rosidl_generator_traits::value_to_yaml(msg.posx2, out);
    out << "\n";
  }

  // member: posy2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posy2: ";
    rosidl_generator_traits::value_to_yaml(msg.posy2, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CamAndColor_Response & msg, bool use_flow_style = false)
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

}  // namespace com_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use com_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const com_interfaces::srv::CamAndColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  com_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use com_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const com_interfaces::srv::CamAndColor_Response & msg)
{
  return com_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<com_interfaces::srv::CamAndColor_Response>()
{
  return "com_interfaces::srv::CamAndColor_Response";
}

template<>
inline const char * name<com_interfaces::srv::CamAndColor_Response>()
{
  return "com_interfaces/srv/CamAndColor_Response";
}

template<>
struct has_fixed_size<com_interfaces::srv::CamAndColor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<com_interfaces::srv::CamAndColor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<com_interfaces::srv::CamAndColor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<com_interfaces::srv::CamAndColor>()
{
  return "com_interfaces::srv::CamAndColor";
}

template<>
inline const char * name<com_interfaces::srv::CamAndColor>()
{
  return "com_interfaces/srv/CamAndColor";
}

template<>
struct has_fixed_size<com_interfaces::srv::CamAndColor>
  : std::integral_constant<
    bool,
    has_fixed_size<com_interfaces::srv::CamAndColor_Request>::value &&
    has_fixed_size<com_interfaces::srv::CamAndColor_Response>::value
  >
{
};

template<>
struct has_bounded_size<com_interfaces::srv::CamAndColor>
  : std::integral_constant<
    bool,
    has_bounded_size<com_interfaces::srv::CamAndColor_Request>::value &&
    has_bounded_size<com_interfaces::srv::CamAndColor_Response>::value
  >
{
};

template<>
struct is_service<com_interfaces::srv::CamAndColor>
  : std::true_type
{
};

template<>
struct is_service_request<com_interfaces::srv::CamAndColor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<com_interfaces::srv::CamAndColor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COM_INTERFACES__SRV__DETAIL__CAM_AND_COLOR__TRAITS_HPP_
