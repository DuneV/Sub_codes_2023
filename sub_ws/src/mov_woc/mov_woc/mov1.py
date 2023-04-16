#! /usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from std_msgs.msg import Float64
from geometry_msgs.msg import Twist

MAX_BUFF_LEN  = 255


class Ds4Control(Node):

    buttons = []
    axes = []

    def __init__(self):

        super().__init__("conversor")

        self.subscription = self.create_subscription(
            Joy,
            '/joy',
            self.listener_callback,
            10
        )
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)

    def listener_callback(self, msg):

        twistMessage = Twist()
        self.buttons = msg.buttons
        self.axes = msg.axes

        if self.buttons[11] > 0:

            twistMessage.linear.y = 1.0 # evalua

        elif self.buttons[12] > 0:

            twistMessage.linear.y = -1.0 # evalua

        elif self.buttons[14] > 0:

            twistMessage.linear.x = 1.0 #evalua

        elif self.buttons[13] > 0:

            twistMessage.linear.x = -1.0

        elif self.buttons[10]>0:

            twistMessage.linear.z = -1.0 #eva

        elif self.buttons[9]>0:

            twistMessage.linear.z = 1.0 #eva

        else:

            twistMessage.linear.x = 0.0
            twistMessage.linear.y = 0.0
            twistMessage.linear.z = 0.0

        self.publisher_.publish(twistMessage)


def main(args = None):
    rclpy.init(args = args)

    node = Ds4Control()

    rclpy.spin(node)
    rclpy.shutdown()

    
if __name__ == '__main__':

    main()
    