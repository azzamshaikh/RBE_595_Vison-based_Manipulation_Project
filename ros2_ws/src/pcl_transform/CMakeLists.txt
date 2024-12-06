cmake_minimum_required(VERSION 3.8)
project(pcl_transform)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(PCL REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(pcl_conversions REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(tf2_py REQUIRED)
find_package(tf2_eigen REQUIRED)  
find_package(OpenCV REQUIRED)
find_package(cv_bridge REQUIRED)

include_directories(
  ${PCL_INCLUDE_DIRS}
  ${tf2_ros_INCLUDE_DIRS}
  ${tf2_eigen_INCLUDE_DIRS}
  ${OpenCV_INCLUDE_DIRS}
  include
)

link_directories(${PCL_LIBRARY_DIRS})

add_definitions(${PCL_DEFINITIONS})

add_executable(camera_to_world src/camera_to_world.cpp)
target_link_libraries(camera_to_world ${PCL_LIBRARIES} ${tf2_ros_LIBRARIES} ${tf2_eigen_LIBRARIES})

add_executable(downsample src/downsample.cpp)
target_link_libraries(downsample ${PCL_LIBRARIES} ${tf2_ros_LIBRARIES} ${tf2_eigen_LIBRARIES})

add_executable(object_segmentation src/object_segmentation.cpp)
target_link_libraries(downsample ${PCL_LIBRARIES} ${tf2_ros_LIBRARIES} ${tf2_eigen_LIBRARIES} ${OpenCV_LIBS})

add_executable(segmentation_process src/segmentation_process.cpp)
target_link_libraries(segmentation_process ${PCL_LIBRARIES} ${tf2_ros_LIBRARIES} ${tf2_eigen_LIBRARIES})

ament_target_dependencies(
  camera_to_world
  rclcpp
  std_msgs
  sensor_msgs
  pcl_conversions
  tf2_ros
  tf2_eigen  
)

ament_target_dependencies(
  downsample
  rclcpp
  std_msgs
  sensor_msgs
  pcl_conversions
  tf2_ros
  tf2_eigen  
)

ament_target_dependencies(
  object_segmentation
  rclcpp
  std_msgs
  sensor_msgs
  pcl_conversions
  tf2_ros
  tf2_eigen  
  tf2_geometry_msgs
  OpenCV
  cv_bridge
)


ament_target_dependencies(
  segmentation_process
  rclcpp
  std_msgs
  sensor_msgs
  pcl_conversions
  tf2_ros
  tf2_eigen  
)

# Install the executables
install(TARGETS
  camera_to_world
  downsample
  object_segmentation
  segmentation_process
  DESTINATION lib/${PROJECT_NAME}
)

# Install the launch directory
install(
  DIRECTORY 
    launch
  DESTINATION 
    share/${PROJECT_NAME}
)

ament_python_install_package(${PROJECT_NAME})

# Testing 
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()