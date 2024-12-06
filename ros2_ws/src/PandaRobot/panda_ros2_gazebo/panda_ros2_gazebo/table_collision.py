#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose
from shape_msgs.msg import SolidPrimitive
from moveit_msgs.msg import CollisionObject, PlanningScene

class AddCollisionGeometryNode(Node):
    def __init__(self):
        super().__init__("add_collision_geometry_node")
        self.get_logger().info("Starting Add Collision Geometry Node")

        # Publisher for the planning scene
        self.planning_scene_publisher = self.create_publisher(PlanningScene, "/planning_scene", 10)

        # Add collision object
        self.add_collision_object()

    def add_collision_object(self):
        # Create a collision object
        collision_object = CollisionObject()
        collision_object.id = "box"
        collision_object.header.frame_id = "world"  # Reference frame

        # Define the box dimensions
        box = SolidPrimitive()
        box.type = SolidPrimitive.BOX
        box.dimensions = [1.5, 0.8, 1.0]  # Dimensions in meters (x, y, z)

        # Define the pose of the box
        box_pose = Pose()
        box_pose.position.x = 0.0
        box_pose.position.y = 0.9
        box_pose.position.z = 0.0
        box_pose.orientation.w = 1.0

        # Add the primitive and pose to the collision object
        collision_object.primitives.append(box)
        collision_object.primitive_poses.append(box_pose)
        collision_object.operation = CollisionObject.ADD

        # Define the box dimensions
        camera = SolidPrimitive()
        camera.type = SolidPrimitive.BOX
        camera.dimensions = [0.2, 0.2, 0.2]  # Dimensions in meters (x, y, z)

        # Define the pose of the box
        camera_pose = Pose()
        camera_pose.position.x = -0.3
        camera_pose.position.y = 0.0
        camera_pose.position.z = 1.0
        camera_pose.orientation.w = 1.0

        # Add the primitive and pose to the collision object
        collision_object.primitives.append(camera)
        collision_object.primitive_poses.append(camera_pose)
        collision_object.operation = CollisionObject.ADD

        # Publish the planning scene update
        planning_scene = PlanningScene()
        planning_scene.world.collision_objects.append(collision_object)
        planning_scene.is_diff = True





        self.get_logger().info(f"Adding collision object: {collision_object.id}")
        self.planning_scene_publisher.publish(planning_scene)

def main(args=None):
    rclpy.init(args=args)
    node = AddCollisionGeometryNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Shutting down Add Collision Geometry Node.")
    finally:
        rclpy.shutdown()

if __name__ == "__main__":
    main()
