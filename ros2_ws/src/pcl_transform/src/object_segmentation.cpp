#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#include <pcl/filters/passthrough.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/common/transforms.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/search/kdtree.h>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/kdtree/kdtree_flann.h>

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <geometry_msgs/msg/point_stamped.hpp>
#include <std_msgs/msg/int32_multi_array.hpp>
#include <std_msgs/msg/int32.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <sensor_msgs/msg/camera_info.hpp>

#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>

#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <tf2_eigen/tf2_eigen.hpp>

#include <Eigen/Geometry>


class PointCloudExtractor : public rclcpp::Node
{
public:
    PointCloudExtractor() : Node("extractor")
    {
        // Initialize subscription flags
        bounding_box_received_ = false;
        num_predictions_received_ = false;
        depth_image_received_ = false;
        camera_info_received_ = false;
        pointcloud_received_ = false;

        pointcloud_subscription_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(
            "/downsampled_pointcloud_data", 10,
            std::bind(&PointCloudExtractor::pointCloudCallback, this, std::placeholders::_1));

        // Initialize subscribers
        bounding_box_sub_ = this->create_subscription<std_msgs::msg::Int32MultiArray>(
            "/yolo/prediction/bbox", 10, 
            std::bind(&PointCloudExtractor::boundingBoxCallback, this, std::placeholders::_1));

        num_predictions_sub_ = this->create_subscription<std_msgs::msg::Int32>(
            "/yolo/prediction/number_of_predictions", 10, 
            std::bind(&PointCloudExtractor::numPredictionsCallback, this, std::placeholders::_1));

        depth_image_sub_ = this->create_subscription<sensor_msgs::msg::Image>(
            "/realsense/depth/image_raw", 10, 
            std::bind(&PointCloudExtractor::depthCallback, this, std::placeholders::_1));

        camera_info_sub_ = this->create_subscription<sensor_msgs::msg::CameraInfo>(
            "/realsense/depth/camera_info", 10, 
            std::bind(&PointCloudExtractor::cameraInfoCallback, this, std::placeholders::_1));

        // Transformed point cloud publisher
        transformed_pointcloud_publisher_ = this->create_publisher<sensor_msgs::msg::PointCloud2>("/extracted_pointcloud", 10);

        tf_buffer_ = std::make_shared<tf2_ros::Buffer>(this->get_clock());
        tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);

        RCLCPP_INFO(this->get_logger(), "Object segmentation is up and running!");
    }

    void process(){
        if(!all_subscriptions_ready()){
            RCLCPP_WARN(this->get_logger(), "Waiting for all subscriptions to receive data...");
            return;
        }
        
        std::vector<int> bbox = this->get_bounding_box();
        if(bbox.empty()){
            RCLCPP_WARN(this->get_logger(), "YOLO not detecting any objects...");
            return;
        }
        int x_min = bbox[0];
        int y_min = bbox[1];
        int x_max = bbox[2];
        int y_max = bbox[3];

        int v_step = int((y_max - y_min) / 20);
        int u_step = int((x_max - x_min) / 20);

        int y_center = int((y_max - y_min) / 2);
        int x_center = int((x_max - x_min) / 2);

        std::vector<float> centroid = this->image_to_coord(y_center, x_center); //        v is y, u is x
        //std::cout << "Centroid: " << centroid[0] << " " << centroid[1] << " " << centroid[2] << std::endl;

        pcl::PointCloud<pcl::PointXYZRGB>::Ptr extracted_cloud(new pcl::PointCloud<pcl::PointXYZRGB>);

        int K = 1;

        std::vector<int> pointIdxKnnSearch(K);
        std::vector<float> pointKNNSquaredDistance(K);

        for (int v = y_min; v < y_max; v += v_step){
            for (int u = x_min; u < x_max; u += u_step){
                std::vector<float> pixel_coord = this->image_to_coord(v, u); //        v is y, u is x
                // std::cout << "Pixel: " << pixel_coord[0] << " " << pixel_coord[1] << " " << pixel_coord[2] << std::endl;
                if(this->euclidean_distance(centroid, pixel_coord) > 2.5){
                    continue;
                }

                pcl::PointXYZRGB queryPoint;
                queryPoint.x = pixel_coord[0];
                queryPoint.y = pixel_coord[1];
                queryPoint.z = pixel_coord[2];
                        // Set RGB values for the query point if necessary
                queryPoint.r = 0; // Example RGB values
                queryPoint.g = 0;
                queryPoint.b = 0;
                
                if(kd_tree_->nearestKSearch(queryPoint, K, pointIdxKnnSearch, pointKNNSquaredDistance) > 0){
                    for(std::size_t i = 0; i < pointIdxKnnSearch.size(); ++i){
                        // add query point to the cloud
                        pcl::PointXYZRGB nearestPoint = pointcloud_->points[pointIdxKnnSearch[i]];

                        extracted_cloud->points.push_back(nearestPoint);
                    }
                }

            }
        }
        // Update the extracted cloud properties
        extracted_cloud->width = extracted_cloud->points.size();
        extracted_cloud->height = 1;  // Unorganized point cloud
        extracted_cloud->is_dense = true;

        // std::vector<float> top_left = this->image_to_coord(bbox[1], bbox[0]); //        v is y, u is x
        // RCLCPP_INFO(this->get_logger(), "Top left is - x: %.2f, y: %.2f, z: %.2f", top_left[0], top_left[1], top_left[2]);
        

        // pcl::PointCloud<pcl::PointXYZRGB>::Ptr extracted_cloud(new pcl::PointCloud<pcl::PointXYZRGB>);

        // pcl::PointXYZRGB queryPoint;

        // queryPoint.x = top_left[0];
        // queryPoint.y = top_left[1];
        // queryPoint.z = top_left[2];
        //         // Set RGB values for the query point if necessary
        // queryPoint.r = 0; // Example RGB values
        // queryPoint.g = 0;
        // queryPoint.b = 0;

        // int K = 1;

        // std::vector<int> pointIdxKnnSearch(K);
        // std::vector<float> pointKNNSquaredDistance(K);

        // if(kd_tree_->nearestKSearch(queryPoint, K, pointIdxKnnSearch, pointKNNSquaredDistance) > 0){
        //     for(std::size_t i = 0; i < pointIdxKnnSearch.size(); ++i){
        //         // add query point to the cloud
        //         pcl::PointXYZRGB nearestPoint = pointcloud_->points[pointIdxKnnSearch[i]];

        //         extracted_cloud->points.push_back(nearestPoint);
        //     }
        // }

        // // Update the extracted cloud properties
        // extracted_cloud->width = extracted_cloud->points.size();
        // extracted_cloud->height = 1;  // Unorganized point cloud
        // extracted_cloud->is_dense = true;


        // int x_min = bounding_box_[0];
        // int y_min = bounding_box_[1];
        // int x_max = bounding_box_[2];
        // int y_max = bounding_box_[3];

        // Lookup transformation from "camera_link_optical" to "world"
        geometry_msgs::msg::TransformStamped transform_stamped;
        try
        {
            transform_stamped = tf_buffer_->lookupTransform("world", "camera_link_optical", tf2::TimePointZero);
        }
        catch (tf2::TransformException &ex)
        {
            RCLCPP_ERROR(this->get_logger(), "Could not transform: %s", ex.what());
            return;
        }
        Eigen::Affine3d transform = tf2::transformToEigen(transform_stamped.transform);

        pcl::PointCloud<pcl::PointXYZRGB>::Ptr transformed_cloud(new pcl::PointCloud<pcl::PointXYZRGB>());
        pcl::transformPointCloud(*extracted_cloud, *transformed_cloud, transform);

        // Convert transformed PCL point cloud back to sensor_msgs::PointCloud2
        sensor_msgs::msg::PointCloud2 transformed_cloud_msg;
        pcl::toROSMsg(*transformed_cloud, transformed_cloud_msg);
        transformed_cloud_msg.header.frame_id = "world";
        transformed_cloud_msg.header.stamp = this->get_clock()->now();

        transformed_pointcloud_publisher_->publish(transformed_cloud_msg);

    }

private:
    // Subscription flags
    bool bounding_box_received_;
    bool num_predictions_received_;
    bool depth_image_received_;
    bool camera_info_received_;
    bool pointcloud_received_;

    rclcpp::Subscription<std_msgs::msg::Int32MultiArray>::SharedPtr bounding_box_sub_;
    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr num_predictions_sub_;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr depth_image_sub_;
    rclcpp::Subscription<sensor_msgs::msg::CameraInfo>::SharedPtr camera_info_sub_;

    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr pointcloud_subscription_;
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr transformed_pointcloud_publisher_;

    std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
    std::shared_ptr<tf2_ros::TransformListener> tf_listener_;

    cv::Mat depth_image_;
    Eigen::Matrix3f camera_intrinsics_;
    pcl::PointCloud<pcl::PointXYZRGB>::Ptr pointcloud_ = std::make_shared<pcl::PointCloud<pcl::PointXYZRGB>>();
    pcl::KdTreeFLANN<pcl::PointXYZRGB>::Ptr kd_tree_ = std::make_shared<pcl::KdTreeFLANN<pcl::PointXYZRGB>>();

    std::vector<int> bounding_box_;
    int num_predictions_ = 0;

    float euclidean_distance(std::vector<float> point1, std::vector<float> point2){
        //float distance = std::hypot(point1[0]-point2[0], point1[1]-point2[1]);

        float distance = std::sqrt(std::pow((point2[0] - point1[0]), 2) + std::pow((point2[1] - point1[0]), 2));
        //std::cout << "Distance " << distance << std::endl;
        return distance;
    }


    void boundingBoxCallback(const std_msgs::msg::Int32MultiArray::SharedPtr msg) {
        bounding_box_ = msg->data;
        bounding_box_received_ = true;
    }

    std::vector<int> get_bounding_box(){
        return bounding_box_;
    }

    void numPredictionsCallback(const std_msgs::msg::Int32::SharedPtr msg) {
        num_predictions_ = msg->data;
        num_predictions_received_ = true;
    }

    void depthCallback(const sensor_msgs::msg::Image::SharedPtr msg) {
        try {
            depth_image_ = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::TYPE_32FC1)->image;
            depth_image_received_ = true;
        } catch (cv_bridge::Exception &e) {
            RCLCPP_ERROR(this->get_logger(), "CV Bridge error: %s", e.what());
        }
    }

    void cameraInfoCallback(const sensor_msgs::msg::CameraInfo::SharedPtr msg) {
        camera_intrinsics_ << msg->k[0], 0, msg->k[2],
                              0, msg->k[4], msg->k[5],
                              0, 0, 1;
        camera_info_received_ = true;
    }

    void pointCloudCallback(const sensor_msgs::msg::PointCloud2::SharedPtr msg)
    {
        pcl::fromROSMsg(*msg, *pointcloud_);
        kd_tree_->setInputCloud(pointcloud_);
        pointcloud_received_ = true;
    }

    std::vector<float> image_to_coord(int &v, int &u){
        // v is y, u is x
        float fx = camera_intrinsics_(0, 0);
        float fy = camera_intrinsics_(1, 1);
        float cx = camera_intrinsics_(0, 2);
        float cy = camera_intrinsics_(1, 2);

        float depth = depth_image_.at<float>(v,u);

        float x = -100.0;
        float y = -100.0;
        float z = -100.0;

        if (depth > 0){
            x = (u - cx) * depth / fx;
            y = (v - cy) * depth / fy;
            z = depth;
        }

        std::vector<float> coord = {x,y,z};

        return coord;
    }

    // Utility function to check if all subscriptions are ready
    bool all_subscriptions_ready() const {
        return bounding_box_received_ && num_predictions_received_ &&
               depth_image_received_ && camera_info_received_ && pointcloud_received_;
    }

};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PointCloudExtractor>();
    rclcpp::Rate rate(10);

    while(rclcpp::ok()){
        rclcpp::spin_some(node);
        node->process();
        rate.sleep();
    }
    
    rclcpp::shutdown();
    return 0;
}