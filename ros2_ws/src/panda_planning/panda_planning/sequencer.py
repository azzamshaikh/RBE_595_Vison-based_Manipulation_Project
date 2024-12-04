import rclpy
from rclpy.node import Node
from std_msgs.msg import String, Float64MultiArray
import time


class Sequencer(Node):
    def __init__(self):
        super().__init__('sequencer')

        self.publisher = self.create_publisher(Float64MultiArray, '/robotaction', 10)
        
        # Target pose placeholder
        self.target_pose = None

        # Subscriber to listen for a 6DOF pose on /robotaction
        self.subscription = self.create_subscription(
            Float64MultiArray,
            '/action',
            self.target_pose_callback,
            10
        )

        self.subscription

    def target_pose_callback(self, msg):
        """Callback to receive the 6DOF pose and start the pick-and-place sequence."""
        try:
            data = msg.data

            self.get_logger().info("Received target pose.")

            pose = {'positionx':None,
                    'positiony':None,
                    'positionz':None,
                    'yaw':None,
                    'pitch':None,
                    'roll':None,
            }

            commands = {
                        'action': None,
                        'value' : pose,
                        'speed' :1.0
            }

            commands['action'] = 'MoveXYZW'
            commands['value']['positionx'] = data[0]
            commands['value']['positiony'] = data[1]
            commands['value']['positionz'] = data[2]
            commands['value']['yaw'] = data[3]
            commands['value']['pitch'] = data[4]
            commands['value']['roll'] = data[5]

            if commands["action"] == "MoveXYZW":
                self.target_pose = commands["value"]
                self.execute_sequence()
        except Exception as e:
            self.get_logger().error(f"Error parsing target pose: {e}")

    def publish_action(self, action):
        """Publish a single action to the /robotaction topic.

            "action": "MoveXYZW",
            "value": {
                "positionx": self.target_pose["positionx"],
                "positiony": self.target_pose["positiony"],
                "positionz": self.target_pose["positionz"],
                "yaw": self.target_pose["yaw"],
                "pitch": self.target_pose["pitch"],
                "roll": self.target_pose["roll"]
            },
            "speed": 0.5
        
        """
        msg = Float64MultiArray()
        if action["action"] == "MoveXYZW":
            commands = [0.0,
                        action["value"]["positionx"],
                        action["value"]["positiony"],
                        action["value"]["positionz"],
                        action["value"]["yaw"],
                        action["value"]["pitch"],
                        action["value"]["roll"],
                        action["speed"]]
        elif action["action"] == "GripperOpen":
            commands = [1.0]
        elif action["action"] == "GripperClose":
            commands = [2.0]
        elif action["action"] == "Attach":
            commands = [3.0]
        elif action["action"] == "Detach":
            commands = [4.0]
        elif action["action"] == "MoveJs":
            commands = [5.0,
                        action["value"]["joint1"],
                        action["value"]["joint2"],
                        action["value"]["joint3"],
                        action["value"]["joint4"],
                        action["value"]["joint5"],
                        action["value"]["joint6"],
                        action["value"]["joint7"],
                        action["speed"]]

        msg.data = commands
        self.publisher.publish(msg)
        self.get_logger().info(f"Published action: {action['action']}")
        time.sleep(2)  # Allow time for the action to complete
    
    def go_to_home(self):
        home_action = {
            "action": "MoveJs",
            "value": {"joint1": 0.0, "joint2": 0.0, "joint3": 0.0, "joint4": 0.0, "joint5": 0.0, "joint6": 0.0, "joint7":0.0},
            "speed": 1.0
        }
        self.publish_action(home_action)

    def open_gripper(self):
        open_gripper_action = {"action": "GripperOpen"}
        self.publish_action(open_gripper_action)

    def close_gripper(self):
        close_gripper_action = {"action": "GripperClose"}
        self.publish_action(close_gripper_action)

    def grasp_object(self):
        # 5. Close the gripper
        attach = {'action': 'Attach', 'value': {'object': 'sugar3', 'endeffector': 'end_effector_frame'}}

        close_gripper_action = {"action": "GripperClose"}
        self.publish_action(close_gripper_action)
        
        # 6. Attach Object:
        self.publish_action(attach)

    def release_object(self):
        dettach = {'action': 'Detach', 'value': {'object': 'sugar3'}}
        # 9. Open the gripper to release the object
        open_gripper_action = {"action": "GripperOpen"}
        self.publish_action(open_gripper_action)
        
        # 10. Attach Object:
        self.publish_action(dettach)
    
    def go_to_grasp(self):
        grasp_action = {
            "action": "MoveXYZW",
            "value": {
                "positionx": self.target_pose["positionx"],
                "positiony": self.target_pose["positiony"],
                "positionz": self.target_pose["positionz"],
                "yaw": self.target_pose["yaw"],
                "pitch": self.target_pose["pitch"],
                "roll": self.target_pose["roll"]
            },
            "speed": 0.5
        }
        self.publish_action(grasp_action)

    def go_to_basket(self):
        bin_action = {
            "action": "MoveXYZW",
            "value": {"positionx": 0.0, "positiony": -0.5, "positionz": 0.6, "yaw": 45.0, "pitch": 180.0, "roll": 0.0},
            "speed": 1.0
        }
        self.publish_action(bin_action)

    def execute_sequence(self):
        """Perform the pick-and-place sequence."""
        if self.target_pose is None:
            self.get_logger().warn("No target pose received.")
            return

        self.get_logger().info("Starting shelf picking sequence...")
        
        # 1. Open the gripper
        self.open_gripper()

        # 2. Go to grasp pose
        self.go_to_grasp()

        # 3. Grasp the object
        self.grasp_object()

        # 4. Go to the basket
        self.go_to_basket()

        # 5. Release the object
        self.release_object()

        # 6. Go to the home position
        self.go_to_home()

        # Shut down after completing the sequence
        self.get_logger().info("Shelf picking sequence completed!")
        self.get_logger().info("Ready to pick the next object!")


def main(args=None):
    rclpy.init(args=args)
    sequencer = Sequencer()

    try:
        rclpy.spin(sequencer)
    except rclpy.executors.ExternalShutdownException:
        pass
    finally:
        sequencer.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
