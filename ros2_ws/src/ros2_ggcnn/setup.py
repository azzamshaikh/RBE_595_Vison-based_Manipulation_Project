from setuptools import find_packages, setup
import os

package_name = 'ros2_ggcnn'

def package_files(directory):
    paths = []
    for (path, directories, filenames) in os.walk(directory):
        for filename in filenames:
            paths.append(os.path.join('..', path, filename))
    return paths

extra_files = package_files('ros2_ggcnn/models')

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/models', extra_files),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='redlightning',
    maintainer_email='inkredible2599@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'ggcnn_service_node = ros2_ggcnn.ggcnn_service_node:main',
            'ggcnn_client_node = ros2_ggcnn.ggcnn_client_node:main'
        ],
    },
)
