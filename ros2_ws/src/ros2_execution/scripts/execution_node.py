#!/usr/bin/python3

# ===================================== COPYRIGHT ===================================== #
#                                                                                       #
#  IFRA (Intelligent Flexible Robotics and Assembly) Group, CRANFIELD UNIVERSITY        #
#  Created on behalf of the IFRA Group at Cranfield University, United Kingdom          #
#  E-mail: IFRA@cranfield.ac.uk                                                         #
#                                                                                       #
#  Licensed under the Apache-2.0 License.                                               #
#  You may not use this file except in compliance with the License.                     #
#  You may obtain a copy of the License at: http://www.apache.org/licenses/LICENSE-2.0  #
#                                                                                       #
#  Unless required by applicable law or agreed to in writing, software distributed      #
#  under the License is distributed on an "as-is" basis, without warranties or          #
#  conditions of any kind, either express or implied. See the License for the specific  #
#  language governing permissions and limitations under the License.                    #
#                                                                                       #
#  IFRA Group - Cranfield University                                                    #
#  AUTHORS: Mikel Bueno Viso - Mikel.Bueno-Viso@cranfield.ac.uk                         #
#           Seemal Asif      - s.asif@cranfield.ac.uk                                   #
#           Phil Webb        - p.f.webb@cranfield.ac.uk                                 #
#                                                                                       #
#  Date: January, 2023.                                                                 #
#                                                                                       #
# ===================================== COPYRIGHT ===================================== #

# ======= CITE OUR WORK ======= #
# You can cite our work with the following statement:
# (TBD).

# ********** ros2_execution.py ********** #
# This .py script takes the sequence of Robot Triggers defined

# Import required libraries:
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from std_msgs.msg import String
import os
import ast
import time
from ament_index_python.packages import get_package_share_directory
from threading import Thread
# Import ACTIONS:
from ros2_data.action import MoveJ
from ros2_data.action import MoveJs
from ros2_data.action import MoveL
from ros2_data.action import MoveR
from ros2_data.action import MoveXYZW
from ros2_data.action import MoveXYZ
from ros2_data.action import MoveYPR
from ros2_data.action import MoveROT
from ros2_data.action import MoveRP
from ros2_data.action import MoveG
from ros2_grasping.action import Attacher 

# Import MESSAGES:
from ros2_data.msg import JointPose
from ros2_data.msg import JointPoseS

# Import MultiThreadedExecutor:
from rclpy.executors import MultiThreadedExecutor

from std_msgs.msg import Float64MultiArray
import roboticstoolbox as rtb
from spatialmath import SE3
import numpy as np

# Define GLOBAL VARIABLE -> RES:
RES = "null"

# Define CLASSES for EACH ACTION:

# 1.1 - MoveJs:
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
        goal_msg.positionx = GoalXYZWy
        goal_msg.positionx = GoalXYZWz
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
        goal_msg.positionx = GoalXYZy
        goal_msg.positionx = GoalXYZz
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



# ==================================================================================================================================== #
# ==================================================================================================================================== #
# =============================================================== MAIN =============================================================== #
# ==================================================================================================================================== #
# ==================================================================================================================================== #

class State(Node):

    def __init__(self):
        super().__init__("state_manager")
        

        joints = {'joint1':None,
                'joint2':None,
                'joint3':None,
                'joint4':None,
                'joint5':None,
                'joint6':None,
                'joint7':None}

        self.commands = {
                        'action': None,
                        'value' : joints,
                        'speed' :1.0
        }

            # MoveJ or MoveJs, depending on de DOF of the Robot:
        self.MoveJs_CLIENT = MoveJsclient()

        # If parallel gripper: MoveG and attacher plugin activated.
        self.MoveG_CLIENT = MoveGclient()
        self.Attach_Client = ATTACHERclient()
        self.Detach_Client = DetacherPUB()

        self.MoveXYZW_CLIENT = MoveXYZWclient()
        self.MoveXYZ_CLIENT = MoveXYZclient()
        
        self.robot = rtb.models.Panda()
        self.robot.qr = self.robot.qz

        self.block_updates = False

        self.create_subscription(Float64MultiArray, '/panda_action', self.action_callback,10)
        self.create_timer(1,self.process)

    def cartesian_to_joint(self,data):
        x,y,z,r,p,y = data
        rpy = [r, p, y]  # Roll, pitch, yaw angles in radians
        #T = SE3.Trans(x, y, z) * SE3.RPY(rpy)
        T = SE3.Trans(x, y, z) * SE3.OA([0, 0,1], [1, 0, 0])
        joint_config = self.robot.ik_GN(T)
        q = []
        for q_n in joint_config[0]:
            q.append(np.rad2deg(q_n))
        #self.robot.qr = q
        return q



    def action_callback(self, msg):
        # data[0] == 0, do nothing | == 1, MoveJS | == 2, MoveXYZW
        
        if self.block_updates:
            print("Blocking.")
            pass

        data = msg.data
        
        if data[0] == 1:
            q = self.cartesian_to_joint(data[1:])
            print("Received Js commands")
            self.commands['action'] = 'MoveJs'
            self.commands['value']['joint1'] = q[0]
            self.commands['value']['joint2'] = q[1]
            self.commands['value']['joint3'] = q[2]
            self.commands['value']['joint4'] = q[3]
            self.commands['value']['joint5'] = q[4]
            self.commands['value']['joint6'] = q[5]
            self.commands['value']['joint7'] = q[6]
        elif data[0] == 2.0:
            print("Received MoveXYZW commands")
            self.commands['action'] = 'MoveXYZW'
            self.commands['value']['positionx'] = data[1]
            self.commands['value']['positiony'] = data[2]
            self.commands['value']['positionz'] = data[3]
            self.commands['value']['yaw'] = data[4]
            self.commands['value']['pitch'] = data[5]
            self.commands['value']['roll'] = data[6]
        elif data[0] == 3.0:
            print("Received MoveXYZ commands")
            self.commands['action'] = 'MoveXYZ'
            self.commands['value']['positionx'] = data[1]
            self.commands['value']['positiony'] = data[2]
            self.commands['value']['positionz'] = data[3]
        else:
            print("null commands")
            self.commands['action'] = None
            self.commands['value']['joint1'] = None
            self.commands['value']['joint2'] = None
            self.commands['value']['joint3'] = None
            self.commands['value']['joint4'] = None
            self.commands['value']['joint5'] = None
            self.commands['value']['joint6'] = None
            self.commands['value']['joint7'] = None

    def process(self):
        global RES
        trigger = self.commands
        if (trigger['action'] == 'MoveJs'):
            
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
                self.block_updates = True
                print("Waiting for MoveJs Client")
                if (RES != "null"):
                    self.block_updates = False
                    break
            
            print ("Result of MoveJs ACTION CALL is -> { " + RES + " }")
            
            if (RES == "MoveJs:SUCCESS"):
                print("MoveJs ACTION successfully executed.")
                RES = "null"
            else:
                print("MoveJs ACTION failed.")
                print("The program will be closed. Bye!")
                self.get_logger().info("ERROR: Program finished since MoveJs ACTION failed.")

        elif (trigger['action'] == 'MoveXYZW'):
            
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
                print("MoveXYZW ACTION executed.")
                RES = "null"
            else:
                print("MoveXYZW ACTION failed.")
                print("The program will be closed. Bye!")
                self.get_logger().info("ERROR: Program finished since MoveXYZW ACTION failed.")

        elif (trigger['action'] == 'MoveXYZ'):

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
                print("MoveXYZ ACTION executed.")
                RES = "null"
            else:
                print("MoveXYZ ACTION failed.")
                self.get_logger().info("ERROR: Program finished since MoveXYZ ACTION failed.")
                print("The program will be closed. Bye!")

        elif (trigger['action'] == 'Attach'):
            
            print(trigger['value'])

            OBJ = trigger['value']['object']
            EE = trigger['value']['endeffector']
            
            self.Attach_Client.send_goal(OBJ,EE)
            rclpy.spin_once(self.Attach_Client)
            
            print("Object ATTACHED successfully.")

        elif (trigger['action'] == 'Detach'):
            
            print(trigger['value'])

            OBJ = trigger['value']['object']
            
            MSG = String()
            MSG.data = "True"

            t_end = time.time() + 1
            while time.time() < t_end:
                self.Detach_Client.publisher_.publish(MSG) # Publish repeatedly for a second to make sure that the ATTACHER SERVER receives the message.
        
            print("Object DETACHED successfully.")

        elif (trigger['action'] == 'GripperOpen'):

            GP = 0.035
            self.MoveG_CLIENT.send_goal(GP)
            
            while rclpy.ok():
                rclpy.spin_once(self.MoveG_CLIENT)
                if (RES != "null"):
                    break
            
            print ("Result of MoveG ACTION CALL is -> { " + RES + " }")
            
            if (RES == "MoveG:SUCCESS"):
                print("MoveG ACTION executed.")
                RES = "null"
            else:
                print("MoveG ACTION failed.")
                print("The program will be closed. Bye!")
                

        elif (trigger['action'] == 'GripperClose'):

            GP = 0.0
            self.MoveG_CLIENT.send_goal(GP)
            
            while rclpy.ok():
                rclpy.spin_once(self.MoveG_CLIENT)
                if (RES != "null"):
                    break
            
            print ("Result of MoveG ACTION CALL is -> { " + RES + " }")
            
            if (RES == "MoveG:SUCCESS"):
                print("MoveG ACTION executed.")
                RES = "null"
            else:
                print("MoveG ACTION failed.")
                print("The program will be closed. Bye!")

        else:
            self.get_logger().info("Waiting for actions.")


def main(args=None):
    
    # Import global variable RES:
    global RES
    
    # 1. INITIALISE ROS NODE:
    rclpy.init(args=args)

    # Load components --> According to input ROS2 Parameters

    state = State()

    rclpy.spin(state)
    state.destroy_node()
    rclpy.shutdown()

    # executor = MultiThreadedExecutor()

    # executor.add_node(state)

    # spin_thread = Thread(target=executor.spin, daemon=True)
    # spin_thread.start()


    # rate = state.create_rate(10)
    
    # try: 
    #     while rclpy.ok():
    #         # for i in range (1):
    #         #     pose = {'positionx':0.4,
    #         #             'positiony':0.2,
    #         #             'positionz':0.6,
    #         #             'yaw':45.0,
    #         #             'pitch':180.0,
    #         #             'roll':0.0
    #         #             }

    #         #     commands = {'action': 'MoveXYZW',
    #         #                 'value': pose,
    #         #                 'speed' :1.0
    #         #     }

    #         #     trigger = commands
                
    #         state.process()
    #         rate.sleep()




    # except KeyboardInterrupt:
    #     pass

    # finally:
    #     executor.shutdown()
    #     state.destroy_node()
    #     rclpy.shutdown()
    #     spin_thread.join()
        

if __name__ == '__main__':
    main()