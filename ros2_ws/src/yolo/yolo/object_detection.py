import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from sensor_msgs.msg import Image

from cv_bridge import CvBridge
from ultralytics import YOLO
import ros2_numpy as rnp
import cv2 as cv

class RealSenseSubscriber(Node):

    def __init__(self):
        super().__init__('realsense_subscriber')

        self.detection_model = YOLO("yolov8x.pt")
        self.names = self.detection_model.names
        self.segmentation_model = YOLO("yolov8x-seg.pt")
        self.det_image_pub = self.create_publisher(Image,"/ultralytics/detection/image", 10)
        self.seg_image_pub = self.create_publisher(Image,"/ultralytics/segmentation/image", 10)
        self.image = None
        self.bridge = CvBridge()
        self.subscription = self.create_subscription(Image, '/realsense/image_raw',self.realsense_callback, 10)
        self.subscription  # prevent unused variable warning
        self.get_logger().info("YOLO node up and running!")
        self.key = None
        #self.timer = self.create_timer(0.01, self.run)

    def realsense_callback(self, msg):
        # array = rnp.numpify(msg)
        # det_result = self.detection_model(array)
        # det_annotated = det_result[0].plot(show=False)
        # self.det_image_pub.publish(rnp.msgify(Image,det_result,encoding="rgb8"))
        
        # seg_result = self.segmentation_model(array)
        # seg_annotated = seg_result[0].plot(show=False)
        # self.seg_image_pub.publish(rnp.msgify(Image, seg_annotated, encoding = "rgb8"))
        self.image = self.bridge.imgmsg_to_cv2(msg,'rgb8')
        self.key = cv.waitKey(1) & 0xFF
        frame = self.image.copy()

        results = self.detection_model(self.image, stream=True)

        frame = cv.cvtColor(frame,cv.COLOR_RGB2BGR)

        for r in results:
            boxes = r.boxes
            for box in boxes:
                x1, y1, x2, y2 = box.xyxy[0]
                x1, y1, x2, y2 = int(x1), int(y1), int(x2), int(y2)
                w, h =x2-x1, y2-y1

                cls = box.cls[0]
                name = self.names[int(cls)]
                frame = cv.rectangle(frame, (x1,y1), (x2,y2), (255,0,255), 2)
                frame = cv.putText(frame, name, (x1+10,y1+10), cv.FONT_HERSHEY_SIMPLEX, 1, (255,255,255), 2, cv.LINE_AA)
        
        cv.imshow("Detection",frame)
        cv.waitKey(1)
    

        
    # def run(self):
    #     if self.image is not None:
    #         self.key = cv.waitKey(1) & 0xFF
    #         frame = self.image.copy()

    #         results = self.detection_model(self.image, stream=True)

    #         for r in results:
    #             boxes = r.boxes
    #             for box in boxes:
    #                 x1, y1, x2, y2 = box.xyxy[0]
    #                 x1, y1, x2, y2 = int(x1), int(y1), int(x2), int(y2)
    #                 w, h =x2-x1, y2-y1

    #                 cls = box.cls[0]
    #                 name = self.names[int(cls)]
    #                 frame = cv.rectangle(frame, (x1,y1), (x2,y2), (255,0,255), 2)
    #                 frame = cv.putText(frame, name, (x1+10,y1+10), cv.FONT_HERSHEY_SIMPLEX, 1, (255,255,255), 2, cv.LINE_AA)
            
    #         cv.imshow("Detection",cv.cvtColor(frame,cv.COLOR_RGB2BGR))
    #         cv.waitKey(1)

    #         if self.key == ord('q'):
    #             rclpy.shutdown()

    


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