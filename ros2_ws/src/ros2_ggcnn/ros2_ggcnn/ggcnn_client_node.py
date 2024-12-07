from capgrasp_itf.srv import CAPGrasp
import rclpy
from rclpy.node import Node

class GGCNNGraspClient(Node):

    def __init__(self):
        super().__init__('ggcnn_grasp_client')
        self.cli = self.create_client(CAPGrasp, 'ggcnn_grasp')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available. waiting again...')
        self.req = CAPGrasp.Request()

    def send_request(self):
        self.req.start = True
        self.future = self.cli.call_async(self.req)

def main():
    rclpy.init()

    ggcnngrasp_client = GGCNNGraspClient()

    ggcnngrasp_client.send_request()

    while rclpy.ok():
        rclpy.spin_once(ggcnngrasp_client)
        ggcnngrasp_client.get_logger().info('Waiting for result...')
        if ggcnngrasp_client.future.done():
            response = ggcnngrasp_client.future.result()
            if response is not None:
                ggcnngrasp_client.get_logger().info(f"grasp pose is {response.xyz.tolist()}")
            else:
                ggcnngrasp_client.get_logger().error("Service call failed")
            break
    
    ggcnngrasp_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()