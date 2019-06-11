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

    off();
    timer.delay_ms(100);

    for (unsigned int i = 0; i < adc_result.size(); i++)
        adc_calibration_q[i] = adc.read(i);

    on();
    timer.delay_ms(100);

    for (unsigned int i = 0; i < adc_calibration_k.size(); i++)
        adc_calibration_k[i] =  adc.read(i) - adc_calibration_q[i];

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

    result.line_lost_type = LINE_LOST_NONE;
    result.line_type = LINE_TYPE_SINGLE;
    result.on_line_count = 0;

    result.center_line_position = 0.0;
    result.left_line_position   = result.center_line_position;
    result.right_line_position  = result.center_line_position;

    result.average = 0.0;

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
    for (unsigned int i = 0; i < adc_result.size(); i++)
    {
        adc_result[i] = 1000 - ((adc.read(i) - adc_calibration_q[i])*1000)/adc_calibration_k[i];
        if (adc_result[i] < 0)
            adc_result[i] = 0;
    }

    line_filter();

    m_ready = true;
}

void LineSensor::print()
{
    terminal << "line sensor\n";

    terminal << "adc_result : ";
    for (unsigned int i = 0; i < adc_result.size(); i++)
        terminal << adc_result[i] << " ";
    terminal << "\n";


    terminal << "\n";

    terminal << "lost type = " << result.line_lost_type << "\n";
    terminal << "type    = " << result.line_type << "\n";
    terminal << "count   = " << result.on_line_count << "\n";
    terminal << "average = " << result.average << "\n";
    terminal << "center  = " << result.center_line_position << "\n";
    terminal << "left    = " << result.left_line_position << "\n";
    terminal << "right   = " << result.right_line_position << "\n";

    terminal << "\n";
}


void LineSensor::line_filter()
{
    result.line_lost_type = LINE_LOST_CENTER;

    //compute average of all sensors
    int average = 0;
    for (unsigned int i = 0; i < adc_result.size(); i++)
        average+= adc_result[i];
    average = average/adc_result.size();

    result.average = average;

    /*
    //substract average to eliminate ambient iluminance
    for (unsigned int i = 0; i < adc_result.size(); i++)
    {
        adc_filtered[i] = adc_result[i] - average;
    }
    */

    //find maximum sensor value
    unsigned int center_line_idx = 0;
    for (unsigned int i = 0; i < adc_result.size(); i++)
        if (adc_result[i] > adc_result[center_line_idx])
        {
            center_line_idx = i;
        }

    unsigned int on_line_count = 0;
    for (unsigned int i = 0; i < adc_result.size(); i++)
        if (adc_result[i] > threshold)
            on_line_count++;


    if (average > 500)
    {
        result.line_type = LINE_TYPE_SPOT;
        result.on_line_count = on_line_count;
        result.line_lost_type = LINE_LOST_NONE;
    }
    else
    if (adc_result[center_line_idx] > threshold)
    {
        float k = 1.0/((LINE_SENSOR_COUNT/2)*LINE_SENSOR_STEP);
        result.line_type = LINE_TYPE_SINGLE;
        result.center_line_position = k*integrate(center_line_idx);
        result.left_line_position   = k*integrate(center_line_idx + 1);
        result.right_line_position  = k*integrate(center_line_idx - 1);
        result.on_line_count = on_line_count;
        result.line_lost_type = LINE_LOST_NONE;
    }
    else
    {
        if (result.center_line_position < -0.8)
            result.line_lost_type = LINE_LOST_RIGHT;
        else
        if (result.center_line_position > 0.8)
            result.line_lost_type = LINE_LOST_LEFT;
        else
            result.line_lost_type = LINE_LOST_CENTER;
    }
}


int LineSensor::integrate(int center_idx)
{
    if (center_idx < 0)
        center_idx = 0;

    if (center_idx > (LINE_SENSOR_COUNT-1))
        center_idx = (LINE_SENSOR_COUNT-1);

    int center  = weights[center_idx]*adc_result[center_idx];
    int sum     = adc_result[center_idx];

    int int_result = center;

    if (center_idx > 0)
    {
        int_result+= weights[center_idx - 1]*adc_result[center_idx - 1];
        sum+= adc_result[center_idx - 1];
    }
    else
    {
        int_result+= center;
        sum+= adc_result[center_idx];
    }

    if (center_idx < (LINE_SENSOR_COUNT-1))
    {
        int_result+= weights[center_idx+1]*adc_result[center_idx+1];
        sum+= adc_result[center_idx+1];
    }
    else
    {
        int_result+= center;
        sum+= adc_result[center_idx];
    }

    int_result = int_result/sum;

    return int_result;
}
