#ifndef _LINE_SENSOR_H_
#define _LINE_SENSOR_H_

#include <gpio.h>
#include <thread.h>
#include <array.h>
#include <config.h>


#define LINE_SENSOR_COUNT   ((unsigned int)8)
#define LINE_TYPE_SINGLE    ((unsigned int)1)
#define LINE_TYPE_DOUBLE    ((unsigned int)2)
#define LINE_TYPE_SPOT      ((unsigned int)3)

struct sLineSensor
{
    unsigned char on_line, line_type;
    int left_line_position, right_line_position, spot_line_position;
};


class LineSensor: public Thread
{
    protected:
        Gpio<TGPIOA, 8, GPIO_MODE_OUT> sensor_led;        //sensor white led
        int threshold;
        bool m_ready;

    public:
        Array<int, LINE_SENSOR_COUNT> weights;
        Array<int, LINE_SENSOR_COUNT> adc_calibration;
        Array<int, LINE_SENSOR_COUNT> adc_calibration_k;
        Array<int, LINE_SENSOR_COUNT> adc_result;

    private:
        //line sensors
        Gpio<TGPIOA, 0, GPIO_MODE_AN> sensor_in_0;
        Gpio<TGPIOA, 1, GPIO_MODE_AN> sensor_in_1;
        Gpio<TGPIOA, 2, GPIO_MODE_AN> sensor_in_2;
        Gpio<TGPIOA, 3, GPIO_MODE_AN> sensor_in_3;
        Gpio<TGPIOA, 4, GPIO_MODE_AN> sensor_in_4;
        Gpio<TGPIOA, 5, GPIO_MODE_AN> sensor_in_5;
        Gpio<TGPIOA, 6, GPIO_MODE_AN> sensor_in_6;
        Gpio<TGPIOA, 7, GPIO_MODE_AN> sensor_in_7;

    public:
        sLineSensor result;

    protected:
        sLineSensor result_tmp;

    public:
        LineSensor();
        ~LineSensor();

        int init();

        void on();
        void off();
        bool ready();
        int get_max();
        int get_min();

        void main();

    protected:
        int integrate(unsigned int center);

        int find_left_line_pos();
        int find_right_line_pos();
        int find_center_line_pos();
        int find_spot_pos();
};

#endif
