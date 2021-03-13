#ifndef _ROBOT_CONFIG_H_
#define _ROBOT_CONFIG_H_



#define MOVEMENT_FORWARD_POSITION_PID_KP         ((float)0.01)
#define MOVEMENT_FORWARD_POSITION_PID_KI         ((float)0.0)
#define MOVEMENT_FORWARD_POSITION_PID_KD         ((float)0.03)
#define MOVEMENT_FORWARD_POSITION_PID_RANGE      ((float)10.0)

#define MOVEMENT_FORWARD_STEERING_PID_KP         ((float)0.001)
#define MOVEMENT_FORWARD_STEERING_PID_KI         ((float)0.0)
#define MOVEMENT_FORWARD_STEERING_PID_KD         ((float)0.001)
#define MOVEMENT_FORWARD_STEERING_PID_RANGE      ((float)2.0)


#define MOVEMENT_FORWARD_RAMP_UP        ((float)0.008)
#define MOVEMENT_FORWARD_RAMP_DOWN      ((float)0.05)
#define MOVEMENT_FORWARD_SPEED          ((float)0.7)

#define MOVEMENT_BACKWARD_RAMP_UP       ((float)0.005)
#define MOVEMENT_BACKWARD_RAMP_DOWN     ((float)0.005)
#define MOVEMENT_BACKWARD_SPEED         ((float)0.7)


#define MOVEMENT_TURN_RAMP_UP        ((float)0.01)
#define MOVEMENT_TURN_RAMP_DOWN      ((float)0.2)
#define MOVEMENT_TURN_SPEED          ((float)0.7)


#endif
