#ifndef _DRIVERS_H_
#define _DRIVERS_H_


#include <distance_sensor.h>
#include <fram.h>
#include <i2c.h>
#include <imu.h>
#include <key.h>

#include <line_sensor.h>
#include <mem.h>
#include <terminal.h>
#include <thread.h>

#include <timer.h>


void drivers_init();


extern Terminal                  terminal;
extern Timer                     timer;
extern TI2C<TGPIOB, 7, 6, 10>    i2c;
extern IMU                       imu;


#endif
