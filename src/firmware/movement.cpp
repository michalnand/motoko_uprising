#include <movement.h>
#include <drivers.h>



Movement::Movement()
{
    d_left  = 0;
    d_right = 0;

    max_speed_right = 0;
    max_speed_left = 0;

    ramp_speed_right = 0;
    ramp_speed_left = 0;

    speed_right = 0;
    speed_left = 0;

    left_done = false;
    right_done = false;

    terminate_condition = nullptr;
}

Movement::~Movement()
{

}

void Movement::init(  MovementTerminateConditionInterface *terminate_condition,
                        int d_left, int d_right,
                        float max_speed_left    , float max_speed_right,
                        float ramp_speed_left   , float ramp_speed_right,
                        float initial_speed_left , float initial_speed_right)
{
    this->terminate_condition = terminate_condition;

    this->d_left  = d_left;
    this->d_right = d_right;

    this->max_speed_left = max_speed_left;
    this->max_speed_right = max_speed_right;

    this->ramp_speed_left = ramp_speed_left;
    this->ramp_speed_right = ramp_speed_right;

    this->speed_left = initial_speed_left;
    this->speed_right = initial_speed_right;

    this->left_done = false;
    this->right_done = false;

    d_left_initial  = encoder_sensor.get_left();
    d_right_initial = encoder_sensor.get_right();
}

int Movement::process_step()
{
    int error_left  = (d_left_initial + this->d_left) - encoder_sensor.get_left();
    int error_right = (d_right_initial + this->d_right) - encoder_sensor.get_right();

    if (left_done == false)
        speed_left+= ramp_speed_left;

    if (right_done == false)
        speed_right+= ramp_speed_right;

    if (speed_left > max_speed_left)
        speed_left = max_speed_left;

    if (speed_right > max_speed_right)
        speed_right = max_speed_right;

    if (speed_left < -max_speed_left)
        speed_left = -max_speed_left;

    if (speed_right < -max_speed_right)
        speed_right = -max_speed_right;

    if (abs(error_left) < 5)
    {
        speed_left = 0;
        left_done = true;
    }

    if (abs(error_right) < 5)
    {
        speed_right = 0;
        right_done = true;
    }


    motor_controll.set_right_speed(speed_right);
    motor_controll.set_left_speed(speed_left);

    if (left_done && right_done)
        return 1;

    if (terminate_condition != nullptr)
        if (terminate_condition->main())
            return 2;

    return 0;
}

int Movement::process()
{
    int res = 0;
    while ((res = process_step()) == 0)
    {
        timer.delay_ms(4);
    }

    return res;
}
