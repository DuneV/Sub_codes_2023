#! /usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from geometry_msgs.msg import Twist
from geometry_msgs.msg import Pose

'''
Definition
'''

MAX_BUFF_LEN  = 255
ZERO = 1500.0
VELRIGHT = 1300.0
VELLEFT = 1700.0

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

        self.publisher_ = self.create_publisher(Pose, '/cmd_vel', 10)

        self.motor1 = ZERO
        self.motor2 = ZERO
        self.motor3 = ZERO
        self.motor4 = ZERO
        self.motor5 = ZERO
        self.motor6 = ZERO

        self.submarine = [self.motor1, self.motor2, self.motor3, self.motor4, self.motor5, self.motor6]

    def listener_callback(self, msg):

        poseMessage = Pose()
        self.buttons = msg.buttons
        self.axes = msg.axes

        if self.buttons[11] > 0:

            self.submarine[0] = VELRIGHT # evalua
            self.submarine[1] = VELRIGHT
            self.submarine[2] = VELRIGHT
            self.submarine[3] = VELRIGHT

        elif self.buttons[12] > 0:

            self.submarine[4] = VELLEFT # evalua
            self.submarine[5] = VELLEFT

        elif self.buttons[14] > 0:

            self.submarine[0] = VELRIGHT # evalua
            self.submarine[1] = VELRIGHT
            self.submarine[2] = VELRIGHT
            self.submarine[3] = VELRIGHT

        elif self.buttons[13] > 0:

            self.submarine[4] = VELLEFT # evalua
            self.submarine[5] = VELLEFT

        elif self.buttons[10] > 0:

            self.submarine[3] = VELRIGHT #eva

        elif self.buttons[9] > 0:

            self.submarine[4] = VELRIGHT #eva

        else:

            self.submarine[0] = ZERO
            self.submarine[1] = ZERO
            self.submarine[2] = ZERO
            self.submarine[3] = ZERO
            self.submarine[4] = ZERO
            self.submarine[5] = ZERO
        
        poseMessage.position.x = self.submarine[0]
        poseMessage.position.y = self.submarine[1]
        poseMessage.position.z = self.submarine[2]
        poseMessage.orientation.x = self.submarine[3]

        self.publisher_.publish(poseMessage)


def main(args = None):
    rclpy.init(args = args)

    node = Ds4Control()
    # rate = node.create_rate(2)
    rclpy.spin(node)
    rclpy.shutdown()

    
if __name__ == '__main__':

    main()
    
