#! /usr/bin/env python3

from com_interfaces.srv import Capture2model
import time
import rclpy
from rclpy.node import Node
import os
import cv2


class minimal(Node):

    def __init__(self):
        
        super().__init__('coral_service')
        self.value = int(input('Number of photos: '))
        self.srv = self.create_service(Capture2model, 'Capture2model', self.coral2model)
        self.num = 1 # cambiar dependiendo de camara sudo v4l2-ctl --list-devices
        self.path = '/home/krita/Documents/GitHub/Sub_codes_2023/sub_ws/src/mov_woc/mov_woc/images_coral'
        self.cap = cv2.VideoCapture(self.num, cv2.CAP_V4L)
        self.basename = "coral"
        self.width = 2560
        self.height = 1440
        self.flag = True
        self.cap.set(cv2.CAP_PROP_FRAME_HEIGHT, self.height)
        self.cap.set(cv2.CAP_PROP_FRAME_WIDTH, self.width)
        self.cnt = 0

    def coral2model(self, request, response):
        
        if request.input == True:

            while self.flag:

                self.capture_im(self.cnt)

                self.cnt += 1
                time.sleep(0.6)
                # print(self.cnt)
                if self.cnt > self.value - 1:

                    self.flag = False

            response.quantity = self.cnt
            self.cap.release()
        else:
            response.quantity = 0
        
        return response
    
    def capture_im(self, number):

        self.lecture, self.frame = self.cap.read()

        outfile = '%s_%s.png' % (number, self.basename)
        print(outfile)
        if self.lecture == True:
            # print(number)
            try:
                cv2.imwrite(os.path.join(self.path, outfile), self.frame)
            except:
                print('failed image...')
        
        # self.cap.release()

def main(args=None):

    rclpy.init(args=args)
    min_service = minimal()
    
    rclpy.spin(min_service)
    rclpy.shutdown()

if __name__ == '__main__':
    main()