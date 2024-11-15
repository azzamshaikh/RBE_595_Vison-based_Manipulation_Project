import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from sensor_msgs.msg import Image

from cv_bridge import CvBridge


class RealSenseSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.image = None
        self.bridge = CvBridge()
        self.subscription = self.create_subscription(Image, '/realsense/color/image_raw',self.realsense_callback, 10)
        self.subscription  # prevent unused variable warning



    def realsense_callback(self, msg):
        self.image = self.bridge.imgmsg_to_cv2(msg,'rgb8')

    


def main(args=None):
    rclpy.init(args=args)

    realsense_sub = RealSenseSubscriber()

    rclpy.spin(realsense_sub)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    realsense_sub.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()