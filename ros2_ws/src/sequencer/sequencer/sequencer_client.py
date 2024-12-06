import rclpy
from rclpy.node import Node
import rclpy.time
from std_msgs.msg import Int32, Int32MultiArray, Float64MultiArray
from sensor_msgs.msg import Image, PointCloud2, CameraInfo
from action_msgs.msg import GoalStatus
import time
from sequencer_itf.action import Sequencer
from capgrasp_itf.srv import CAPGrasp
from rclpy.action import ActionClient
import numpy as np

from statemachine import State, StateMachine
from statemachine.contrib.diagram import DotGraphMachine



SEQ_RES = "null"

class RobotActionClient(Node):
    def __init__(self):
        super().__init__('sequencer_action_client')

        #self.publisher = self.create_publisher(Float64MultiArray, '/robotaction', 10)
        self.action_client = ActionClient(self, Sequencer, 'sequencer')
        
        # Target pose placeholder
        self.target_pose = None

        self.shelf_sequence = [self.open_gripper,
                               self.go_to_pregrasp, 
                               self.go_to_grasp,
                               self.close_gripper,
                               self.attach_object,
                               self.go_to_basket,
                               self.open_gripper,
                               self.detach_object,
                               self.go_to_home
                               ]
        
        self.server_result = False
        self.status = GoalStatus.STATUS_EXECUTING
        self.rate = self.create_rate(10,self.get_clock())

        self.goal_list = None
        self.command_list = []

        self.bounding_box = None
        self.bounding_box_sub = self.create_subscription(
            Int32MultiArray,
            "/yolo/prediction/bbox",
            self.bounding_box_callback,
            10
        )

        self.num_predictions = None
        self.num_predictions = self.create_subscription(
            Int32,
            "/yolo/prediction/number_of_predictions",
            self.num_predictions_callback,
            10
        )

    def num_predictions_callback(self, msg:Int32):
        self.num_predictions = msg.data

    def bounding_box_callback(self, msg:Int32MultiArray):
        # Save the bounding box [x_min, y_min, x_max, y_max]
        self.bounding_box = np.array(msg.data)

    def get_number_of_objects(self):
        return self.num_predictions


    def send_goal(self, commands):
        self.status = GoalStatus.STATUS_EXECUTING
        self.server_result = False
        goal_msg = Sequencer.Goal()
        goal_msg.commands = commands

        self.action_client.wait_for_server()

        self.send_goal_future = self.action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)

        self.send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected by controller :(')
            return
        
        self.get_logger().info('Goal accepted by controller :)')

        self.get_result_future = goal_handle.get_result_async()
        self.get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        global SEQ_RES
        result = future.result().result
        self.get_logger().info(f'Result : {result.result}')
        SEQ_RES = result.result
        self.server_result = True
        self.status = GoalStatus.STATUS_SUCCEEDED
        
    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        #self.get_logger().info(f'Feedback : {feedback.feedback}')


    def set_target_pose(self, data):
        """Callback to receive the 6DOF pose and start the pick-and-place sequence."""
        try:

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
                #self.execute_sequence()
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
        elif action["action"] == "MoveL":
            commands = [6.0,
                        action["value"]["movex"],
                        action["value"]["movey"],
                        action["value"]["movez"],
                        action["speed"]]

        msg.data = commands
        #self.get_logger().info(f"Published action: {action['action']}")
        return commands
    
    
    def go_to_home(self):
        home_action = {
            "action": "MoveJs",
            "value": {"joint1": 0.0, "joint2": 0.0, "joint3": 0.0, "joint4": 0.0, "joint5": 0.0, "joint6": 0.0, "joint7":0.0},
            "speed": 1.0
        }
        commands = self.publish_action(home_action)
        return commands


    def open_gripper(self):
        # 9. Open the gripper to release the object
        open_gripper_action = {"action": "GripperOpen"}
        commands = self.publish_action(open_gripper_action)
        return commands

    def close_gripper(self):
        # 5. Close the gripper
        close_gripper_action = {"action": "GripperClose"}
        commands = self.publish_action(close_gripper_action)
        return commands
        

    def attach_object(self):
        attach = {'action': 'Attach', 'value': {'object': 'sugar3', 'endeffector': 'end_effector_frame'}}
        # 6. Attach Object:
        commands = self.publish_action(attach)
        return commands


    def detach_object(self):
        dettach = {'action': 'Detach', 'value': {'object': 'sugar3'}}
        # 10. Detacth Object:
        commands = self.publish_action(dettach)
        return commands
    
    def go_to_pregrasp(self):
        grasp_action = {
            "action": "MoveXYZW",
            "value": {
                "positionx": self.target_pose["positionx"],
                "positiony": self.target_pose["positiony"] - 0.1,
                "positionz": self.target_pose["positionz"],
                "yaw": self.target_pose["yaw"],
                "pitch": self.target_pose["pitch"],
                "roll": self.target_pose["roll"]
            },
            "speed": 0.5
        }
        commands = self.publish_action(grasp_action)
        return commands
    
    def go_to_grasp(self):
        grasp_action = {
            # "action": "MoveXYZW",
            # "value": {
            #     "positionx": self.target_pose["positionx"],
            #     "positiony": self.target_pose["positiony"],
            #     "positionz": self.target_pose["positionz"],
            #     "yaw": self.target_pose["yaw"],
            #     "pitch": self.target_pose["pitch"],
            #     "roll": self.target_pose["roll"]
            # },
            # "speed": 0.5
            "action": "MoveL",
            "value": {
                "movex": 0.0,
                "movey": 0.1,
                "movez": 0.0,
            },
            "speed": 0.5
        }
        commands = self.publish_action(grasp_action)
        return commands

    def go_to_basket(self):
        bin_action = {
            "action": "MoveXYZW",
            "value": {"positionx": 0.0, "positiony": -0.5, "positionz": 0.6, "yaw": 45.0, "pitch": 180.0, "roll": 0.0},
            "speed": 1.0
        }
        commands = self.publish_action(bin_action)
        return commands

    def get_goals(self):
        self.command_list.clear()
        for action in self.shelf_sequence:
            self.command_list.append(action())
        return self.command_list
    

class GraspClient(Node):

    def __init__(self):
        super().__init__('capgrasp_client')
        self.cli = self.create_client(CAPGrasp, 'capgrasp_srv_cli')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available. waiting again...')
        self.req = CAPGrasp.Request()

    def send_request(self):
        self.req.start = True
        self.future = self.cli.call_async(self.req)



class ShelfPickingStateMachine(StateMachine):

    def __init__(self, action_client:RobotActionClient, grasp_client:GraspClient, grasp_type:str):
        super().__init__()
        self.object1 = [0.0, 0.45, 0.6, 180.0,45.0,90.0]
        self.object2 = [-0.1, 0.45, 0.6, 180.0,45.0,90.0]
        self.object3 = [0.1, 0.45, 0.6, 180.0,45.0,90.0]

        self.objects = [self.object1,self.object2,self.object3]

        self.grasp_pose = None
        self.is_grasp_ready = False

        self.is_done = False

        self.action_client = action_client
        self.grasp_client = grasp_client

        self.actions_list = []

        self.move_complete = False

        if grasp_type == "capgrasp":
            self.grasp_type = grasp_type
            self.action_client.get_logger().info("Using " + grasp_type + " for grasping!")
        elif grasp_type == "ggcnn":
            self.grasp_type = "default"
            self.action_client.get_logger().info("Using " + grasp_type + " for grasping!")
        elif grasp_type == "default":
            self.grasp_type = grasp_type
            self.action_client.get_logger().info("Using hard-coded value for grasping!")
        else:
            self.grasp_type = "default"
            self.action_client.get_logger().info("Using hard-coded value for grasping!")


        self.no_more_objects = False

    home = State("home", initial=True)
    yolo = State("yolo")
    sample_grasp = State("obtain_grasp_pose")
    move = State("move")
    done = State("done",final=True)

    cycle = (home.to(yolo) |
             yolo.to.itself(cond="not objects_available and not sequence_complete") |
             yolo.to(sample_grasp, cond="objects_available") | 

             sample_grasp.to(move, cond="grasp_received") | 
             move.to(yolo, cond="motion_complete") | 
             yolo.to(done, cond="sequence_complete")
    )

    # transitions
    def on_enter_sample_grasp(self):
        # call ggcnn/capgrasp to get a grasp position
        if self.grasp_type == "capgrasp":
            self.grasp_client.send_request()

            while rclpy.ok():
                rclpy.spin_once(self.grasp_client)
                self.grasp_client.get_logger().info('Waiting for result...')
                if self.grasp_client.future.done():
                    response = self.grasp_client.future.result()
                    pose = response.xyz.tolist()
                    self.grasp_client.get_logger().info(f"grasp pose is {response.xyz.tolist()}")
                    break
            pose.append(180.0)
            pose.append(45.0)
            pose.append(90.0)
        elif self.grasp_type == "ggcnn":
            raise NotImplementedError
        elif self.grasp_type == "default":
            pose = self.objects[0]
        else:
            pose = self.objects[0]
        
        self.action_client.set_target_pose(pose)
        self.actions_list = self.action_client.get_goals()
        
        self.is_grasp_ready = True
        print("Trans: got the grasp pose")

    def on_exit_sample_grasp(self):
        print("Trans: go move")
        self.is_grasp_ready = False

    def on_enter_done(self):
        print("Trans: State machine has reached the final state and is shutting down.")
        self.is_done = True

    def on_enter_move(self):
        print("Trans: moving!")
        for action in self.actions_list:
            self.action_client.send_goal(action)
            while self.action_client.status != GoalStatus.STATUS_SUCCEEDED:
                rclpy.spin_once(self.action_client)
        self.move_complete = True

    def on_exit_move(self):
        self.move_complete = False
        rclpy.spin_once(self.action_client)
        val = self.action_client.get_number_of_objects()
        if val == 0:
            self.no_more_objects = True

    # Conditions
    def objects_available(self):
        # check if num of objects > 0 
        print(f'Cond - Camera: {self.action_client.get_number_of_objects()}')
        rclpy.spin_once(self.action_client)
        val = 0
        val = self.action_client.get_number_of_objects()
        if type(val) != int:
            val = 0

        return val > 0

    
    def grasp_received(self):
        print('Cond: grasp received')
        return self.is_grasp_ready
    
    def motion_complete(self):
        print('Cond: moving complete')
        return self.move_complete

    def sequence_complete(self):
        print("Cond: no more objects")
        return self.no_more_objects
    

def main(args=None):
    rclpy.init(args=args)
    action_client = RobotActionClient()
    grasp_client = GraspClient()
    grasp_type = "capgrasp" # options - "capgrasp", "ggcnn" (NOT IMPLEMENTED), "default"
    sm = ShelfPickingStateMachine(action_client,
                                  grasp_client,
                                  grasp_type)

    graph = DotGraphMachine(sm)

    dot = graph()

    dot.write_png("graph.png")

    while not sm.is_done:
        sm.cycle()

    # object1 = [0.0, 0.45, 0.6, 180.0,45.0,90.0]
    # object2 = [-0.1, 0.45, 0.6, 180.0,45.0,90.0]
    # object3 = [0.1, 0.45, 0.6, 180.0,45.0,90.0]

    # objects = [object1,object2,object3]

    # for obj in objects:
    #     action_client.set_target_pose(obj)
    #     actions = action_client.get_goals()


    #     for action in actions:
    #         action_client.send_goal(action)
    #         while action_client.status != GoalStatus.STATUS_SUCCEEDED:
    #             rclpy.spin_once(action_client)



if __name__ == '__main__':
    main()
