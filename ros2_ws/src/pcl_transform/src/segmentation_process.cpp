#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#include <pcl/filters/passthrough.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/common/transforms.h>
#include <pcl/filters/statistical_outlier_removal.h>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <pcl_conversions/pcl_conversions.h>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2_eigen/tf2_eigen.hpp>
#include <Eigen/Geometry>
#include <pcl/filters/voxel_grid.h>
#include <pcl/io/pcd_io.h>

class TransformPointCloudNode : public rclcpp::Node
{
public:
    TransformPointCloudNode() : Node("downsample")
    {
        pointcloud_subscription_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(
            "/extracted_pointcloud", 10,
            std::bind(&TransformPointCloudNode::pointCloudCallback, this, std::placeholders::_1));

        // Transformed point cloud publisher
        transformed_pointcloud_publisher_ = this->create_publisher<sensor_msgs::msg::PointCloud2>("/processed_object", 10);

        tf_buffer_ = std::make_shared<tf2_ros::Buffer>(this->get_clock());
        tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
        
    }

    bool get_break(){
        return this->break_flag;
    }

private:
    void pointCloudCallback(const sensor_msgs::msg::PointCloud2::SharedPtr cloud_msg)
    {
        pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZRGB>());
        pcl::fromROSMsg(*cloud_msg, *cloud);

        // // Lookup transformation from "camera_link_optical" to "world"
        // geometry_msgs::msg::TransformStamped transform_stamped;
        // try
        // {
        //     transform_stamped = tf_buffer_->lookupTransform("world", "camera_link_optical", tf2::TimePointZero);
        // }
        // catch (tf2::TransformException &ex)
        // {
        //     RCLCPP_ERROR(this->get_logger(), "Could not transform: %s", ex.what());
        //     return;
        // }

        // Eigen::Affine3d transform = tf2::transformToEigen(transform_stamped.transform);

        // // Apply transformation to the point cloud
        // pcl::PointCloud<pcl::PointXYZRGB>::Ptr transformed_cloud(new pcl::PointCloud<pcl::PointXYZRGB>());
        pcl::PointCloud<pcl::PointXYZRGB>::Ptr filtered_cloud(new pcl::PointCloud<pcl::PointXYZRGB>());
        // pcl::transformPointCloud(*cloud, *transformed_cloud, transform);


        // Create the filtering object
        pcl::StatisticalOutlierRemoval<pcl::PointXYZRGB> sor;
        sor.setInputCloud (cloud);
        sor.setMeanK (200);
        sor.setStddevMulThresh (0.5);
        sor.filter (*filtered_cloud);

        // pcl::io::savePCDFileASCII("test_pcd.pcd", *filtered_cloud);
        // this->break_flag = true;

        // Convert transformed PCL point cloud back to sensor_msgs::PointCloud2
        sensor_msgs::msg::PointCloud2 transformed_cloud_msg;
        pcl::toROSMsg(*filtered_cloud, transformed_cloud_msg);
        transformed_cloud_msg.header.frame_id = "world";
        transformed_cloud_msg.header.stamp = this->get_clock()->now();



        transformed_pointcloud_publisher_->publish(transformed_cloud_msg);
    }

    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr pointcloud_subscription_;
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr transformed_pointcloud_publisher_;
    std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
    std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
    bool break_flag = false;


    
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TransformPointCloudNode>();
    rclcpp::Rate rate(10);
    while(rclcpp::ok() && node->get_break() == false){
        rclcpp::spin_some(node);
        rate.sleep();
    }
    
    rclcpp::shutdown();
    return 0;
}