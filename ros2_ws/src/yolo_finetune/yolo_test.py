from ultralytics import YOLO
import os
import cv2 as cv
import yaml
import torch

# Load a model
model = YOLO("/home/azzam/RBE_595_Group_Project/ros2_ws/runs/detect/train/weights/best.pt")
# model = YOLO("/home/workspace/vbrm/RBE_595_Group_Project/ros2_ws/src/yolo/model/best.pt")

folder_path = os.path.join(os.getcwd(),"src","yolo_finetune","ycb_foods")
yaml_path = os.path.join(folder_path, "data.yaml")

with open(yaml_path,'r') as file:
    yaml_data = yaml.safe_load(file)

for i in range(2,9):
    results = model(f'test_image_{i}.png')
    bboxes = []
    classification = []
    total_detections = 0
    for result in results:
        boxes = result.boxes
        total_detections += len(boxes)
        for box in boxes:
            bboxes = bboxes + box.xyxy[0].tolist()
            

            # Extract classification (class index)
            cls = int(box.cls[0])  # Ensure it's an integer
            classification.append(yaml_data['names'][cls])
        print(bboxes)
        print(classification)
        print(total_detections)

    # Retrieve annotated frame from YOLO results
    annotated_frame = results[0].plot()  # Generates a frame with predictions drawn

    # Display the frame
    cv.imshow('YOLO Live Predictions', annotated_frame)

    cv.waitKey(0)

    #cv.imwrite(f'test_image_{i}_prediction.png', annotated_frame)
    # Break the loop when 'q' is pressed
    
    #results[0].show()