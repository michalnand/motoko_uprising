#ifndef _ROBOT_CONFIG_H_
#define _ROBOT_CONFIG_H_

#include <robot_type.h>


#ifdef ROBOT_TYPE_MOTOKO_UPRINSING_1



#define STEERING_PID_KP                             ((float)0.3)
#define STEERING_PID_KI                             ((float)0.0)
#define STEERING_PID_KD                             ((float)1.8)
#define STEERING_PID_LIMIT                          ((float)10.0)

#define LINE_FOLLOWING_SPEED_RAMP_RISE              ((float)0.002)

#define LINE_FOLLOWING_SPEED_MIN                    ((float)0.4)
#define LINE_FOLLOWING_SPEED_MAX                    ((float)0.8)


#define LINE_SEARCH_TURN_DISTANCE                   ((int)210)
#define LINE_SEARCH_MAX_SPEED                       ((float)0.7)


#define BRICK_AVOID_MAX_SPEED                       ((float)0.7)
#define BRICK_AVOID_TURN_BACK_DISTANCE              ((int)33)
#define BRICK_AVOID_IGNORE_DISTANCE                 ((int)200)

#endif


#ifdef ROBOT_TYPE_MOTOKO_UPRINSING_2



#define STEERING_PID_KP                             ((float)0.3)
#define STEERING_PID_KI                             ((float)0.0)
#define STEERING_PID_KD                             ((float)1.8)
#define STEERING_PID_LIMIT                          ((float)10.0)

#define LINE_FOLLOWING_SPEED_RAMP_RISE              ((float)0.002)

#define LINE_FOLLOWING_SPEED_MIN                    ((float)0.4)
#define LINE_FOLLOWING_SPEED_MAX                    ((float)0.7)


#define LINE_SEARCH_TURN_DISTANCE                   ((int)250)
#define LINE_SEARCH_MAX_SPEED                       ((float)0.7)


#define BRICK_AVOID_MAX_SPEED                       ((float)0.7)
#define BRICK_AVOID_TURN_BACK_DISTANCE              ((int)33)
#define BRICK_AVOID_IGNORE_DISTANCE                 ((int)200)

#endif



#endif
