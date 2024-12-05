from capgrasp_itf.srv import CAPGrasp
import rclpy
from rclpy.node import Node

class GraspClient(Node):

    def __init__(self):
        super().__init__('capgrasp_client')
        self.cli = self.create_client(CAPGrasp, 'capgrasp_srv_cli')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available. waiting again...')
        self.req = CAPGrasp.Request()

    def send_request(self):
        self.req.start = True
        self.future = self.cli.call_async(self.req)



def main():
    rclpy.init()

    grasp_client = GraspClient()

    grasp_client.send_request()

    while rclpy.ok():
        rclpy.spin_once(grasp_client)
        grasp_client.get_logger().info('Waiting for result...')
        if grasp_client.future.done():
            response = grasp_client.future.result()
            grasp_client.get_logger().info(f"grasp pose is {response.xyz.tolist()}")
            break
    
    grasp_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()