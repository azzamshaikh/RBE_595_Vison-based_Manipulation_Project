import rclpy
from rclpy.node import Node
import smach
import smach_ros
from std_msgs.msg import String
from sensor_msgs.msg import Image
from geometry_msgs.msg import Pose
# from smach_ros import IntrospectionServer
from graphviz import Digraph

class TakeImageState(smach.State):
    def __init__(self, node):
        smach.State.__init__(self, outcomes=['success', 'failure'])
        self.node = node

    def execute(self, userdata):
        self.node.get_logger().info("Capturing image...")
        # Simulate capturing an image (use actual topics in your implementation)
        return 'success'


class YoloDetectionState(smach.State):
    def __init__(self, node):
        smach.State.__init__(self, outcomes=['success', 'failure'], output_keys=['bounding_boxes'])
        self.node = node

    def execute(self, userdata):
        self.node.get_logger().info("Running YOLO detection...")
        # Simulate bounding box detection (use actual service calls here)
        userdata.bounding_boxes = [{"label": "item", "x": 100, "y": 50, "width": 200, "height": 100}]
        return 'success'


class ChooseClassState(smach.State):
    def __init__(self, node):
        smach.State.__init__(self, outcomes=['success', 'failure'], input_keys=['bounding_boxes'], output_keys=['chosen_class'])
        self.node = node

    def execute(self, userdata):
        self.node.get_logger().info("Choosing class of object...")
        # Simulate class selection
        userdata.chosen_class = "item"
        return 'success'


class FindClosestItemState(smach.State):
    def __init__(self, node):
        smach.State.__init__(self, outcomes=['success', 'failure'], input_keys=['chosen_class'], output_keys=['closest_item'])
        self.node = node

    def execute(self, userdata):
        self.node.get_logger().info("Finding closest item...")
        # Simulate finding the closest item
        userdata.closest_item = {"x": 0.5, "y": 0.2, "z": 0.1}
        return 'success'


class ComputeGraspPointsState(smach.State):
    def __init__(self, node):
        smach.State.__init__(self, outcomes=['success', 'failure'], input_keys=['closest_item'], output_keys=['grasp_points'])
        self.node = node

    def execute(self, userdata):
        self.node.get_logger().info("Computing grasp points...")
        # Simulate GGCNN grasp computation
        userdata.grasp_points = {"x": 0.5, "y": 0.2, "z": 0.1, "angle": 0.0}
        return 'success'


class MoveToPoseState(smach.State):
    def __init__(self, node):
        smach.State.__init__(self, outcomes=['success', 'failure'], input_keys=['grasp_points'])
        self.node = node

    def execute(self, userdata):
        self.node.get_logger().info("Moving robot to pose...")
        # Simulate MoveIt2 command
        return 'success'


class CloseGripperState(smach.State):
    def __init__(self, node):
        smach.State.__init__(self, outcomes=['success', 'failure'])
        self.node = node

    def execute(self, userdata):
        self.node.get_logger().info("Closing gripper...")
        # Simulate gripper control
        return 'success'


class MoveToDropPoseState(smach.State):
    def __init__(self, node):
        smach.State.__init__(self, outcomes=['success', 'failure'])
        self.node = node

    def execute(self, userdata):
        self.node.get_logger().info("Moving to drop pose...")
        # Simulate MoveIt2 command
        return 'success'


class OpenGripperState(smach.State):
    def __init__(self, node):
        smach.State.__init__(self, outcomes=['success', 'failure'])
        self.node = node

    def execute(self, userdata):
        self.node.get_logger().info("Opening gripper...")
        # Simulate gripper control
        return 'success'


# def generate_graph(state_machine):
#     dot = Digraph(comment="State Machine Diagram")
#     for state_name, state_data in state_machine.get_children().items():
#         dot.node(state_name, state_name)
#         for outcome, transition in state_data._transitions.items():
#             if transition:
#                 dot.edge(state_name, transition, label=outcome)
#     dot.render("smach_state_machine", format="png", cleanup=True)
#     print("State machine diagram saved as smach_state_machine.png")
# def generate_graph(state_machine):
#     dot = Digraph(comment="State Machine Diagram")
    
#     # Iterate over all states and their transitions
#     for state_name, state_data in state_machine.get_children().items():
#         dot.node(state_name, state_name)
#         transitions = state_data.get_registered_outcomes()
        
#         # Use transitions from the StateMachine transitions table
#         for outcome in transitions:
#             next_state = state_machine.get_transition(state_name, outcome)
#             if next_state:
#                 dot.edge(state_name, next_state, label=outcome)

#     dot.render("smach_state_machine", format="png", cleanup=True)
#     print("State machine diagram saved as smach_state_machine.png")
def generate_graph(state_machine):
    dot = Digraph(comment="State Machine Diagram")
    
    # Iterate through the states and transitions
    for state_name, state_data in state_machine.get_children().items():
        dot.node(state_name, state_name)
        
        # Use the state machine's transition table to determine connections
        transitions = state_machine._transitions.get(state_name, {})
        for outcome, next_state in transitions.items():
            if next_state:
                dot.edge(state_name, next_state, label=outcome)

    # Render the state machine diagram
    dot.render("smach_state_machine", format="png", cleanup=True)
    print("State machine diagram saved as smach_state_machine.png")



def main(args=None):
    rclpy.init(args=args)
    node = rclpy.create_node('state_planner')

    # Create a SMACH state machine
    sm = smach.StateMachine(outcomes=['completed', 'aborted'])

    # Add states to the state machine
    with sm:
        smach.StateMachine.add('TAKE_IMAGE', TakeImageState(node), transitions={'success': 'YOLO_DETECTION', 'failure': 'aborted'})
        smach.StateMachine.add('YOLO_DETECTION', YoloDetectionState(node), transitions={'success': 'CHOOSE_CLASS', 'failure': 'aborted'})
        smach.StateMachine.add('CHOOSE_CLASS', ChooseClassState(node), transitions={'success': 'FIND_CLOSEST_ITEM', 'failure': 'aborted'})
        smach.StateMachine.add('FIND_CLOSEST_ITEM', FindClosestItemState(node), transitions={'success': 'COMPUTE_GRASP_POINTS', 'failure': 'aborted'})
        smach.StateMachine.add('COMPUTE_GRASP_POINTS', ComputeGraspPointsState(node), transitions={'success': 'MOVE_TO_POSE', 'failure': 'aborted'})
        smach.StateMachine.add('MOVE_TO_POSE', MoveToPoseState(node), transitions={'success': 'CLOSE_GRIPPER', 'failure': 'aborted'})
        smach.StateMachine.add('CLOSE_GRIPPER', CloseGripperState(node), transitions={'success': 'MOVE_TO_DROP_POSE', 'failure': 'aborted'})
        smach.StateMachine.add('MOVE_TO_DROP_POSE', MoveToDropPoseState(node), transitions={'success': 'OPEN_GRIPPER', 'failure': 'aborted'})
        smach.StateMachine.add('OPEN_GRIPPER', OpenGripperState(node), transitions={'success': 'completed', 'failure': 'aborted'})

    # # Attach Introspection Server
    # sis = IntrospectionServer('state_machine_server', sm, '/SM_ROOT')
    # sis.start()

    generate_graph(sm)

    # Execute SMACH plan
    outcome = sm.execute()

    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
