#include <distance_sensor.h>

#include <drivers.h>
#include <sensors_config.h>


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

    result.left   = DISTANCE_SENSOR_MAX;
    result.front  = DISTANCE_SENSOR_MAX;
    result.right  = DISTANCE_SENSOR_MAX;

    result.front_obstacle_warning = false;
    result.front_obstacle = false;

    timer.add_task(*this, DISTANCE_SENSOR_DT);
    m_ready = false;

    return 0;
}

void DistanceSensor::main()
{
    float adc_front = adc.read(ADC_FRONT)/4096.0;
    float adc_left = adc.read(ADC_LEFT)/4096.0;
    float adc_right = adc.read(ADC_RIGHT)/4096.0;

    front_distance_filter.process(adc_front);
    left_distance_filter.process(adc_left);
    right_distance_filter.process(adc_right);


    result.front    = 1.0 - front_distance_filter.get_absolute();
    result.left     = 1.0 - left_distance_filter.get_absolute();
    result.right    = 1.0 - right_distance_filter.get_absolute();

    if (result.front < DISTANCE_SENSOR_WARNING)
        result.front_obstacle_warning = true;
    else
        result.front_obstacle_warning = false;

    if (result.front < DISTANCE_SENSOR_OBSTACLE)
        result.front_obstacle = true;
    else
        result.front_obstacle = false;

    m_ready = true;


    unsigned int period = 4;

    if ((state%period) == 0)
        front_ir_led = 0;
    if ((state%period) == period/2)
        front_ir_led = 1;
        
    state++;
}


bool DistanceSensor::ready()
{
    bool res = m_ready;

    __disable_irq();
    if (res)
        m_ready = false;
    __enable_irq();

    return res;
}


void DistanceSensor::print()
{
    terminal << "distance sensor\n";

    terminal << "front = " << result.front << "\n";
    terminal << "left = " << result.left << "\n";
    terminal << "right = " << result.right << "\n";

    terminal <<  "front_obstacle_warning = " << result.front_obstacle_warning << "\n";
    terminal <<  "front_obstacle = " << result.front_obstacle << "\n";


    terminal << "\n";
}
