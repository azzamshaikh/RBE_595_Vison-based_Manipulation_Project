import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
from ros2_data.action import MoveXYZW  # Replace with the actual path to your action definition

class MoveXYZWClient(Node):
    def __init__(self):
        super().__init__('move_xyzw_client')
        self._action_client = ActionClient(self, MoveXYZW, '/MoveXYZW')
        self.subscription = self.create_subscription(
            Float64MultiArray,
            '/goal_pose',
            self.pose_callback,
            10
        )
        self.get_logger().info("MoveXYZW Client is ready and listening for goal poses on /goal_pose")

    def pose_callback(self, msg):
        if len(msg.data) < 7:
            self.get_logger().error("Received goal pose array has insufficient elements. Expected 7.")
            return

        position = {'x': msg.data[0], 'y': msg.data[1], 'z': msg.data[2]}
        orientation = {'yaw': msg.data[3], 'pitch': msg.data[4], 'roll': msg.data[5]}
        speed = msg.data[6] if len(msg.data) > 6 else 1.0  # Use default speed of 1.0 if not specified

        # Call the send_goal function to send the message to the action server
        self.send_goal(position, orientation, speed)

    def send_goal(self, position, orientation, speed):
        goal_msg = MoveXYZW.Goal()
        
        # Populate the goal message with position, orientation, and speed
        goal_msg.positionx = position['x']
        goal_msg.positiony = position['y']
        goal_msg.positionz = position['z']
        goal_msg.yaw = orientation['yaw']
        goal_msg.pitch = orientation['pitch']
        goal_msg.roll = orientation['roll']
        goal_msg.speed = speed
        
        # Send the goal and register callbacks for response and feedback
        self._action_client.wait_for_server()
        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal was rejected.')
            return
        self.get_logger().info('Goal accepted.')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def feedback_callback(self, feedback_msg):
        self.get_logger().info(f'Received feedback: {feedback_msg.feedback}')

    def get_result_callback(self, future):
        result = future.result().result
        if result.success:
            self.get_logger().info('Goal reached successfully!')
        else:
            self.get_logger().info('Failed to reach the goal.')
        rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    action_client = MoveXYZWClient()
    rclpy.spin(action_client)

if __name__ == '__main__':
    main()