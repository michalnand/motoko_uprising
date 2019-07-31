#include <movement.h>


Movement::Movement()
{
    type        = 0;
    parameter   = 0;
    done        = false;

    initial_angle               = 0;
    initial_angular_rate        = 0;

    initial_left_distance       = 0;
    initial_right_distance      = 0;
    initial_distance            = 0;

    initial_left_speed          = 0;
    initial_right_speed         = 0;

    forward_pid.init(0.001, 0.0, 0.001, 2.0);

}

Movement::~Movement()
{

}

void Movement::set(uint8_t type, int32_t parameter)
{
    this->type      = type;
    this->parameter = parameter;
    done            = false;

    initial_angle               = imu_sensor.angle.z;
    initial_angular_rate        = imu_sensor.angular_rate.z;

    initial_left_distance       = encoder_sensor.get_left();
    initial_right_distance      = encoder_sensor.get_right();
    initial_distance            = encoder_sensor.get_distance();

    initial_left_speed          = motor_controll.get_left_speed();
    initial_right_speed         = motor_controll.get_right_speed();
}

void Movement::process()
{

}

bool Movement::is_done()
{
    return done;
}

void Movement::forward_step()
{
    if (imu_sensor.ready())
    {
        float error = initial_angle - imu_sensor.angle.z;

        float u = forward_pid.process(error);

        motor_controll.set_left_speed(-u);
        motor_controll.set_right_speed(u);
    }
}
