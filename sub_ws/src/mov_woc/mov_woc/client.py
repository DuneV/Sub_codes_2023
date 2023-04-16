from com_interfaces.srv import Capture2model

import rclpy
from rclpy.node import Node

class client_pro(Node):
    
    def __init__(self):
        super().__init__('client')
        self.cli = self.create_client(Capture2model, 'Capture2model')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting')
        self.req = Capture2model.Request()

    def send_request(self):
        self.req.input = True
        self.future = self.cli.call_async(self.req)

def main(args=None):
    rclpy.init(args=args)

    min_cli = client_pro()
    min_cli.send_request()

    while rclpy.ok():
        rclpy.spin_once(min_cli)
        if min_cli.future.done():
            try:
                response = min_cli.future.result()
            except Exception as e:
                pass
            else:
                min_cli.get_logger().info(
                    'Result of add_two_ints: for %d = %d' %
                    (min_cli.req.input, response.quantity))
            break

if __name__ == '__main__':
    main()