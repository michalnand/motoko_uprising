#ifndef _DISTANCE_SENSOR_H_
#define _DISTANCE_SENSOR_H_

#include <drivers.h>
#include <tgpio.h>

#define DISTANCE_SENSOR_COUNT   ((unsigned int)3)

#define DISTANCE_FRONT    ((unsigned int)0)
#define DISTANCE_LEFT     ((unsigned int)1)
#define DISTANCE_RIGHT    ((unsigned int)2)

#define DISTANCE_MAX      ((int)256)

struct sDistanceSensor
{
  int left, front, right;
  bool front_obstacle_warning, front_obstacle;
};

class DistanceSensor
{
  public:
    sDistanceSensor result;

  protected:
    TGpio<TGPIOC, 13, GPIO_MODE_OUT> front_ir_led;        //front IR led
  //  TGpio<TGPIOC, 2, GPIO_MODE_OUT> front_ir_led;        //front IR led

    TGpio<TGPIOB, 0, GPIO_MODE_AN> sensor_in_0; //front as ADC input
    TGpio<TGPIOB, 1, GPIO_MODE_AN> sensor_in_1; //left as ADC input
    TGpio<TGPIOC, 0, GPIO_MODE_AN> sensor_in_2; //right as ADC input

    unsigned int state;
    int adc_res_on[DISTANCE_SENSOR_COUNT];
    int adc_res_off[DISTANCE_SENSOR_COUNT];

  public:
    DistanceSensor();
    ~DistanceSensor();

    int init();
    void read();

  private:
    void filter(int *res_prev, unsigned int sensor_id);

};


#endif
