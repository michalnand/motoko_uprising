#ifndef _ROBOT_CONFIG_H_
#define _ROBOT_CONFIG_H_


#define IMU_DT      ((unsigned int)10)


#define LINE_SENSOR_THRESHOLD   ((int)400)
#define LINE_SENSOR_DT          ((unsigned int)4)
#define LINE_SENSOR_STEP        ((int)64)





#define MOTOR_CONTROLL_DT       LINE_SENSOR_DT

#define MOTOR_CONTROLL_SPEED_MAX         ((int)255)

#define MOTOR_CONTROLL_PID_LEFT_KP    ((float)0.8)
#define MOTOR_CONTROLL_PID_LEFT_KI    ((float)0.09)
#define MOTOR_CONTROLL_PID_LEFT_KD    ((float)1.0)
#define MOTOR_CONTROLL_PID_RIGHT_KP   ((float)0.8)
#define MOTOR_CONTROLL_PID_RIGHT_KI   ((float)0.09)
#define MOTOR_CONTROLL_PID_RIGHT_KD   ((float)1.0)




#endif
