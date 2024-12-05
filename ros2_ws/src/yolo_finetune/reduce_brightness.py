import os
from PIL import Image, ImageEnhance
from tqdm import tqdm

def adjust_brightness(image_path, output_path, brightness_factor=0.5):
    """
    Adjust the brightness of an image.

    :param image_path: Path to the input image.
    :param output_path: Path to save the modified image.
    :param brightness_factor: Factor to reduce brightness (e.g., 0.5 for 50% brightness).
    """
    with Image.open(image_path) as img:
        # Enhance brightness
        enhancer = ImageEnhance.Brightness(img)
        img_enhanced = enhancer.enhance(brightness_factor)
        # Save the image
        img_enhanced.save(output_path)

def process_dataset(dataset_dir, brightness_factor=0.5):
    """
    Process all images in a dataset to reduce brightness.

    :param dataset_dir: Root directory of the dataset.
    :param brightness_factor: Factor to reduce brightness.
    """
    for split in ['train', 'valid', 'test']:
        images_dir = os.path.join(dataset_dir, split, 'images')
        output_dir = os.path.join(dataset_dir, split, 'images_brightened')  # Save modified images in a new folder
        os.makedirs(output_dir, exist_ok=True)
        print(f"Updating {split}")
        for filename in tqdm(os.listdir(images_dir)):
            if filename.lower().endswith(('.png', '.jpg', '.jpeg')):
                input_path = os.path.join(images_dir, filename)
                output_path = os.path.join(output_dir, filename)
                adjust_brightness(input_path, output_path, brightness_factor)
                
                
        

# Set your dataset path and brightness factor

dataset_path = os.path.join(os.getcwd(),"src", "yolo_finetune","ycb_foods")
brightness_factor = 0.50  # Reduce brightness to 50%
process_dataset(dataset_path, brightness_factor)
