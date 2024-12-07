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

        # Add collision objects
        self.add_collision_objects()

    def add_collision_objects(self):
        # Create the first collision object
        collision_object1 = CollisionObject()
        collision_object1.id = "box_1"
        collision_object1.header.frame_id = "world"

        box1 = SolidPrimitive()
        box1.type = SolidPrimitive.BOX
        box1.dimensions = [1.5, 0.8, 1.0]

        box1_pose = Pose()
        box1_pose.position.x = 0.0
        box1_pose.position.y = 0.95
        box1_pose.position.z = -0.07
        box1_pose.orientation.w = 1.0

        collision_object1.primitives.append(box1)
        collision_object1.primitive_poses.append(box1_pose)
        collision_object1.operation = CollisionObject.ADD

        # Create the second collision object
        collision_object2 = CollisionObject()
        collision_object2.id = "box_2"
        collision_object2.header.frame_id = "world"

        box2 = SolidPrimitive()
        box2.type = SolidPrimitive.BOX
        box2.dimensions = [1.5, 0.8, 1.0]

        box2_pose = Pose()
        box2_pose.position.x = 0.0
        box2_pose.position.y = 0.95
        box2_pose.position.z = 1.65
        box2_pose.orientation.w = 1.0

        collision_object2.primitives.append(box2)
        collision_object2.primitive_poses.append(box2_pose)
        collision_object2.operation = CollisionObject.ADD

        # Create the side_right collision object
        collision_object3 = CollisionObject()
        collision_object3.id = "box_3"
        collision_object3.header.frame_id = "world"

        box3 = SolidPrimitive()
        box3.type = SolidPrimitive.BOX
        box3.dimensions = [0.2, 0.5, 1.0]

        box3_pose = Pose()
        box3_pose.position.x = 0.6
        box3_pose.position.y = 0.8
        box3_pose.position.z = 0.6
        box3_pose.orientation.w = 1.0

        collision_object3.primitives.append(box3)
        collision_object3.primitive_poses.append(box3_pose)
        collision_object3.operation = CollisionObject.ADD

        # Create the side_left collision object
        collision_object4 = CollisionObject()
        collision_object4.id = "box_4"
        collision_object4.header.frame_id = "world"

        box4 = SolidPrimitive()
        box4.type = SolidPrimitive.BOX
        box4.dimensions = [0.2, 0.5, 1.0]

        box4_pose = Pose()
        box4_pose.position.x = -0.6
        box4_pose.position.y = 0.8
        box4_pose.position.z = 0.6
        box4_pose.orientation.w = 1.0

        collision_object4.primitives.append(box4)
        collision_object4.primitive_poses.append(box4_pose)
        collision_object4.operation = CollisionObject.ADD

        # Create the camera collision object
        collision_object5 = CollisionObject()
        collision_object5.id = "camera"
        collision_object5.header.frame_id = "world"

        camera = SolidPrimitive()
        camera.type = SolidPrimitive.BOX
        camera.dimensions = [0.2, 0.2, 0.2]

        camera_pose = Pose()
        camera_pose.position.x = -0.3
        camera_pose.position.y = 0.0
        camera_pose.position.z = 1.0
        camera_pose.orientation.w = 1.0

        collision_object5.primitives.append(camera)
        collision_object5.primitive_poses.append(camera_pose)
        collision_object5.operation = CollisionObject.ADD

        # Create the side_left collision object
        collision_object6 = CollisionObject()
        collision_object6.id = "box_6"
        collision_object6.header.frame_id = "world"

        box6 = SolidPrimitive()
        box6.type = SolidPrimitive.BOX
        box6.dimensions = [0.88, 0.4, 0.02]

        box6_pose = Pose()
        box6_pose.position.x = 0.0
        box6_pose.position.y = 0.8
        box6_pose.position.z = 0.8
        box6_pose.orientation.w = 1.0

        collision_object6.primitives.append(box6)
        collision_object6.primitive_poses.append(box6_pose)
        collision_object6.operation = CollisionObject.ADD


        # Publish the planning scene updates
        planning_scene = PlanningScene()
        planning_scene.world.collision_objects.append(collision_object1)
        planning_scene.world.collision_objects.append(collision_object2)
        planning_scene.world.collision_objects.append(collision_object3)
        planning_scene.world.collision_objects.append(collision_object4)
        planning_scene.world.collision_objects.append(collision_object5)
        planning_scene.world.collision_objects.append(collision_object6)
        planning_scene.is_diff = True

        self.get_logger().info(f"Adding collision objects: {collision_object1.id}, {collision_object2.id}, {collision_object3.id}, {collision_object4.id}, {collision_object5.id}")
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






# #!/usr/bin/env python3

# import rclpy
# from rclpy.node import Node
# from geometry_msgs.msg import Pose
# from shape_msgs.msg import SolidPrimitive
# from moveit_msgs.msg import CollisionObject, PlanningScene

# class AddCollisionGeometryNode(Node):
#     def __init__(self):
#         super().__init__("add_collision_geometry_node")
#         self.get_logger().info("Starting Add Collision Geometry Node")

#         # Publisher for the planning scene
#         self.planning_scene_publisher = self.create_publisher(PlanningScene, "/planning_scene", 10)

#         # Add collision objects
#         self.add_collision_objects()

#     def add_collision_objects(self):
#         # Create the first collision object
#         collision_object1 = CollisionObject()
#         collision_object1.id = "box_1"
#         collision_object1.header.frame_id = "world"  # Reference frame

#         # Define the first box dimensions
#         box1 = SolidPrimitive()
#         box1.type = SolidPrimitive.BOX
#         box1.dimensions = [1.5, 0.8, 1.0]  # Dimensions in meters (x, y, z)

#         # Define the pose of the first box
#         box1_pose = Pose()
#         box1_pose.position.x = 0.0
#         box1_pose.position.y = 0.95
#         box1_pose.position.z = -0.07  # Base height
#         box1_pose.orientation.w = 1.0

#         # Add the primitive and pose to the first collision object
#         collision_object1.primitives.append(box1)
#         collision_object1.primitive_poses.append(box1_pose)
#         collision_object1.operation = CollisionObject.ADD

#         # Create the second collision object
#         collision_object2 = CollisionObject()
#         collision_object2.id = "box_2"
#         collision_object2.header.frame_id = "world"  # Reference frame

#         # Define the second box dimensions
#         box2 = SolidPrimitive()
#         box2.type = SolidPrimitive.BOX
#         box2.dimensions = [1.5, 0.8, 1.0]  # Dimensions in meters (x, y, z)

#         # Define the pose of the second box
#         box2_pose = Pose()
#         box2_pose.position.x = 0.0
#         box2_pose.position.y = 0.95
#         box2_pose.position.z = 1.3  
#         box2_pose.orientation.w = 1.0

#         # Add the primitive and pose to the second collision object
#         collision_object2.primitives.append(box2)
#         collision_object2.primitive_poses.append(box2_pose)
#         collision_object2.operation = CollisionObject.ADD

#         # Create the side_right collision object
#         collision_object3 = CollisionObject()
#         collision_object3.id = "box_3"
#         collision_object3.header.frame_id = "world"  # Reference frame

#         # Define the side_right box dimensions
#         box3 = SolidPrimitive()
#         box3.type = SolidPrimitive.BOX
#         box3.dimensions = [0.2, 0.5, 1.0]  # Dimensions in meters (x, y, z)

#         # Define the pose of the side_right box
#         box3_pose = Pose()
#         box3_pose.position.x = 0.6
#         box3_pose.position.y = 0.8
#         box3_pose.position.z = 0.6  
#         box3_pose.orientation.w = 1.0

#         # Add the primitive and pose to the side_right collision object
#         collision_object3.primitives.append(box3)
#         collision_object3.primitive_poses.append(box3_pose)
#         collision_object3.operation = CollisionObject.ADD

#         # Create the side_left collision object
#         collision_object4 = CollisionObject()
#         collision_object4.id = "box_4"
#         collision_object4.header.frame_id = "world"  # Reference frame

#         # Define the side_left box dimensions
#         box4 = SolidPrimitive()
#         box4.type = SolidPrimitive.BOX
#         box4.dimensions = [0.2, 0.5, 1.0]  # Dimensions in meters (x, y, z)

#         # Define the pose of the side_left box
#         box4_pose = Pose()
#         box4_pose.position.x = -0.6
#         box4_pose.position.y = 0.8
#         box4_pose.position.z = 0.6  
#         box4_pose.orientation.w = 1.0

#         # Add the primitive and pose to the side_left collision object
#         collision_object4.primitives.append(box4)
#         collision_object4.primitive_poses.append(box4_pose)
#         collision_object4.operation = CollisionObject.ADD

#         # Define the box dimensions
#         # camera = SolidPrimitive()
#         # camera.type = SolidPrimitive.BOX
#         # camera.dimensions = [0.2, 0.2, 0.2]  # Dimensions in meters (x, y, z)

#         # Define the pose of the box
#         camera_pose = Pose()
#         camera_pose.position.x = -0.3
#         camera_pose.position.y = 0.0
#         camera_pose.position.z = 1.0
#         camera_pose.orientation.w = 1.0

#         # Add the primitive and pose to the collision object
#         collision_object5.primitives.append(camera)
#         collision_object5.primitive_poses.append(camera_pose)
#         collision_object5.operation = CollisionObject.ADD

#         # Publish the planning scene updates
#         planning_scene = PlanningScene()
#         planning_scene.world.collision_objects.append(collision_object1)
#         planning_scene.world.collision_objects.append(collision_object2)
#         planning_scene.world.collision_objects.append(collision_object3)
#         planning_scene.world.collision_objects.append(collision_object4)
#         planning_scene.world.collision_objects.append(collision_object5)
#         planning_scene.is_diff = True

#         self.get_logger().info(f"Adding collision objects: {collision_object1.id} and {collision_object2.id} and {collision_object3.id} and {collision_object4.id}" and {collision_object5.id})
#         self.planning_scene_publisher.publish(planning_scene)

# def main(args=None):
#     rclpy.init(args=args)
#     node = AddCollisionGeometryNode()
#     try:
#         rclpy.spin(node)
#     except KeyboardInterrupt:
#         node.get_logger().info("Shutting down Add Collision Geometry Node.")
#     finally:
#         rclpy.shutdown()

# if __name__ == "__main__":
#     main()
