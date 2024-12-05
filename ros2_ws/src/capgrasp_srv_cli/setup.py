from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'capgrasp_srv_cli'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # Include all files from gripper_models and gripper_control_points
        (os.path.join('share', package_name, 'utils','gripper_models'), glob('gripper_models/*')),
        (os.path.join('share', package_name, 'gripper_control_points'), glob('gripper_control_points/*')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='azzam',
    maintainer_email='azzam.shaikh8@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'grasp_service = capgrasp_srv_cli.grasp_service:main'
        ],
    },
)
