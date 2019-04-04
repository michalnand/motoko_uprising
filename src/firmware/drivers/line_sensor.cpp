#include <line_sensor.h>
#include <drivers.h>



LineSensor::LineSensor()
{

}

LineSensor::~LineSensor()
{

}





int LineSensor::init()
{
  int init_res = 0;

  sensor_led = 0;
  timer.delay_ms(100);

  for (unsigned int i = 0; i < adc_calibration.size(); i++)
    adc_calibration[i] = adc.read(i);

  sensor_led = 1;
  timer.delay_ms(100);

  for (unsigned int i = 0; i < adc_calibration_k.size(); i++)
    adc_calibration_k[i] =  adc.read(i) - adc_calibration[i];


  for (unsigned int i = 0; i < adc_result.size(); i++)
    adc_result[i] = 0;

  int step   = LINE_SENSOR_STEP;

  weights[0] = -4*step;
  weights[1] = -3*step;
  weights[2] = -2*step;
  weights[3] = -1*step;
  weights[4] =  1*step;
  weights[5] =  2*step;
  weights[6] =  3*step;
  weights[7] =  4*step;

  threshold = LINE_SENSOR_THRESHOLD;

  result.on_line    = false;
  result.line_type  = LINE_TYPE_SINGLE;
  result.left_line_position     = 0;
  result.right_line_position    = 0;
  result.spot_line_position     = 0;

  result_tmp = result;

  m_ready = false;

  timer.add_task(this, LINE_SENSOR_DT, false);
  return init_res;
}

bool LineSensor::ready()
{
  bool res = m_ready;

  __disable_irq();
  if (res)
    m_ready = false;
  __enable_irq();

  return res;
}

int LineSensor::get_max()
{
  return 4*LINE_SENSOR_STEP;
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
        adc_result[i] = 1000 - ((adc.read(i) - adc_calibration[i])*1000)/adc_calibration_k[i];
        if (adc_result[i] < 0)
            adc_result[i] = 0;
    }


    result_tmp.on_line = false;

    int spot_line   = find_spot_pos();
    int left_line   = find_left_line_pos();
    int right_line  = find_right_line_pos();
    int center_line = find_center_line_pos();

    if (spot_line != -1)
    {
        result_tmp.line_type            = LINE_TYPE_SPOT;
        result_tmp.spot_line_position   = weights[spot_line];
        result_tmp.on_line              = true;
    }
    else
    if (center_line != -1)
    {
        result_tmp.line_type            = LINE_TYPE_SINGLE;
        result_tmp.left_line_position   = integrate(center_line);
        result_tmp.right_line_position  = result_tmp.left_line_position;
        result_tmp.on_line              = true;
    }

  /*
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
  */

  result = result_tmp;

  m_ready = true;
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

int LineSensor::find_center_line_pos()
{
    int adc_max = threshold - 1;

    for (unsigned int i = 0; i < LINE_SENSOR_COUNT; i++)
        if (adc_result[i] > threshold)
        if (adc_result[i] > adc_max)
        {
            adc_max = adc_result[i];
            return i;
        }

    return -1;
}

int LineSensor::find_spot_pos()
{
    int kernel[3] = {-1, 2, -1};

    int sum = 0;

    int conv_result_max = 0;
    int result = -1;

    bool on_line = false;
    for (unsigned int i = 0; i < LINE_SENSOR_COUNT; i++)
        if (adc_result[i] > threshold)
            on_line = true;

    if (on_line != true)
        return -1;

    for (unsigned int i = 1; i < (LINE_SENSOR_COUNT-1); i++)
    {
        int conv_result = 0;

        conv_result+= line_sensor.adc_result[i - 1]*kernel[0];
        conv_result+= line_sensor.adc_result[i + 0]*kernel[1];
        conv_result+= line_sensor.adc_result[i + 1]*kernel[2];

        if (conv_result < 0)
            conv_result = -conv_result;

        if (conv_result > conv_result_max)
        {
            conv_result_max = conv_result;
            result = i;
        }

        sum+= conv_result;
    }

    if (sum < 1300)
    {
        return result;
    }


    return -1;
}
