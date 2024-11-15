from setuptools import setup

package_name = 'ggcnn_ros2'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    package_dir={'': 'src'},
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/ggcnn_grasp.launch.py']),
        ('share/' + package_name + '/models', ['models/ggcnn_epoch_23_cornell_statedict.pt']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='your_name',
    maintainer_email='your_email@example.com',
    description='Description of your package',
    license='License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'ggcnn_grasp_node = ggcnn_ros2.ggcnn_grasp_node:main',
        ],
    },
)
