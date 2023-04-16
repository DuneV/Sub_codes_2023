# generated from rosidl_generator_py/resource/_idl.py.em
# with input from com_interfaces:srv/CamAndColor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CamAndColor_Request(type):
    """Metaclass of message 'CamAndColor_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('com_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'com_interfaces.srv.CamAndColor_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cam_and_color__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cam_and_color__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cam_and_color__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cam_and_color__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cam_and_color__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CamAndColor_Request(metaclass=Metaclass_CamAndColor_Request):
    """Message class 'CamAndColor_Request'."""

    __slots__ = [
        '_cam',
        '_r',
        '_g',
        '_b',
    ]

    _fields_and_field_types = {
        'cam': 'int64',
        'r': 'int64',
        'g': 'int64',
        'b': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cam = kwargs.get('cam', int())
        self.r = kwargs.get('r', int())
        self.g = kwargs.get('g', int())
        self.b = kwargs.get('b', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.cam != other.cam:
            return False
        if self.r != other.r:
            return False
        if self.g != other.g:
            return False
        if self.b != other.b:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cam(self):
        """Message field 'cam'."""
        return self._cam

    @cam.setter
    def cam(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cam' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'cam' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._cam = value

    @builtins.property
    def r(self):
        """Message field 'r'."""
        return self._r

    @r.setter
    def r(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'r' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'r' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._r = value

    @builtins.property
    def g(self):
        """Message field 'g'."""
        return self._g

    @g.setter
    def g(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'g' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'g' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._g = value

    @builtins.property
    def b(self):
        """Message field 'b'."""
        return self._b

    @b.setter
    def b(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'b' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._b = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CamAndColor_Response(type):
    """Metaclass of message 'CamAndColor_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('com_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'com_interfaces.srv.CamAndColor_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cam_and_color__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cam_and_color__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cam_and_color__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cam_and_color__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cam_and_color__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CamAndColor_Response(metaclass=Metaclass_CamAndColor_Response):
    """Message class 'CamAndColor_Response'."""

    __slots__ = [
        '_posx1',
        '_posy1',
        '_posx2',
        '_posy2',
        '_width',
        '_height',
    ]

    _fields_and_field_types = {
        'posx1': 'int64',
        'posy1': 'int64',
        'posx2': 'int64',
        'posy2': 'int64',
        'width': 'int64',
        'height': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.posx1 = kwargs.get('posx1', int())
        self.posy1 = kwargs.get('posy1', int())
        self.posx2 = kwargs.get('posx2', int())
        self.posy2 = kwargs.get('posy2', int())
        self.width = kwargs.get('width', int())
        self.height = kwargs.get('height', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.posx1 != other.posx1:
            return False
        if self.posy1 != other.posy1:
            return False
        if self.posx2 != other.posx2:
            return False
        if self.posy2 != other.posy2:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def posx1(self):
        """Message field 'posx1'."""
        return self._posx1

    @posx1.setter
    def posx1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'posx1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'posx1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._posx1 = value

    @builtins.property
    def posy1(self):
        """Message field 'posy1'."""
        return self._posy1

    @posy1.setter
    def posy1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'posy1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'posy1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._posy1 = value

    @builtins.property
    def posx2(self):
        """Message field 'posx2'."""
        return self._posx2

    @posx2.setter
    def posx2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'posx2' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'posx2' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._posx2 = value

    @builtins.property
    def posy2(self):
        """Message field 'posy2'."""
        return self._posy2

    @posy2.setter
    def posy2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'posy2' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'posy2' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._posy2 = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'width' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._width = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'height' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._height = value


class Metaclass_CamAndColor(type):
    """Metaclass of service 'CamAndColor'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('com_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'com_interfaces.srv.CamAndColor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__cam_and_color

            from com_interfaces.srv import _cam_and_color
            if _cam_and_color.Metaclass_CamAndColor_Request._TYPE_SUPPORT is None:
                _cam_and_color.Metaclass_CamAndColor_Request.__import_type_support__()
            if _cam_and_color.Metaclass_CamAndColor_Response._TYPE_SUPPORT is None:
                _cam_and_color.Metaclass_CamAndColor_Response.__import_type_support__()


class CamAndColor(metaclass=Metaclass_CamAndColor):
    from com_interfaces.srv._cam_and_color import CamAndColor_Request as Request
    from com_interfaces.srv._cam_and_color import CamAndColor_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
