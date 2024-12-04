from statemachine import State, StateMachine
import time
from statemachine.contrib.diagram import DotGraphMachine

class ShelfPickingStateMachine(StateMachine):

    def __init__(self):
        super().__init__()
        self.object1 = [0.0, 0.45, 0.6, 180.0,45.0,90.0]
        self.object2 = [-0.1, 0.45, 0.6, 180.0,45.0,90.0]
        self.object3 = [0.1, 0.45, 0.6, 180.0,45.0,90.0]

        self.objects = [self.object1,self.object2,self.object3]

        self.grasp_pose = None
        self.is_grasp_ready = False

        self.is_done = False

    home = State("home", initial=True)
    sample_grasp = State("obtain_grasp_pose")
    move = State("move")
    done = State("done",final=True)

    cycle = (home.to(sample_grasp, cond="objects_available") | 
             sample_grasp.to(move, cond="grasp_received") | 
             move.to(home, cond="motion_complete") | 
             home.to(done, unless="objects_available")
    )

    # transitions 
    def on_enter_sample_grasp(self):
        # call ggcnn/capgrasp to get a grasp position
        self.grasp_pose = self.objects.pop()
        self.is_grasp_ready = True
        print("Trans: got the grasp pose")
        # set the new target pose

    def on_exit_sample_grasp(self):
        print("Trans: go move")
        self.is_grasp_ready = False

    def on_enter_done(self):
        print("Trans: State machine has reached the final state and is shutting down.")
        self.is_done = True


    def on_enter_move(self):
        # call the robot action stuff
        time.sleep(2)
        print("Trans: moving!")

    # Conditions
    def objects_available(self):
        # check if num of objects > 0 
        print(f'Cond: objects are available. only {len(self.objects)} left.')
        

        return len(self.objects) > 0

    
    def grasp_received(self):
        #return self.is_grasp_ready
        print('Cond: rasp received')
        return True
    
    def motion_complete(self):
        print('Cond: moving complete')
        return True


sm = ShelfPickingStateMachine()

graph = DotGraphMachine(sm)

dot = graph()

dot.write_png("graph.png")

# Simulate state transitions

while not sm.is_done:  # Loop until final state    
    print(f"Current state: {sm.current_state}")
    sm.cycle()
    #print(f"Transitioned to state: {sm.current_state}")

