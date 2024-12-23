'''

python3 run_real_test.py \
    -cfs checkpoints_2d/vae_lr_0002_bs_300_scale_1_npoints_128_radius_02_latent_size_4_position_constrained_orientation_constrained_continuous_equivariant_clusters_prerendered_continuous_equi_regloss/ \
    -cfe checkpoints_2d/evaluator_lr_0002_bs_200_scale_1_npoints_128_radius_02pointnet++_clusters_prerendered_0401 \
    --gpu_ids 0

'''

from .models import create_model

import argparse
import numpy as np
import open3d as o3d
from .utils import utils

import torch
from tqdm import tqdm
from .utils.refine import RefineNN

import rclpy
from rclpy.node import Node
from capgrasp_itf.srv import CAPGrasp

from sensor_msgs.msg import PointCloud2
from rclpy.executors import MultiThreadedExecutor
import ros2_numpy
from scipy.spatial.transform import Rotation as R

def setup_args():
    parser = argparse.ArgumentParser(
        formatter_class=argparse.ArgumentDefaultsHelpFormatter)

    # data params
    parser.add_argument('--checkpoint_folder_grasp_sampler', '-cfs',
                        type=str,
                        required=True,
                        help='Path to folder where the network checkpoint is stored.')
    parser.add_argument('--checkpoint_folder_grasp_evaluator', '-cfe',
                        type=str,
                        required=True,
                        help='Path to folder where the network checkpoint is stored.')
    parser.add_argument('--gpu_ids',
                        type=int,
                        default=0,
                        help='ID of the gpu we are running the code on.')
    args, _ = parser.parse_known_args()
    return args

def load_network_from_file(checkpoint_folder, gpu_ids, checkpoints_dir=None, evaluate=False, num_object_per_batch=1,
                           num_grasps_per_object=10):
    network_arguments = utils.read_checkpoint_args(checkpoint_folder)
    network_arguments.is_train = False
    network_arguments.num_object_per_batch = num_object_per_batch
    network_arguments.num_grasps_per_object = num_grasps_per_object
    network_arguments.num_threads = 1

    if checkpoints_dir != None:
        network_arguments.checkpoints_dir = checkpoints_dir

    if evaluate is True:
        network_arguments.gpu_ids = [gpu_ids]
    else:
        network_arguments.gpu_ids[0] = gpu_ids
    model = create_model(network_arguments)
    return model

class Validator:
    def __init__(self, grasp_sampling_network, grasp_scoring_network, batch_max_size):

        self.grasp_sampling_network = grasp_sampling_network
        self.grasp_scoring_network = grasp_scoring_network
        self.batch_max_size = batch_max_size
        # self.pc = None
        # self.pcd_downsample = None
        # self.pc_mean = None
        self.regularized_pcd_downsample = None
        # self.matrix_world2cam = np.eye(4)
        # # matrix_world2cam[3, :3] -= pc_of_object.mean(axis=0)

    def prepare_input_data_to_grasp_scoring_network(self, object_pc, grasp_poses):
        num_grasps = grasp_poses.shape[0]
        object_pc = np.tile(object_pc, (num_grasps, 1, 1))
        grasp_pc = utils.transform_control_points_numpy(grasp_poses, num_grasps)
        batched_data_to_network = []
        data_to_network = {}
        data_to_network["pc"] = object_pc
        data_to_network["grasp_rt"] = grasp_pc
        data_to_network["grasp_qt"] = grasp_pc
        batched_data_to_network.append(data_to_network)

        return batched_data_to_network

    def score_grasps_on_object(self, regularized_point_cloud, grasps):
        self.input_data_to_grasp_scoring_network = self.prepare_input_data_to_grasp_scoring_network(
            regularized_point_cloud, grasps)
        grasp_scores = []
        for input_data in self.input_data_to_grasp_scoring_network:
            self.grasp_scoring_network.set_validation_inputs(input_data)
            self.grasp_scoring_network.validate()
            grasp_scores.append(self.grasp_scoring_network.grasp_scores)

        grasp_scores = torch.cat(grasp_scores)
        return grasp_scores[:, -1]

    # def forward(self, pcd, pitch_label=0, yaw_label=0):
    # def forward(self, pcd_dir, num_grasps, approach_direction, approach_angle, angmode="degree"):
    def forward(self, pcd, num_grasps, approach_direction, approach_angle, angmode="degree"):
        # approach_direction = approach_direction.reshape(-1,3)
        if angmode == "degree":
            approach_angle = np.radians(approach_angle)

        self.regularized_pcd_downsample = pcd

        # pcd_downsample_equivariant = utils.align_pc_approach(pcd_downsample, approach_direction, pcmode="multi")
        pcd_downsample_equivariant = utils.align_pc_approach(self.regularized_pcd_downsample, approach_direction, pcmode="multi")


        if self.batch_max_size <= num_grasps:
            minibatch_num = int(np.ceil(num_grasps / self.batch_max_size))
            minibatch_size = self.batch_max_size
        else:
            minibatch_num = 1
            minibatch_size = num_grasps
        pcd_downsample_tile = np.tile(pcd_downsample_equivariant, (minibatch_size, 1, 1))

        feature = np.zeros((minibatch_size, 1024, 1))
        feature[:, :, 0] = approach_angle

        predicted_grasps_qt_batch_numpy_batch_list = []
        predicted_grasps_scores_qt_batch_numpy_batch_list = []

        print(f"minibatch number : {minibatch_num}")
        print(f"minibatch size : {minibatch_size}")

        for minibatch_id in tqdm(range(minibatch_num)):

            if minibatch_id == (minibatch_num - 1) and minibatch_id > 0:
                last_minibatch_size = num_grasps % self.batch_max_size
                if last_minibatch_size != 0:
                    pcd_downsample_tile = np.tile(pcd_downsample_equivariant, (last_minibatch_size, 1, 1))
                    feature = np.zeros((last_minibatch_size, 1024, 1))
                    feature[:, :, 0] = approach_angle

            meta = {}
            meta['target_cps'] = np.array([])
            meta['grasp_rt'] = np.array([])
            meta['grasp_qt'] = np.array([])
            meta['deg_weight'] = np.array([])
            meta['pc'] = pcd_downsample_tile
            meta['features'] = feature

            self.grasp_sampling_network.set_input(meta)
            self.grasp_sampling_network.validate()
            predicted_grasps_qt_batch = self.grasp_sampling_network.predicted_grasp_qt
            predicted_grasps_qt_batch_numpy = predicted_grasps_qt_batch.cpu().numpy()

            # convert back to camera space
            if len(approach_direction.shape) == 1:
                approach_direction = approach_direction[None, :]
            alignmat_33 = utils.computeRotMat(approach_direction).as_matrix()[0]
            alignmat_44 = np.eye(4)
            alignmat_44[:3, :3] = alignmat_33
            invmat = np.linalg.pinv(alignmat_44)

            predicted_grasp_rt = utils.convert_qt_to_transformation_matrix(predicted_grasps_qt_batch_numpy,
                                                                           numpy=True)

            print(f"predicted_grasp_rt shape {predicted_grasp_rt.shape}")
            for graspid in range(predicted_grasp_rt.shape[0]):
                predicted_grasp_rt[graspid] = np.dot(invmat, predicted_grasp_rt[graspid])
            predicted_grasps_qt_batch_numpy = utils.convert_transformation_matrix_to_qt(predicted_grasp_rt)

            # predicted_grasps_scores_qt_batch = self.score_grasps_on_object(pcd_downsample,
            #                                                                predicted_grasps_qt_batch_numpy)
            predicted_grasps_scores_qt_batch = self.score_grasps_on_object(self.regularized_pcd_downsample,
                                                                           predicted_grasps_qt_batch_numpy)
            predicted_grasps_scores_qt_batch_numpy = predicted_grasps_scores_qt_batch.cpu().numpy()

            predicted_grasps_qt_batch_numpy_batch_list.append(predicted_grasps_qt_batch_numpy)
            predicted_grasps_scores_qt_batch_numpy_batch_list.append(predicted_grasps_scores_qt_batch_numpy)


        predicted_grasps_qt_batch_numpy_sort_batch_list = np.vstack(predicted_grasps_qt_batch_numpy_batch_list)
        predicted_grasps_scores_qt_batch_numpy_sort_batch_list = np.hstack(
            predicted_grasps_scores_qt_batch_numpy_batch_list)

        sort_ind = np.argsort(predicted_grasps_scores_qt_batch_numpy_sort_batch_list)[::-1]

        predicted_grasps_qt_batch_numpy_sort_batch_list = predicted_grasps_qt_batch_numpy_sort_batch_list[sort_ind]
        predicted_grasps_scores_qt_batch_numpy_sort_batch_list = predicted_grasps_scores_qt_batch_numpy_sort_batch_list[
            sort_ind]

        return predicted_grasps_qt_batch_numpy_sort_batch_list, predicted_grasps_scores_qt_batch_numpy_sort_batch_list

def create_o3d_point_cloud(pc):
    grasp_point_cloud_o3d = o3d.geometry.PointCloud()
    grasp_point_cloud_o3d.points = o3d.utility.Vector3dVector(pc)
    return grasp_point_cloud_o3d


def create_grippers(grasp_transformations, gripper_color=[1, 0, 0]):
    grippers = []
    for idx, grasp_transformation in enumerate(grasp_transformations):
        if idx == 0:
            gripper = utils.create_gripper_marker([0,1,0])    
            
        else:
            gripper = utils.create_gripper_marker(gripper_color)
        T = utils.convert_qt_to_transformation_matrix(grasp_transformation)[0]
        grippers.append(gripper.transform(T))
    return grippers



class CAPGraspService(Node):

    def __init__(self):
        super().__init__("capgrasp_service")
        self.pc = None
        self.pointcloud_sub = self.create_subscription(PointCloud2,'/processed_object',self.pointcloud_callback,1)
        self.get_logger().info("Created subscriber")

        self.srv = self.create_service(CAPGrasp, "capgrasp_srv_cli", self.grasp_pose_callback)
        self.get_logger().info("Created service")



    def pointcloud_callback(self, msg:PointCloud2):
        pc_array = ros2_numpy.point_cloud2.point_cloud2_to_array(msg)
        xyz = pc_array['xyz']
        self.pc = xyz        
        #self.get_logger().info(f"Shape of xyz is {xyz.shape}")

    def get_pointcloud(self):
        return self.pc

    async def grasp_pose_callback(self, request, response):
        if request.start is True:
            self.get_logger().info("Request received!")

        grasp_sampling_network = load_network_from_file('checkpoints_2d/vae_lr_0002_bs_300_scale_1_npoints_128_radius_02_latent_size_4_position_constrained_orientation_constrained_continuous_equivariant_clusters_prerendered_continuous_equi_regloss', #arguments.checkpoint_folder_grasp_sampler,
                                                        0, #arguments.gpu_ids,
                                                        checkpoints_dir="checkpoints_2d", evaluate=True,
                                                        num_object_per_batch=1, num_grasps_per_object=10)

        # load the CAPGrasp evaluator network
        grasp_scoring_network = load_network_from_file('checkpoints_2d/evaluator_lr_0002_bs_200_scale_1_npoints_128_radius_02pointnet++_clusters_prerendered_0401', #arguments.checkpoint_folder_grasp_evaluator,
                                                    0, #arguments.gpu_ids,
                                                    checkpoints_dir="checkpoints_2d", evaluate=True,
                                                    num_object_per_batch=1, num_grasps_per_object=10)

        # initialize the CAPGrasp framework
        ValidatorNN = Validator(grasp_sampling_network, grasp_scoring_network, batch_max_size=200)

        # initialize the constrained refinement framework
        EvaluatorNetwork = RefineNN(grasp_scoring_network)

        self.get_logger().info("getting pcd")
        # prepare the point cloud, (load the demo point cloud here)
        # pcd_dir = "/home/azzam/RBE_595_Group_Project/ros2_ws/src/capgrasp_srv_cli/capgrasp_srv_cli/demo/output_full_sugar_box_inliers.pcd"
        # pcd_pc = np.array(o3d.io.read_point_cloud(pcd_dir).points)
        pcd_pc = self.get_pointcloud()
        pcd_downsample = np.expand_dims(pcd_pc[np.random.choice(pcd_pc.shape[0], 1024)], axis=0)
        pc_mean = pcd_downsample.mean(axis=1)
        regularized_pcd_downsample = pcd_downsample - pc_mean


        # specify the approach direction and allowed angle alpha
        #approach_direction = np.array([0.0, 0.0, -1.0])
        approach_direction = np.array([0.0, 1.0, 0.0])
        approach_direction += np.random.rand(3) * 1e-10
        approach_direction = approach_direction / np.linalg.norm(approach_direction)
        approach_angle = 10


        # given the pcd file, propose 6dof grasp and the associated scores
        grasps_sample_numpy, predicted_grasps_scores_qt_batch_numpy = ValidatorNN.forward(
            pcd=regularized_pcd_downsample, num_grasps=200, approach_direction=approach_direction,
            approach_angle=approach_angle)

        # score before refinement
        print(predicted_grasps_scores_qt_batch_numpy[:100])


        # grasp refinement
        improved_qt, improved_success = EvaluatorNetwork.improve_grasps_sampling_based_constrained(
            regularized_pcd_downsample,
            grasps_sample_numpy,
            approach_direction,
            approach_angle,
            num_refine_steps=20)

        print(improved_success[:100])

        # visualize the grasp before refinement
        pcs_to_visualize = []
        object_pc = create_o3d_point_cloud(regularized_pcd_downsample[0])
        pcs_to_visualize.append(object_pc)
        print(pc_mean)
        poses = improved_qt[:5].copy()
        for pose in poses:
            print(f'original: {pose[4:]}')
            pose[4] = pose[4] + pc_mean[0][0]
            pose[5] = pose[5] + pc_mean[0][1]
            pose[6] = pose[6] + pc_mean[0][2]
            print(f'corrected: {pose[4:]}')
            print()



        grippers = create_grippers(improved_qt[:5])

        # grippers = create_grippers(grasps_sample_numpy)[:10]
        pcs_to_visualize += grippers

        #best_gripper = create_grippers(improved_qt,[0,0,1])[0:1]

        coord = o3d.geometry.TriangleMesh.create_coordinate_frame(size=0.05, origin=np.array([0.0, 0.0, 0.0]))
        pcs_to_visualize.append(coord)

        vis = o3d.visualization.Visualizer()
        vis.create_window()

        # o3d.visualization.draw_geometries(pcs_to_visualize)
        vis.add_geometry(object_pc)
        #vis.add_geometry(best_grippers)
        for gripper in grippers:
            vis.add_geometry(gripper)
            
        vis.add_geometry(coord)

        ctr = vis.get_view_control()
        ctr.change_field_of_view(step=-90)
            
        vis.run()
        vis.destroy_window()






        best_pose = poses[0]
        r = R.from_quat([best_pose[0], best_pose[1], best_pose[2], best_pose[3]])
        ypr = r.as_euler('zyx', degrees=True)
        self.get_logger().info(f'rpy is {ypr[0]}, {ypr[1]}, {ypr[2]}')
        output = [round(float(best_pose[4]),3), round(float(best_pose[5]),3), round(float(best_pose[6]),3)]#, float(ypr[0]), float(ypr[1]),float(ypr[2])]

        print(output)
        response.xyz = output
        return response


def main():
    rclpy.init()

    service = CAPGraspService()

    executor = MultiThreadedExecutor()
    executor.add_node(service)

    try:
        executor.spin()
    finally:
        executor.shutdown()
        service.destroy_node()
        rclpy.shutdown()

    rclpy.spin(service)

    rclpy.shutdown()






if __name__ == '__main__':
    main()