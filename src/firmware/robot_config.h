#ifndef _ROBOT_CONFIG_H_
#define _ROBOT_CONFIG_H_

#include <robot_type.h>

#ifdef ROBOT_TYPE_MOTOKO_UPRINSING_1

    #define STEERING_PID_KP                             ((float)0.3)
    #define STEERING_PID_KI                             ((float)0.0)
    #define STEERING_PID_KD                             ((float)1.3)
    #define STEERING_PID_LIMIT                          ((float)10.0)

    #define LINE_FOLLOWING_SPEED_RAMP_RISE              ((float)0.002)
    #define LINE_FOLLOWING_FAST_RUN_SPEED_RAMP_RISE     ((float)0.005)

    #define LINE_FOLLOWING_SPEED_MIN                    ((float)0.4)
    #define LINE_FOLLOWING_SPEED_MAX                    ((float)0.8)

    #define LINE_SEARCH_TURN_DISTANCE_RIGHT             ((int)190)
    #define LINE_SEARCH_TURN_DISTANCE_LEFT              ((int)170)
    #define LINE_SEARCH_TURN_DISTANCE_FORWARD           ((int)100)
    #define LINE_SEARCH_MAX_SPEED                       ((float)0.7)

    #define BRICK_AVOID_MAX_SPEED                       ((float)0.7)
    #define BRICK_AVOID_TURN_BACK_DISTANCE              ((int)33)
    #define BRICK_AVOID_IGNORE_DISTANCE                 ((int)200)

    #define BRICK_AVOID_RIGHT_DISTANCE                  ((float)0.92)
    #define BRICK_AVOID_LEFT_DISTANCE                   ((float)0.92)

    #define LINE_MAPPING_STEP                           ((int)20)
    #define FAST_RUN_MAX_DISTANCE                       ((int)2000)

#endif


#ifdef ROBOT_TYPE_MOTOKO_UPRINSING_2

    #define STEERING_PID_KP                             ((float)0.3)
    #define STEERING_PID_KI                             ((float)0.0)
    #define STEERING_PID_KD                             ((float)1.8)
    #define STEERING_PID_LIMIT                          ((float)10.0)

    #define LINE_FOLLOWING_SPEED_RAMP_RISE              ((float)0.0015)
    #define LINE_FOLLOWING_FAST_RUN_SPEED_RAMP_RISE     ((float)0.005)

    #define LINE_FOLLOWING_SPEED_MIN                    ((float)0.4)
    #define LINE_FOLLOWING_SPEED_MAX                    ((float)0.6)

    #define LINE_SEARCH_TURN_DISTANCE_RIGHT             ((int)190)
    #define LINE_SEARCH_TURN_DISTANCE_LEFT              ((int)170)
    #define LINE_SEARCH_TURN_DISTANCE_FORWARD           ((int)100)
    #define LINE_SEARCH_MAX_SPEED                       ((float)0.7)

    #define BRICK_AVOID_MAX_SPEED                       ((float)0.7)
    #define BRICK_AVOID_TURN_BACK_DISTANCE              ((int)38)
    #define BRICK_AVOID_IGNORE_DISTANCE                 ((int)200)

    #define BRICK_AVOID_RIGHT_DISTANCE                 ((float)0.92)
    #define BRICK_AVOID_LEFT_DISTANCE                  ((float)0.92)

    #define LINE_MAPPING_STEP                           ((int)100)
    #define FAST_RUN_MAX_DISTANCE                       ((int)2000)

#endif

#endif
