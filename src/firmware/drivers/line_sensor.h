#ifndef _LINE_SENSOR_H_
#define _LINE_SENSOR_H_

#include <tgpio.h>

#define LINE_SENSOR_COUNT   ((unsigned int)8)
#define LINE_TYPE_SINGLE    ((unsigned int)1)
#define LINE_TYPE_DOUBLE    ((unsigned int)2)

struct sLineSensor
{
  unsigned char on_line, line_type;
  int left_line_position, right_line_position;
};


class LineSensor
{
  protected:
    TGpio<TGPIOA, 8, GPIO_MODE_OUT> sensor_led;        //sensor white led


    int threshold;

    bool new_data_flag;

  public:
    int weights[LINE_SENSOR_COUNT];

    int adc_calibration[LINE_SENSOR_COUNT];
    int adc_calibration_k[LINE_SENSOR_COUNT];

    int adc_result[LINE_SENSOR_COUNT];

  private:
    //line sensors
    TGpio<TGPIOA, 0, GPIO_MODE_AN> sensor_in_0;
    TGpio<TGPIOA, 1, GPIO_MODE_AN> sensor_in_1;
    TGpio<TGPIOA, 2, GPIO_MODE_AN> sensor_in_2;
    TGpio<TGPIOA, 3, GPIO_MODE_AN> sensor_in_3;
    TGpio<TGPIOA, 4, GPIO_MODE_AN> sensor_in_4;
    TGpio<TGPIOA, 5, GPIO_MODE_AN> sensor_in_5;
    TGpio<TGPIOA, 6, GPIO_MODE_AN> sensor_in_6;
    TGpio<TGPIOA, 7, GPIO_MODE_AN> sensor_in_7;


  public:
    sLineSensor result;

  public:
    LineSensor();
    ~LineSensor();

    int init();

    void on();
    void off();

    bool new_data();

    int get_max();
    int get_min();

    void main();

  protected:
    int integrate(unsigned int center);

    int find_left_line_pos();
    int find_right_line_pos();

};

extern LineSensor line_sensor;


#endif
