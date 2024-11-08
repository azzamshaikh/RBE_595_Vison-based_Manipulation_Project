import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
from ros2_data.action import MoveXYZW, MoveG

class PandaTaskSequence(Node):
    def __init__(self):
        super().__init__('panda_task_sequence')
        
        # Action clients for moving the robot and controlling the gripper
        self.move_client = ActionClient(self, MoveXYZW, '/MoveXYZW')
        self.gripper_client = ActionClient(self, MoveG, '/MoveG')
        
        # Subscribe to grasp pose topic
        self.subscription = self.create_subscription(
            Float64MultiArray,
            '/goal_pose',
            self.update_grasp_pose,
            10
        )

        # Initialize the target pose and execute the sequence
        self.target_pose = None
        self.speed = 1.0
        self.execute_sequence()

    def update_grasp_pose(self, msg):
        """Callback to update target pose and speed from /grasp_pose topic"""
        if len(msg.data) < 8:
            self.get_logger().error("Received grasp pose array has insufficient elements. Expected 8.")
            return

        # Extract position, orientation (yaw, pitch, roll), and speed from Float64MultiArray
        self.target_pose = {
            'position': (msg.data[0], msg.data[1], msg.data[2]),
            'orientation': (msg.data[3], msg.data[4], msg.data[5]),  # yaw, pitch, roll
        }
        self.speed = msg.data[7]
        self.get_logger().info(f'Updated grasp pose: {self.target_pose} with speed {self.speed}')

    def execute_sequence(self):
        # Wait for the target pose to be updated
        while not self.target_pose:
            self.get_logger().info('Waiting for grasp pose...')
            rclpy.spin_once(self, timeout_sec=1.0)
        
        # Define the sequence of tasks with dynamic grasp pose
        sequence = [
            {'action': 'move', 'position': self.target_pose['position'], 'orientation': self.target_pose['orientation'], 'speed': self.speed},  # Move to object location
            {'action': 'grip', 'goal': 0.04},  # Close gripper to grasp
            {'action': 'move', 'position': (0.5, -0.3, 0.4), 'orientation': (0.0, 0.0, 0.0), 'speed': 1.0},  # Move to new location
            {'action': 'grip', 'goal': 0.08}  # Open gripper to release
        ]

        # Execute each task in the sequence
        for task in sequence:
            if task['action'] == 'move':
                self.send_move_goal(task['position'], task['orientation'], task['speed'])
            elif task['action'] == 'grip':
                self.send_grip_goal(task['goal'])

    def send_move_goal(self, position, orientation, speed):
        goal_msg = MoveXYZW.Goal()
        goal_msg.positionx, goal_msg.positiony, goal_msg.positionz = position
        goal_msg.yaw, goal_msg.pitch, goal_msg.roll = orientation  # Use yaw, pitch, roll
        goal_msg.speed = speed

        self.move_client.wait_for_server()
        future = self.move_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, future)
        
        result = future.result().result
        if result.result == "SUCCESS":
            self.get_logger().info('Move successful')
        else:
            self.get_logger().info(f'Move failed with result: {result.result}')

    def send_grip_goal(self, goal):
        grip_msg = MoveG.Goal()
        grip_msg.goal = goal

        self.gripper_client.wait_for_server()
        future = self.gripper_client.send_goal_async(grip_msg)
        rclpy.spin_until_future_complete(self, future)
        
        result = future.result().result
        if result == "SUCCESS":
            self.get_logger().info('Grip action successful')
        else:
            self.get_logger().info(f'Grip action failed with result: {result}')

def main(args=None):
    rclpy.init(args=args)
    task_sequence = PandaTaskSequence()
    rclpy.spin(task_sequence)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
