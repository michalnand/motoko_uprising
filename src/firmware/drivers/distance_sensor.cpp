#include <distance_sensor.h>

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


    front_distance_filter.fill(result.front);
    left_distance_filter.fill(result.left);
    right_distance_filter.fill(result.right);



    /*
    float r = 0.98;
    float b = (1.0 - r*r)/2.0;
    front_distance_filter.set_coefs(0.0, -r*r, b, 0.0, -b);
    left_distance_filter.set_coefs(0.0,  -r*r, b, 0.0, -b);
    right_distance_filter.set_coefs(0.0, -r*r, b, 0.0, -b);
    */


    timer.add_task(this, 5, false);

    m_ready = false;

    return 0;
}

void DistanceSensor::main()
{
    switch (state)
    {
        case 0:
        {

          adc_res_off[DISTANCE_FRONT] = adc.read(ADC_FRONT);
          adc_res_off[DISTANCE_LEFT]  = adc.read(ADC_LEFT);
          adc_res_off[DISTANCE_RIGHT] = adc.read(ADC_RIGHT);

          front_ir_led = 1;

          state = 1;
        }
        break;

        case 1:
        {
            adc_res_on[DISTANCE_FRONT]  = adc.read(ADC_FRONT);
            adc_res_on[DISTANCE_LEFT]   = adc.read(ADC_LEFT);
            adc_res_on[DISTANCE_RIGHT]  = adc.read(ADC_RIGHT);

            front_ir_led = 0;

            float dif;

            dif = 1.0 - (adc_res_off[DISTANCE_FRONT] - adc_res_on[DISTANCE_FRONT])/4096.0;
            if (dif < 0)
              dif = 0;
            result.front = front_distance_filter.process(dif);


            dif = 1.0 - (adc_res_off[DISTANCE_LEFT] - adc_res_on[DISTANCE_LEFT])/4096.0;
            if (dif < 0)
              dif = 0;
            result.left = left_distance_filter.process(dif);


            dif = 1.0 - (adc_res_off[DISTANCE_RIGHT] - adc_res_on[DISTANCE_RIGHT])/4096.0;
            if (dif < 0)
              dif = 0;
            result.right = right_distance_filter.process(dif);


            if (result.front < 0.38)
                result.front_obstacle_warning = true;
            else
                result.front_obstacle_warning = false;

            if (result.front < 0.31) 
                result.front_obstacle = true;
            else
                result.front_obstacle = false;

            state = 0;
            m_ready = true;
        }
        break;
    }

    /*

    front_distance_filter.process(adc.read(ADC_FRONT)/4096.0);
    left_distance_filter.process(adc.read(ADC_LEFT)/4096.0);
    right_distance_filter.process(adc.read(ADC_RIGHT)/4096.0);


    result.front    = front_distance_filter.get_absolute();
    result.left     = left_distance_filter.get_absolute();
    result.right    = right_distance_filter.get_absolute();


    if (result.front < 1900)
        result.front_obstacle_warning = true;
    else
        result.front_obstacle_warning = false;

    if (result.front < 1100)
        result.front_obstacle = true;
    else
        result.front_obstacle = false;

    m_ready = true;


    unsigned int period = 2;

    if ((state%period) == 0)
        front_ir_led = 0;
    if ((state%period) == period/2)
        front_ir_led = 1;
    state++;
    */
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
