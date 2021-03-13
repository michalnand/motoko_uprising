#ifndef _SENSORS_CONFIG_H_
#define _SENSORS_CONFIG_H_


//IMU config
#define IMU_SINGLE_AXIS_MODE            (true)
#define IMU_DT                          ((uint32_t)10)
#define IMU_DPS                         ((int32_t)410)


//Line sensor config
#define LINE_SENSOR_DT                  ((uint32_t)5)
#define LINE_SENSOR_STEP                ((int32_t)128)
#define LINE_SENSOR_THRESHOLD           ((int32_t)300) 


//Distance sensor config
#define DISTANCE_SENSOR_DT              ((uint32_t)1)
#define DISTANCE_SENSOR_WARNING         ((float)0.5)
#define DISTANCE_SENSOR_OBSTACLE        ((float)0.25)


//Encoder sensor config
#define ENCODER_SENSOR_PULSES_PER_ROTATION             ((int32_t)180)
#define ENCODER_SENSOR_WHEEL_CIRCUMFERENCE             ((int32_t)88)


//motor controll config
#define MOTOR_CONTROLL_DT                               LINE_SENSOR_DT
#define MOTOR_CONTROLL_PID_KP                           ((float)1.3)
#define MOTOR_CONTROLL_PID_KI                           ((float)0.15)
#define MOTOR_CONTROLL_PID_KD                           ((float)1.5)


#endif
