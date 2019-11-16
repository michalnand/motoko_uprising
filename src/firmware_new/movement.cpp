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

    terminate_condition = nullptr;
}

Movement::~Movement()
{

}

void Movement::set(uint8_t move_type, int32_t parameter, MovementTerminateConditionInterface *terminate_condition)
{
    this->move_type             = move_type;
    this->parameter             = parameter;
    this->terminate_condition   = terminate_condition;
    done                        = false;

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

    if ((move_type == MOVEMENT_TURN_LEFT) || (move_type == MOVEMENT_TURN_RIGHT))
    {
        if (parameter > 0)
        {
            ramp_left.init(MOVEMENT_TURN_RAMP_UP, MOVEMENT_TURN_RAMP_DOWN, initial_left_speed);
            ramp_right.init(MOVEMENT_TURN_RAMP_UP, MOVEMENT_TURN_RAMP_DOWN, initial_right_speed);
        }
        else
        {
            ramp_left.init(MOVEMENT_TURN_RAMP_UP, MOVEMENT_TURN_RAMP_UP*0.5, initial_left_speed);
            ramp_right.init(MOVEMENT_TURN_RAMP_UP, MOVEMENT_TURN_RAMP_UP*0.5, initial_right_speed);
        }
    }
}

int Movement::process()
{
    while (is_done() == false)
    {
        if ( (move_type == MOVEMENT_FORWARD) || (move_type == MOVEMENT_BACKWARD) )
            forward_step();

        if (move_type == MOVEMENT_TURN_LEFT)
            turn_left_step();

        if (move_type == MOVEMENT_TURN_RIGHT)
            turn_right_step();

        if (terminate_condition != nullptr)
            if (terminate_condition->test() == true)
                return 1;
    }

    return 0;
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

void Movement::turn_left_step()
{
    float left_speed = 0.0, right_speed = 0.0;

    float position_error   = (initial_right_distance + parameter) - encoder_sensor.get_right();

    if (state == 0)
    {
        if (parameter > 0.0)
            right_speed  = ramp_right.process(MOVEMENT_TURN_SPEED);
        else
            right_speed  = ramp_right.process(-MOVEMENT_TURN_SPEED);

        left_speed = ramp_left.process(0.0);

        if (abs(position_error) < 5.0)
            state = 1;
    }

    if (state == 1)
    {
        right_speed  = ramp_right.process(0.0);
        left_speed   = ramp_left.process(0.0);

        if ( abs(left_speed) < 0.1 && abs(right_speed) < 0.1 )
        {
            done = true;
            left_speed = 0;
            right_speed = 0;
        }
    }

    motor_controll.set_left_speed(left_speed);
    motor_controll.set_right_speed(right_speed);

    timer.delay_ms(10);
}

void Movement::turn_right_step()
{
    float left_speed = 0.0, right_speed = 0.0;

    float position_error   = (initial_left_distance + parameter) - encoder_sensor.get_left();

    if (state == 0)
    {
        if (parameter > 0.0)
            left_speed  = ramp_left.process(MOVEMENT_TURN_SPEED);
        else
            left_speed  = ramp_left.process(-MOVEMENT_TURN_SPEED);

        right_speed = ramp_right.process(0.0);

        if (abs(position_error) < 5.0)
            state = 1;
    }

    if (state == 1)
    {
        right_speed  = ramp_right.process(0.0);
        left_speed   = ramp_left.process(0.0);

        if ( abs(left_speed) < 0.1 && abs(right_speed) < 0.1 )
        {
            done = true;
            left_speed = 0;
            right_speed = 0;
        }
    }

    motor_controll.set_left_speed(left_speed);
    motor_controll.set_right_speed(right_speed);

    timer.delay_ms(10);
}
