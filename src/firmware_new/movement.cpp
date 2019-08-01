#include <movement.h>
#include <robot_config.h>

Movement::Movement()
{
    move_type           = 0;
    parameter           = 0;
    done                = false;

    state       = 0;

    initial_angle               = 0;
    initial_angular_rate        = 0;

    initial_left_distance       = 0;
    initial_right_distance      = 0;
    initial_distance            = 0;

    initial_left_speed          = 0;
    initial_right_speed         = 0;

    forward_position_pid.init(MOVEMENT_FORWARD_POSITION_PID_KP, MOVEMENT_FORWARD_POSITION_PID_KI, MOVEMENT_FORWARD_POSITION_PID_KD, MOVEMENT_FORWARD_POSITION_PID_RANGE);

    forward_steering_pid.init(MOVEMENT_FORWARD_STEERING_PID_KP, MOVEMENT_FORWARD_STEERING_PID_KI, MOVEMENT_FORWARD_STEERING_PID_KD, MOVEMENT_FORWARD_STEERING_PID_RANGE);

}

Movement::~Movement()
{

}

void Movement::set(uint8_t move_type, int32_t parameter)
{
    this->move_type         = move_type;
    this->parameter         = parameter;
    done                    = false;

    state                   = 0;

    initial_angle               = imu_sensor.angle.z;
    initial_angular_rate        = imu_sensor.angular_rate.z;

    initial_left_distance       = encoder_sensor.get_left();
    initial_right_distance      = encoder_sensor.get_right();
    initial_distance            = encoder_sensor.get_distance();

    initial_left_speed          = motor_controll.get_left_speed();
    initial_right_speed         = motor_controll.get_right_speed();

    forward_position_pid.reset(initial_distance);
    forward_steering_pid.reset(initial_angle);

    if (move_type == MOVEMENT_FORWARD)
    {
        ramp.init(MOVEMENT_FORWARD_RAMP_UP, MOVEMENT_FORWARD_RAMP_DOWN, (initial_left_speed + initial_right_speed)/2.0);
    }

    if (move_type == MOVEMENT_BACKWARD)
    {
        ramp.init(MOVEMENT_BACKWARD_RAMP_UP, MOVEMENT_BACKWARD_RAMP_DOWN, (initial_left_speed + initial_right_speed)/2.0);
    } 
}

void Movement::process()
{
    if ((move_type == MOVEMENT_FORWARD)||(move_type == MOVEMENT_BACKWARD))
        forward_step();

}

bool Movement::is_done()
{
    return done;
}

void Movement::forward_step()
{
    if (imu_sensor.ready())
    {
        float steering_error    = initial_angle - imu_sensor.angle.z;
        float steering          = forward_steering_pid.process(steering_error);


        float position_error   = (initial_distance + parameter) - encoder_sensor.get_distance();
        float speed_ = forward_position_pid.process(saturate(position_error, -50.0, 50.0));

        float speed = ramp.process(speed_);

        if (state == 0)
        {
            if (abs(position_error) < 5.0)
            {
                state = 1;
            }
            else
            {
                motor_controll.set_right_speed(speed + steering);
                motor_controll.set_left_speed(speed - steering);
            }
        }
        else
        {
            motor_controll.set_right_speed(0.0);
            motor_controll.set_left_speed(0.0);
            done = true;
        }
    }
}
