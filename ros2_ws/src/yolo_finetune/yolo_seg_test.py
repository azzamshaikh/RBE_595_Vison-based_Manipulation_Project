from ultralytics import YOLO
import os
import cv2 as cv
import yaml
import torch
import random
import numpy as np

# Load a model
bbox_model = YOLO("/home/azzam/RBE_595_Group_Project/ros2_ws/runs/detect/train/weights/best.pt")
seg_model = YOLO("yolo11n-seg")

folder_path = os.path.join(os.getcwd(),"src","yolo_finetune","ycb_foods")
yaml_path = os.path.join(folder_path, "data.yaml")

with open(yaml_path,'r') as file:
    yaml_data = yaml.safe_load(file)

classes_ids = yaml_data['names']

colors = [random.choices(range(256), k=3) for _ in classes_ids]

for i in range(2,9):
    img = cv.imread(f'test_image_{i}.png')
    


    
    bbox_results = bbox_model(f'test_image_{i}.png')
    bboxes = []
    classification = []
    total_detections = 0
    for result in bbox_results:
        boxes = result.boxes
        total_detections += len(boxes)
        for box in boxes:
            xyxy = box.xyxy[0].tolist()
            print(f'xyxy: {xyxy}')
            xywh = box.xywh[0].tolist()
            print(f'xywh: {xywh}')
            points = [xyxy[0], xyxy[1], xywh[2], xywh[3]]
            print(points)
            bboxes = bboxes + points
    bbox_results[0].show()
    bboxes = np.array(bboxes).reshape(total_detections,4).tolist()
    rois = []
    for bbox in bboxes:
        x,y,w,h = bbox
        x,y,w,h = int(x),int(y),int(w),int(h)
        print(f'ROI: {x}:{x+w}, {y}:{y+h}')
        roi = img[y:y+h, x:x+w ]
        rois.append(roi)
        cv.imshow('roi',roi)
        cv.waitKey(0)
    cv.destroyAllWindows()

    for roi in rois:
        #roi_mask = roi.copy()
        results = seg_model(roi)
        for result in results:
            if result.masks is not None:
                pixel_coord = result.masks.xy
            
                if pixel_coord is not None:
                    points = np.int32([pixel_coord])
                    # cv2.polylines(img, points, True, (255, 0, 0), 1)
                    # color_number = classes_ids.index(int(box.cls[0]))
                    cv.fillPoly(roi, points, (0, 255,0))
        
        cv.imshow('masks',img)
    cv.waitKey(0)



    break



        # for mask, box in zip(result.masks.xy, result.boxes):
        #     points = np.int32([mask])
        #     # cv2.polylines(img, points, True, (255, 0, 0), 1)
        #     # color_number = classes_ids.index(int(box.cls[0]))
        #     cv.fillPoly(img, points, (0, 255,0))

    # # Display the frame
    # cv.imshow('YOLO Live Predictions', img)

    # cv.waitKey(0)

    # #cv.imwrite(f'test_image_{i}_prediction.png', annotated_frame)
    # # Break the loop when 'q' is pressed
    
    # results[0].show()