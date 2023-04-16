#! /usr/bin/env python3

from common_interfaces.srv import Capture2model

import rclpy
from rclpy.node import Node

class minimal(Node):

    def __init__(self):
        super().__init__('coral_service')
        self.srv = self.create_service(Capture2model, 'Capture2model', self.coral2model)

    def coral2model(self, request, response):
        if request.input == True:
            response.quantity = 100
        else:
            response.quantity = 50
        
        return response
    
def main(args=None):
    rclpy.init(args=args)
    min_service = minimal()
    
    rclpy.spin(min_service)
    rclpy.shutdown()

if __name__ == '__main__':
    main()