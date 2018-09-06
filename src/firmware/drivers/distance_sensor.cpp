#include "distance_sensor.h"

#include <adc.h>
#include <drivers.h>


DistanceSensor::DistanceSensor()
{
  front_ir_led = 0;
}

DistanceSensor::~DistanceSensor()
{

}

int DistanceSensor::init()
{
  state = 0;
  front_ir_led = 0;

  for (unsigned int i = 0; i < DISTANCE_SENSOR_COUNT; i++)
    adc_res_on[i] = 0;

  for (unsigned int i = 0; i < DISTANCE_SENSOR_COUNT; i++)
    adc_res_off[i] = 0;

  result.left   = DISTANCE_MAX;
  result.front  = DISTANCE_MAX;
  result.right  = DISTANCE_MAX;

  result.front_obstacle_warning = false;
  result.front_obstacle = false;

  timer.add_task(this, 50, false);

  m_ready = false;

  return 0;
}

void DistanceSensor::main()
{
  switch (state)
  {
    case 0:
    {

      adc_res_off[DISTANCE_FRONT] = adc_read(ADC_FRONT);
      adc_res_off[DISTANCE_LEFT]  = adc_read(ADC_LEFT);
      adc_res_off[DISTANCE_RIGHT] = adc_read(ADC_RIGHT);

      front_ir_led = 1;

      state = 1;
    }
    break;

    case 1:
    {
      adc_res_on[DISTANCE_FRONT]  = adc_read(ADC_FRONT);
      adc_res_on[DISTANCE_LEFT]   = adc_read(ADC_LEFT);
      adc_res_on[DISTANCE_RIGHT]  = adc_read(ADC_RIGHT);

      front_ir_led = 0;

      filter(&result.front, DISTANCE_FRONT);
      filter(&result.left, DISTANCE_LEFT);
      filter(&result.right, DISTANCE_RIGHT);

      if (result.front < 240)
        result.front_obstacle_warning = true;
      else
        result.front_obstacle_warning = false;

      if (result.front < 210)
        result.front_obstacle = true;
      else
        result.front_obstacle = false;

      state = 0;
      m_ready = true;
    }
    break;
  }
}

void DistanceSensor::filter(int *res_prev, unsigned int sensor_id)
{
  int dif = adc_res_off[sensor_id] - adc_res_on[sensor_id];
  if (dif < 0)
    dif = 0;

  int k = 3;
  *res_prev = (k* (*res_prev) + (DISTANCE_MAX*(4096 - dif))/4096)/(1+k);
}


bool DistanceSensor::ready()
{
  bool res = m_ready;

  disable_interrupt();
  if (res)
    m_ready = false;
  enable_interrupt();

  return res;
}
