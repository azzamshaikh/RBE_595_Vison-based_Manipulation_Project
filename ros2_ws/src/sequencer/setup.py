from setuptools import find_packages, setup

package_name = 'sequencer'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
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
            'controller = sequencer.controller_service:main',
            'sequencer = sequencer.sequencer_client:main'
            
        ],
    },
)
