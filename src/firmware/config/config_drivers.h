#ifndef _CONFIG_DRIVERS_H_
#define _CONFIG_DRIVERS_H_

#include <config_type.h>


#ifdef ROBOT_TYPE_MOTOKO_UPRINSING_1

//line sensor parameters
#define LINE_SENSOR_THRESHOLD   ((int)300)
//#define LINE_SENSOR_THRESHOLD   ((int)400)
//#define LINE_SENSOR_THRESHOLD   ((int)500)
#define LINE_SENSOR_DT          ((unsigned int)4)
#define LINE_SENSOR_STEP        ((int)128)


//distance sensor parameters
#define DISTANCE_DT             ((unsigned int)5)
#define DISTANCE_WARNING        ((float)0.85)
#define DISTANCE_OBSTACLE       ((float)0.7)


//imu dt in ms
#define IMU_DT                  ((unsigned int)10)

//encoders parameters
#define PULSES_PER_ROTATION     ((int32_t)180)
#define WHEEL_CIRCUMFERENCE     ((int32_t)88)



//motor controll
#define MOTOR_CONTROLL_DT       LINE_SENSOR_DT

#define MOTOR_CONTROLL_SPEED_MAX         ((float)2000.0)


#define MOTOR_CONTROLL_PID_LEFT_KP    ((float)1.1)
#define MOTOR_CONTROLL_PID_LEFT_KI    ((float)0.09)
#define MOTOR_CONTROLL_PID_LEFT_KD    ((float)1.0)
#define MOTOR_CONTROLL_PID_RIGHT_KP   ((float)1.1)
#define MOTOR_CONTROLL_PID_RIGHT_KI   ((float)0.09)
#define MOTOR_CONTROLL_PID_RIGHT_KD   ((float)1.0)


#endif





#ifdef ROBOT_TYPE_MOTOKO_UPRINSING_2

//line sensor parameters
#define LINE_SENSOR_THRESHOLD   ((int)300)
//#define LINE_SENSOR_THRESHOLD   ((int)400)
//#define LINE_SENSOR_THRESHOLD   ((int)500)
#define LINE_SENSOR_DT          ((unsigned int)4)
#define LINE_SENSOR_STEP        ((int)64)


//distance sensor parameters
#define DISTANCE_DT             ((unsigned int)5)
#define DISTANCE_WARNING        ((float)0.7)
#define DISTANCE_OBSTACLE       ((float)0.65)

//imu dt in ms
#define IMU_DT                  ((unsigned int)10)

//encoders parameters
#define PULSES_PER_ROTATION     ((int32_t)180)
#define WHEEL_CIRCUMFERENCE     ((int32_t)88)



//motor controll
#define MOTOR_CONTROLL_DT       LINE_SENSOR_DT

#define MOTOR_CONTROLL_SPEED_MAX         ((float)2000.0)


#define MOTOR_CONTROLL_PID_LEFT_KP    ((float)1.1)
#define MOTOR_CONTROLL_PID_LEFT_KI    ((float)0.09)
#define MOTOR_CONTROLL_PID_LEFT_KD    ((float)1.0)
#define MOTOR_CONTROLL_PID_RIGHT_KP   ((float)1.1)
#define MOTOR_CONTROLL_PID_RIGHT_KI   ((float)0.09)
#define MOTOR_CONTROLL_PID_RIGHT_KD   ((float)1.0)


#endif

#endif
