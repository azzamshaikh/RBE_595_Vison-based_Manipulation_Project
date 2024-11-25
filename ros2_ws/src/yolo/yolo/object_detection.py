import rclpy
from rclpy.node import Node

from std_msgs.msg import Int32
from sensor_msgs.msg import Image
from std_msgs.msg import Float64MultiArray, Int32MultiArray
from cv_bridge import CvBridge
from ultralytics import YOLO
import ros2_numpy as rnp
import cv2 as cv
import yaml
import os
from ament_index_python.packages import get_package_share_directory
import numpy as np

class RealSenseSubscriber(Node):

    def __init__(self):
        super().__init__('yolo')
        
        package_name = 'yolo'
        ros2_execution_package_share_path = get_package_share_directory(package_name)
        path = ros2_execution_package_share_path.split('/')
        index = path.index(package_name)
        path[index-1] = "src"
        yolo_package_path = '/'.join(path[:index+1])
        model_path = os.path.join(yolo_package_path, 'model','best_org.pt')
        
        self.detection_model = YOLO(model_path)
        folder_path = os.path.join(os.getcwd(),"src","yolo_finetune","ycb_foods")
        yaml_path = os.path.join(folder_path, "data.yaml")
        with open(yaml_path,'r') as file:
            self.yaml_data = yaml.safe_load(file)
        self.ycb_names = self.yaml_data['names']
        self.names = self.detection_model.names
        self.annotated_frame = None
        self.bboxes = None
        self.classification = None
        self.total_detections = None
        self.pred_img_pub = self.create_publisher(Image,"/yolo/prediction/image", 10)
        self.pred_bbox_pub = self.create_publisher(Int32MultiArray,"/yolo/prediction/bbox", 10)
        self.pred_cls_pub = self.create_publisher(Int32MultiArray,"/yolo/prediction/classifier", 10)
        self.pred_num_pub = self.create_publisher(Int32, "/yolo/prediction/number_of_predictions",10)
        self.image = None
        self.bridge = CvBridge()
        self.subscription = self.create_subscription(Image, '/realsense/image_raw',self.realsense_callback, 1)
        self.subscription  # prevent unused variable warning
        self.key = None
        self.timer = self.create_timer(0.01, self.run)
        self.get_logger().info("YOLO node up and running!")

    def realsense_callback(self, msg):

        self.image = self.bridge.imgmsg_to_cv2(msg,'bgr8')
        # cv.imshow('Raw', self.image)
        # results = self.detection_model(self.image)

        # if len(results[0].boxes) == 0:
        #     print("No detections made.")

        # annotated_frame = results[0].plot()

        # # for r in results:
        # #     boxes = r.boxes
        # #     for box in boxes:
        # #         x1, y1, x2, y2 = box.xyxy[0]
        # #         x1, y1, x2, y2 = int(x1), int(y1), int(x2), int(y2)
        # #         w, h =x2-x1, y2-y1

        # #         cls = box.cls[0]
        # #         name = self.ycb_names[int(cls)]
        # #         frame = cv.rectangle(frame, (x1,y1), (x2,y2), (255,0,255), 2)
        # #         frame = cv.putText(frame, name, (x1+10,y1+10), cv.FONT_HERSHEY_SIMPLEX, 1, (255,255,255), 2, cv.LINE_AA)
        
        # #cv.imshow("Detection",frame)
        # cv.imshow('YOLO Live Predictions', annotated_frame)
        # cv.waitKey(1)
    
    def publish_data(self,):
        bbox = Int32MultiArray()
        classification = Int32MultiArray()
        num_pred = Int32()
        if self.annotated_frame is not None:
            self.pred_img_pub.publish(self.bridge.cv2_to_imgmsg(self.annotated_frame,'bgr8'))
            
        if self.bboxes:
            bbox.data = np.array(self.bboxes).astype(int).tolist()

        
        if self.classification:
            classification.data = self.classification

        if self.total_detections:
            num_pred.data = self.total_detections
        
        self.pred_bbox_pub.publish(bbox)
        self.pred_cls_pub.publish(classification)
        self.pred_num_pub.publish(num_pred)

        
    def run(self):
        self.key = cv.waitKey(1) & 0xFF

        if self.image is not None:
            # image =self.image.copy() # USE FOR THE OPENCV BBOX AND LABELING
            results = self.detection_model(self.image,verbose=False)
            self.bboxes = []
            self.classification = []
            self.total_detections = 0
            for result in results:
                boxes = result.boxes
                self.total_detections += len(boxes)
                for box in boxes:
                    self.bboxes = self.bboxes + box.xyxy[0].tolist()
                    
                    ### OPENCV BBOX AND LABELING
                    # x1, y1, x2, y2 = box.xyxy[0]
                    # x1, y1, x2, y2 = int(x1), int(y1), int(x2), int(y2)
                    # w, h =x2-x1, y2-y1

                    # cls = box.cls[0]
                    # name = self.ycb_names[int(cls)]
                    # image = cv.rectangle(image, (x1,y1), (x2,y2), (255,0,255), 2)
                    # image = cv.putText(image, name, (x1+10,y1+10), cv.FONT_HERSHEY_SIMPLEX, 1, (255,255,255), 2, cv.LINE_AA)

                    cls = int(box.cls[0])  
                    self.classification.append(cls)
            annotated_frame = results[0].plot()
            
            self.annotated_frame = annotated_frame
            self.publish_data()
            cv.imshow('YOLO Live Predictions', annotated_frame)
            cv.waitKey(1)


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