#include "position_control.h"
#include <math/math_func.h>

PositionControll::PositionControll()
{
    distance_limit  = 0;

    max_speed = 0.7;

    set_position(0, 0);
}

PositionControll::~PositionControll()
{

}

void PositionControll::init(float max_speed)
{
    distance_limit  = 0;
    this->max_speed = max_speed;
    set_position(0, 0);
}

void PositionControll::set_position(long int d_left, long int d_right, int distance_limit, bool keep_speed)
{
    left_end    = encoder_sensor.get_left()  + d_left;
    right_end   = encoder_sensor.get_right() + d_right;

    this->distance_limit = distance_limit;


    float k_rise_forward   = 0.008;
    float k_fall_forward   = 0.01;

    float k_rise_backward   = 0.002;
    float k_fall_backward   = 0.01;

    if ((d_left > 0)&&(d_right > 0))
    {
        k_rise_forward/= 2.0;
    }

    integrator_left_forward.init(k_rise_forward, k_fall_forward);
    integrator_left_backward.init(k_rise_backward, k_fall_backward);
    integrator_right_forward.init(k_rise_forward, k_fall_forward);
    integrator_right_backward.init(k_rise_backward, k_fall_backward);

    integrator_left_forward.reset();
    integrator_left_backward.reset();
    integrator_right_forward.reset();
    integrator_right_backward.reset();


    if (keep_speed)
    {
      if ((d_right > d_left) && (d_right > 0))
      {
        float speed_right = motor_controll.get_speed_right();
        integrator_right_forward.init(k_rise_forward, k_fall_forward, speed_right);
      }

      if ((d_right < d_left) && (d_left > 0))
      {
        float speed_left = motor_controll.get_speed_left();
        integrator_left_forward.init(k_rise_forward, k_fall_forward, speed_left);
      }
    }
}





bool PositionControll::process()
{
    float right_speed   = 0.0;
    float left_speed    = 0.0;

    if (left_end > encoder_sensor.get_left())
    {
        integrator_left_forward.process(max_speed);
        left_speed = integrator_left_forward.get();
    }
    else
    if (left_end < encoder_sensor.get_left())
    {
        integrator_left_backward.process(max_speed);
        left_speed = -integrator_left_backward.get();
    }

    if (right_end > encoder_sensor.get_right())
    {
        integrator_right_forward.process(max_speed);
        right_speed = integrator_right_forward.get();
    }
    else
    if (right_end < encoder_sensor.get_right())
    {
        integrator_right_backward.process(max_speed);
        right_speed = -integrator_right_backward.get();
    }

    motor_controll.set_right_speed(right_speed);
    motor_controll.set_left_speed(left_speed);

    return is_done(distance_limit);
}


bool PositionControll::is_done(int limit)
{
    if (is_done_left(limit) && is_done_right(limit))
        return true;
    return false;
}


bool PositionControll::is_done_left(int limit)
{
    auto error  = abs(left_end  - encoder_sensor.get_left());

    if (error < limit)
        return true;

    return false;
}

bool PositionControll::is_done_right(int limit)
{
    auto error  = abs(right_end  - encoder_sensor.get_right());

    if (error < limit)
        return true;

    return false;
}

void PositionControll::stop()
{
    while ( (abs(motor_controll.get_speed_left()) > 0.01) || (abs(motor_controll.get_speed_right()) > 0.01) )
    {
        integrator_right_backward.process(0);
        float right_speed = -integrator_right_backward.get();

        integrator_left_backward.process(0);
        float left_speed = -integrator_left_backward.get();

        motor_controll.set_right_speed(right_speed);
        motor_controll.set_left_speed(left_speed);

        timer.delay_ms(4);
    }

    motor_controll.set_right_speed(0);
    motor_controll.set_left_speed(0);
}
