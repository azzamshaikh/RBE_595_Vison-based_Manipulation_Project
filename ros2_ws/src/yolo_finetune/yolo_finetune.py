from ultralytics import YOLO
import os
import cv2 as cv
import yaml
import torch

# Load a model
model = YOLO("yolo11n.pt")

folder_path = os.path.join(os.getcwd(),"src","yolo_finetune","ycb_foods")
yaml_path = os.path.join(folder_path, "data.yaml")

with open(yaml_path,'r') as file:
    yaml_data = yaml.safe_load(file)

# Train the model
train_results = model.train(
    data=yaml_path,  # path to dataset YAML
    epochs=100,  # number of training epochs
    imgsz=640,  # training image size
    device="0",  # device to run on, i.e. device=0 or device=0,1,2,3 or device=cpu,
    patience= 5
)

# Evaluate model performance on the validation set
metrics = model.val()

# Perform object detection on an image
test_image_folder_path = os.path.join(folder_path, "test","images")
test_bbox_folder_path = os.path.join(folder_path, "test","labels")

# Loop through files in the folder
for idx ,(image_filename, label_filename) in enumerate(zip(os.listdir(test_image_folder_path), os.listdir(test_bbox_folder_path))):

    if idx > 10:
        break

    image_filepath = os.path.join(test_image_folder_path, image_filename)
    label_filepath = os.path.join(test_bbox_folder_path, label_filename)

    
    # Check if it's a file (not a directory)
    if os.path.isfile(image_filepath) and os.path.isfile(label_filepath):
        image = cv.imread(image_filepath)
        ground_truth = []
        with open(label_filepath, "r") as f:
            labels = f.readlines()
            for label in labels:
                cleaned_label = [float(x) for x in label.strip().split()]
                
                ground_truth.append(cleaned_label)
                
            print(ground_truth)

        for data in ground_truth:
            cls = int(data[0])
            x_center = data[1]
            y_center = data[2]
            width = data[3]
            height = data[4]
            # Denormalize
            x_center_pixels = x_center * 640
            y_center_pixels = y_center * 640
            box_width_pixels = width * 640
            box_height_pixels = height * 640

            # Convert to top-left and bottom-right corners
            x1 = int(x_center_pixels - box_width_pixels / 2)
            y1 = int(y_center_pixels - box_height_pixels / 2)
            x2 = int(x_center_pixels + box_width_pixels / 2)
            y2 = int(y_center_pixels + box_height_pixels / 2)
            rectangle = (x1, y1, x2, y2)
            cv.rectangle(image, rectangle[:2], rectangle[2:], (0, 255, 0), 2)  # Draw the rectangle
            
            data_label = yaml_data['names'][cls]
            cv.putText(image,data_label,(x1, y1 - 10),cv.FONT_HERSHEY_SIMPLEX, 0.5,(0,255,0),1,cv.LINE_AA)
        
        cv.imshow('Image', image)
        cv.waitKey(0)

        results = model(image_filepath)
        results[0].show()

torch.save(model,'ycb_food.pt')