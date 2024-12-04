import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
import cv2
import numpy as np
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
from std_msgs.msg import Float32, Float64MultiArray
from std_msgs.msg import String
from ros2_data.action import MoveXYZW
from ros2_data.action import MoveXYZ
from ros2_data.action import MoveG
from ros2_data.action import MoveJs
from ros2_data.msg import JointPoseS
from ros2_grasping.action import Attacher 
import ast
import time
# from gazebo_msgs.msg import ModelStates
from geometry_msgs.msg import Point, Pose, Quaternion, Twist
from rclpy.executors import MultiThreadedExecutor
import os

RES = "null"

class Controller(Node):

    def __init__(self):
        super().__init__("controller")
        self.subscription = self.create_subscription(Float64MultiArray, "/robotaction", self.callback, 10)
        self.subscription

        self.MoveG_CLIENT = MoveGclient()
        self.Attach_Client = ATTACHERclient()
        self.Detach_Client = DetacherPUB()

        self.MoveXYZW_CLIENT = MoveXYZWclient()
        self.MoveXYZ_CLIENT = MoveXYZclient()
        self.MoveJs_CLIENT = MoveJsclient()

        self.nodeLOG = rclpy.create_node('node_LOG')

    def create_trigger(self, input):

        if input[0] == 0.0: 

            pose = {'positionx':input[1],
                    'positiony':input[2],
                    'positionz':input[3],
                    'yaw':input[4],
                    'pitch':input[5],
                    'roll':input[6],
            }

            commands = {
                        'action': "MoveXYZW",
                        'value' : pose,
                        'speed' :input[7]
            }

        elif input[0] == 1.0:
            commands = {"action": "GripperOpen"}
        elif input[0] == 2.0: 
            commands = {"action": "GripperClose"}
        elif input[0] == 3.0:
            commands = {'action': 'Attach', 
                        'value': {'object': 'sugar3', 'endeffector': 'end_effector_frame'}}
        elif input[0] == 4.0:
            commands = {'action': 'Detach', 'value': {'object': 'sugar3'}}
        elif input[0] == 5.0:
            joints = {'joint1':input[1],
                    'joint2':input[2],
                    'joint3':input[3],
                    'joint4':input[4],
                    'joint5':input[5],
                    'joint6':input[6],
                    'joint7':input[7]}

            commands = {
                        'action': "MoveJs",
                        'value' : joints,
                        'speed' :input[8]
            }

        return commands

    def callback(self, msg):
        global RES
        
        # Log number of steps:
        self.nodeLOG.get_logger().info("Number of steps -> " + str(1))
        time.sleep(1)

        data = msg.data

        print(f"Received message: {data}")

        trigger = self.create_trigger(data) 
        i = 0

        # ================================= 4. SEQUENCE ================================= #
        if (trigger['action'] == 'MoveXYZW'): 
            
            print("")
            print("STEP NUMBER " + str(i) + " -> MoveXYZW:")
            print(trigger['value'])

            # Joint SPEED:
            JointSPEED = trigger['speed']
            if (JointSPEED <= 0 or JointSPEED > 1):
                print ("Joint speed -> " + str(JointSPEED) + " not valid. Must be (0,1]. Assigned: 0.01")
                JointSPEED = 0.01
            else:
                print("Joint speed -> " + str(JointSPEED))

            positionx = trigger['value']['positionx']
            positiony = trigger['value']['positiony']
            positionz = trigger['value']['positionz']
            yaw = trigger['value']['yaw']
            pitch = trigger['value']['pitch']
            roll = trigger['value']['roll']
            
            self.MoveXYZW_CLIENT.send_goal(positionx,positiony,positionz,yaw,pitch,roll, JointSPEED)
            
            while rclpy.ok():
                rclpy.spin_once(self.MoveXYZW_CLIENT)
                if (RES != "null"):
                    break
            
            print ("Result of MoveXYZW ACTION CALL is -> { " + RES + " }")
            
            if (RES == "MoveXYZW:SUCCESS"):
                print("MoveXYZW ACTION in step number -> " + str(i) + " successfully executed.")
                RES = "null"
            else:
                print("MoveXYZW ACTION in step number -> " + str(i) + " failed.")
                print("The program will be closed. Bye!")
                self.nodeLOG.get_logger().info("ERROR: Program finished since MoveXYZW ACTION in step number -> " + str(i) + " failed.")

        elif (trigger['action'] == 'MoveXYZ'):
            
            print("")
            print("STEP NUMBER " + str(i) + " -> MoveXYZ:")
            print(trigger['value'])

            # Joint SPEED:
            JointSPEED = trigger['speed']
            if (JointSPEED <= 0 or JointSPEED > 1):
                print ("Joint speed -> " + str(JointSPEED) + " not valid. Must be (0,1]. Assigned: 0.01")
                JointSPEED = 0.01
            else:
                print("Joint speed -> " + str(JointSPEED))

            positionx = trigger['value']['positionx']
            positiony = trigger['value']['positiony']
            positionz = trigger['value']['positionz']
            self.MoveXYZ_CLIENT.send_goal(positionx,positiony,positionz, JointSPEED)
            
            while rclpy.ok():
                rclpy.spin_once(self.MoveXYZ_CLIENT)
                if (RES != "null"):
                    break
            
            print ("Result of MoveXYZ ACTION CALL is -> { " + RES + " }")
            
            if (RES == "MoveXYZ:SUCCESS"):
                print("MoveXYZ ACTION in step number -> " + str(i) + " successfully executed.")
                RES = "null"
            else:
                print("MoveXYZ ACTION in step number -> " + str(i) + " failed.")
                self.nodeLOG.get_logger().info("ERROR: Program finished since MoveXYZ ACTION in step number -> " + str(i) + " failed.")
                print("The program will be closed. Bye!")

        elif (trigger['action'] == 'MoveJs'):
                    
            print("")
            print("STEP NUMBER " + str(i) + " -> MoveJs:")
            print(trigger['value'])

            # Joint SPEED:
            JointSPEED = trigger['speed']
            if (JointSPEED <= 0 or JointSPEED > 1):
                print ("Joint speed -> " + str(JointSPEED) + " not valid. Must be (0,1]. Assigned: 0.01")
                JointSPEED = 0.01
            else:
                print("Joint speed -> " + str(JointSPEED))

            JPS = JointPoseS()
            JPS.joint1 = trigger['value']['joint1']
            JPS.joint2 = trigger['value']['joint2']
            JPS.joint3 = trigger['value']['joint3']
            JPS.joint4 = trigger['value']['joint4']
            JPS.joint5 = trigger['value']['joint5']
            JPS.joint6 = trigger['value']['joint6']
            JPS.joint7 = trigger['value']['joint7']
            self.MoveJs_CLIENT.send_goal(JPS, JointSPEED)

            while rclpy.ok():
                rclpy.spin_once(self.MoveJs_CLIENT)
                if (RES != "null"):
                    break

            print ("Result of MoveJs ACTION CALL is -> { " + RES + " }")
            
            if (RES == "MoveJs:SUCCESS"):
                print("MoveJs ACTION in step number -> " + str(i) + " successfully executed.")
                RES = "null"
            else:
                print("MoveJs ACTION in step number -> " + str(i) + " failed.")
                print("The program will be closed. Bye!")

        elif (trigger['action'] == 'Attach'):
            
            print("")
            print("STEP NUMBER " + str(i) + " -> ATTACH OBJECT:")
            print(trigger['value'])

            OBJ = trigger['value']['object']
            EE = trigger['value']['endeffector']
            
            self.Attach_Client.send_goal(OBJ,EE)
            rclpy.spin_once(self.Attach_Client)
            
            print("Object ATTACHED successfully.")

        elif (trigger['action'] == 'Detach'):
            
            print("")
            print("STEP NUMBER " + str(i) + " -> DETACH OBJECT:")
            print(trigger['value'])

            OBJ = trigger['value']['object']
            
            MSG = String()
            MSG.data = "True"

            t_end = time.time() + 1
            while time.time() < t_end:
                self.Detach_Client.publisher_.publish(MSG) # Publish repeatedly for a second to make sure that the ATTACHER SERVER receives the message.
        
            print("Object DETACHED successfully.")

        elif (trigger['action'] == 'GripperOpen'):
            
            print("")
            print("STEP NUMBER " + str(i) + " -> GripperOpen (MoveG).")

            GP = 0.04
            self.MoveG_CLIENT.send_goal(GP)
            
            while rclpy.ok():
                rclpy.spin_once(self.MoveG_CLIENT)
                if (RES != "null"):
                    break
            
            print ("Result of MoveG ACTION CALL is -> { " + RES + " }")
            
            if (RES == "MoveG:SUCCESS"):
                print("MoveG ACTION in step number -> " + str(i) + " successfully executed.")
                RES = "null"
            else:
                print("MoveG ACTION in step number -> " + str(i) + " failed.")
                print("The program will be closed. Bye!")

        elif (trigger['action'] == 'GripperClose'):
            
            print("")
            print("STEP NUMBER " + str(i) + " -> GripperClose (MoveG).")

            GP = 0.02
            self.MoveG_CLIENT.send_goal(GP)
            
            while rclpy.ok():
                rclpy.spin_once(self.MoveG_CLIENT)
                if (RES != "null"):
                    break
            
            print("Result of MoveG ACTION CALL is -> { " + RES + " }")
            
            if (RES == "MoveG:SUCCESS"):
                print("MoveG ACTION in step number -> " + str(i) + " successfully executed.")
                RES = "null"
            else:
                print("MoveG ACTION in step number -> " + str(i) + " failed.")
                print("The program will be closed. Bye!")

        else:
            print("Step number " + str(i) + " -> Action type not identified. Please check.")
            print("The program will be closed. Bye!")
            self.nodeLOG.get_logger().info("ERROR: Program finished since ACTION NAME in step number -> " + str(i) + " was not identified.")

            #time.sleep(1)

        print("")
        print("SEQUENCE EXECUTION FINISHED!")
        # print("Program will be closed. Bye!")
        self.nodeLOG.get_logger().info("SUCESS: Program execution sucessfully finished.")
        # nodeLOG.destroy_node()
        # print("Closing... BYE!")
        time.sleep(1)


# 4. MoveXYZW:
class MoveXYZWclient(Node):
    
    def __init__(self):
        # 1. Initialise node:
        super().__init__('MoveXYZW_client')
        self._action_client = ActionClient(self, MoveXYZW, 'MoveXYZW')
        # 2. Wait for MoveXYZW server to be available:
        print ("Waiting for MoveXYZW action server to be available...")
        self._action_client.wait_for_server()
        print ("MoveXYZW ACTION SERVER detected.")
    
    def send_goal(self, GoalXYZWx, GoalXYZWy, GoalXYZWz, GoalXYZWyaw, GoalXYZWpitch, GoalXYZWroll, JointSPEED):
        # 1. Assign variables:
        goal_msg = MoveXYZW.Goal()
        goal_msg.positionx = GoalXYZWx
        goal_msg.positiony = GoalXYZWy
        goal_msg.positionz = GoalXYZWz
        goal_msg.yaw = GoalXYZWyaw
        goal_msg.pitch = GoalXYZWpitch
        goal_msg.roll = GoalXYZWroll
        goal_msg.speed = JointSPEED
        # 2. ACTION CALL:
        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return
        self.get_logger().info('Goal accepted :)')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)
    
    def get_result_callback(self, future):
        global RES
        # 1. Assign RESULT variable:
        result = future.result().result
        RES = result.result
        # 2. Print RESULT:
        print ("MoveXYZW ACTION CALL finished.")     

    def feedback_callback(self, feedback_msg):
        # 1. Assign FEEDBACK variable:
        feedback = feedback_msg.feedback
        # NO FEEDBACK NEEDED IN MoveXYZW ACTION CALL.

# 5. MoveXYZ:
class MoveXYZclient(Node):
    
    def __init__(self):
        # 1. Initialise node:
        super().__init__('MoveXYZ_client')
        self._action_client = ActionClient(self, MoveXYZ, 'MoveXYZ')
        # 2. Wait for MoveXYZ server to be available:
        print ("Waiting for MoveXYZ action server to be available...")
        self._action_client.wait_for_server()
        print ("MoveXYZ ACTION SERVER detected.")
    
    def send_goal(self, GoalXYZx, GoalXYZy, GoalXYZz, JointSPEED):
        # 1. Assign variables:
        goal_msg = MoveXYZ.Goal()
        goal_msg.positionx = GoalXYZx
        goal_msg.positiony = GoalXYZy
        goal_msg.positionz = GoalXYZz
        goal_msg.speed = JointSPEED         
        # 2. ACTION CALL:
        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return
        self.get_logger().info('Goal accepted :)')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)
    
    def get_result_callback(self, future):
        global RES
        # 1. Assign RESULT variable:
        result = future.result().result
        RES = result.result
        # 2. Print RESULT:
        print ("MoveXYZ ACTION CALL finished.")    

    def feedback_callback(self, feedback_msg):
        # 1. Assign FEEDBACK variable:
        feedback = feedback_msg.feedback
        # NO FEEDBACK NEEDED IN MoveXYZ ACTION CALL.

# 9. MoveG:
class MoveGclient(Node):
    
    def __init__(self):
        # 1. Initialise node:
        super().__init__('MoveG_client')
        self._action_client = ActionClient(self, MoveG, 'MoveG')
        # 2. Wait for MoveG server to be available:
        print ("Waiting for MoveG action server to be available...")
        self._action_client.wait_for_server()
        print ("MoveG ACTION SERVER detected.")
    
    def send_goal(self, GP):
        # 1. Assign variables:
        goal_msg = MoveG.Goal()
        goal_msg.goal = GP
        # 2. ACTION CALL:
        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return
        self.get_logger().info('Goal accepted :)')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)
    
    def get_result_callback(self, future):
        global RES
        # 1. Assign RESULT variable:
        result = future.result().result
        RES = result.result
        # 2. Print RESULT:
        print ("MoveG ACTION CALL finished.")

    def feedback_callback(self, feedback_msg):
        # 1. Assign FEEDBACK variable:
        feedback = feedback_msg.feedback
        # NO FEEDBACK NEEDED IN MoveG ACTION CALL.

# 11. ATTACHER - Action Client:
class ATTACHERclient(Node):
    
    def __init__(self):
        # 1. Initialise node:
        super().__init__('Attacher_client')
        self._action_client = ActionClient(self, Attacher, 'Attacher')
        # 2. Wait for ATTACHER server to be available:
        print ("Waiting for ATTACHER action server to be available...")
        self._action_client.wait_for_server()
        print ("Attacher ACTION SERVER detected.")
    
    def send_goal(self, object, endeffector):
        # 1. Assign variables:
        goal_msg = Attacher.Goal()
        goal_msg.object = object
        goal_msg.endeffector = endeffector
        # 2. ACTION CALL:
        self._send_goal_future = self._action_client.send_goal_async(goal_msg)

# 12. DETACHER - Publihser:
class DetacherPUB(Node):
    
    def __init__(self):
        # Declare NODE:
        super().__init__("ros2_PUBLISHER")
        # Declare PUBLISHER:
        self.publisher_ = self.create_publisher(String, "ros2_Detach", 5) #(msgType, TopicName, QueueSize)

class MoveJsclient(Node):
    
    def __init__(self):
        # 1. Initialise node:
        super().__init__('MoveJs_client')
        self._action_client = ActionClient(self, MoveJs, 'MoveJs')
        # 2. Wait for MoveJs server to be available:
        print ("Waiting for MoveJs action server to be available...")
        self._action_client.wait_for_server()
        print ("MoveJs ACTION SERVER detected.")
    
    def send_goal(self, GoalJPS, JointSPEED):
        # 1. Assign variables:
        goal_msg = MoveJs.Goal()
        goal_msg.goal = GoalJPS
        goal_msg.speed = JointSPEED
        # 2. ACTION CALL:
        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return
        self.get_logger().info('Goal accepted :)')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)
    
    def get_result_callback(self, future):
        global RES
        # 1. Assign RESULT variable:
        result = future.result().result
        RES = result.result
        # 2. Print RESULT:
        print ("MoveJs ACTION CALL finished.") 

    def feedback_callback(self, feedback_msg):
        # 1. Assign FEEDBACK variable:
        feedback = feedback_msg.feedback
        # NO FEEDBACK NEEDED IN MoveJs ACTION CALL.


def main(args=None):

    rclpy.init(args=args)

    controller = Controller()

    rclpy.spin(controller)

    rclpy.shutdown()

if __name__ == '__main__':
    main()

