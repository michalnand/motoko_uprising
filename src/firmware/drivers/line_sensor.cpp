#include "line_sensor.h"

#include <adc.h>


LineSensor::LineSensor()
{

}

LineSensor::~LineSensor()
{

}


int LineSensor::init()
{
  /*
  int init_res = 0;

  sensor_led = 0;
  timer.delay_ms(100);

  adc_init();
  timer.delay_ms(100);

  for (unsigned int i = 0; i < LINE_SENSOR_COUNT; i++)
    adc_calibration[i] = adc_read(i);

  sensor_led = 1;
  timer.delay_ms(100);

  for (unsigned int i = 0; i < LINE_SENSOR_COUNT; i++)
    adc_calibration_k[i] =  adc_read(i) - adc_calibration[i];


  for (unsigned int i = 0; i < LINE_SENSOR_COUNT; i++)
    adc_result[i] = 0;



  for (unsigned int i = 0; i < LINE_SENSOR_COUNT; i++)
    weights[i] = config.line_sensor_config.weights[i];

  threshold = config.line_sensor_config.threshold;

  new_data_flag = false;

  timer.add_task(this, config.line_sensor_config.dt, false);
  return init_res;
  */

 return 0;
}

bool LineSensor::new_data()
{
  bool res = false;
  if (new_data_flag)
  {
    res = true;
    new_data_flag = false;
  }

  return res;
}

int LineSensor::get_max()
{
  return 256;
}

int LineSensor::get_min()
{
  return -get_max();
}

void LineSensor::on()
{
  sensor_led = 1;
}

void LineSensor::off()
{
  sensor_led = 0;
}

void LineSensor::main()
{
  for (unsigned int i = 0; i < LINE_SENSOR_COUNT; i++)
  {
    adc_result[i] = 1000-((adc_read(i) - adc_calibration[i])*1000)/adc_calibration_k[i];
    if (adc_result[i] < 0)
      adc_result[i] = 0;
  }

  sLineSensor result_tmp;

  result_tmp.on_line = false;

  int left_line  = find_left_line_pos();
  int right_line = find_right_line_pos();

  //check if robot on line
  if ((left_line != -1) && (right_line != -1))
  {
    result_tmp.line_type = LINE_TYPE_SINGLE;

    int dist = left_line - right_line;
    if (dist < 0)
      dist = -dist;

    //only single line
    if (dist <= 1)
    {
      int center = (left_line + right_line)/2;
      result_tmp.left_line_position   = integrate(center);
      result_tmp.right_line_position  = result_tmp.left_line_position;
      result_tmp.line_type = LINE_TYPE_SINGLE;
    }
    //splitted line
    else
    {
      result_tmp.left_line_position   = integrate(left_line);
      result_tmp.right_line_position  = integrate(right_line);
      result_tmp.line_type = LINE_TYPE_DOUBLE;
    }

    result_tmp.on_line = true;
  }

  result = result_tmp;

  new_data_flag = true;
}


int LineSensor::integrate(unsigned int center)
{
  int middle  = weights[center]*adc_result[center];
  int sum     = adc_result[center];

  int int_result = middle;

  if (center > 0)
  {
    int_result+= weights[center-1]*adc_result[center-1];
    sum+= adc_result[center-1];
  }
  else
  {
    int_result+= middle;
    sum+= adc_result[center];
  }

  if (center < (LINE_SENSOR_COUNT-1))
  {
    int_result+= weights[center+1]*adc_result[center+1];
    sum+= adc_result[center+1];
  }
  else
  {
    int_result+= middle;
    sum+= adc_result[center];
  }

  int_result = int_result/sum;

  return int_result;
}

int LineSensor::find_left_line_pos()
{
  for (int i = ((int)LINE_SENSOR_COUNT-1); i >= 0; i--)
    if (adc_result[i] > threshold)
      return i;

  return -1;
}

int LineSensor::find_right_line_pos()
{
  for (int i = 0; i < (int)LINE_SENSOR_COUNT; i++)
    if (adc_result[i] > threshold)
      return i;

  return -1;
}
