#ifndef _CONFIG_H_
#define _CONFIG_H_

#define F_CPU               ((unsigned int)72000000)
#define TIMERS_COUNT        ((unsigned int)16)


#define LED_GPIO        TGPIOB
#define LED_PIN         15


//line sensor parameters
#define LINE_SENSOR_THRESHOLD   ((int)400)
#define LINE_SENSOR_DT          ((unsigned int)4)
#define LINE_SENSOR_STEP        ((int)64)

//imu dt in ms
#define IMU_DT                  ((unsigned int)10)

//encoders parameters
#define PULSES_PER_ROTATION     ((int32_t)180)
#define WHEEL_CIRCUMFERENCE     ((int32_t)88)



//motor controll
#define MOTOR_CONTROLL_DT       LINE_SENSOR_DT

#define MOTOR_CONTROLL_SPEED_MAX         ((float)2000.0)

#define MOTOR_CONTROLL_PID_LEFT_KP    ((float)0.8)
#define MOTOR_CONTROLL_PID_LEFT_KI    ((float)0.09)
#define MOTOR_CONTROLL_PID_LEFT_KD    ((float)1.0)
#define MOTOR_CONTROLL_PID_RIGHT_KP   ((float)0.8)
#define MOTOR_CONTROLL_PID_RIGHT_KI   ((float)0.09)
#define MOTOR_CONTROLL_PID_RIGHT_KD   ((float)1.0)


#endif
