#include <robot.h>
#include <line_following_config.h>

class LineDetected: public MovementTerminateConditionInterface
{
    public:
        bool test()
        {
            if (line_sensor.result.line_lost_type == LINE_LOST_NONE)
                return true;

            return false;
        }
};

LineDetected line_detected;

Robot::Robot()
{
    //initialize steering PD controll
    steering_pid.init(STEERING_PID_KP, STEERING_PID_KI, STEERING_PID_KD, STEERING_PID_LIMIT);

    //speed rise limit
    speed_ramp.init(LINE_FOLLOWING_SPEED_RAMP_RISE, 10*LINE_FOLLOWING_SPEED_RAMP_RISE);

    //initialize line curve type predictor using neural network
    line_predictor.init(cnn);
}

Robot::~Robot()
{

}

void Robot::main()
{
    while (1)
    {
        /*
        if (distance_sensor.ready() && brick_detection.process(distance_sensor.result) != 0)
        {
            allign_to_line(50);

            if (brick_detection.get() > 0)
                brick_avoid.avoid(BRICK_AVOID_SIDE_LEFT);
            else
                brick_avoid.avoid(BRICK_AVOID_SIDE_RIGHT);


            motor_controll.set_left_speed(0);
            motor_controll.set_right_speed(0);
            speed_ramp.set(0.0);

            steering_pid.reset(line_sensor.result.center_line_position);
        }
        else
        */

        if (line_sensor.ready())
        {
            if (line_sensor.result.line_lost_type == LINE_LOST_NONE)
            {
                if (line_sensor.result.line_type == LINE_TYPE_SPOT)
                {
                    spot_move();

                    speed_ramp.set(0);

                    steering_pid.reset(line_sensor.result.center_line_position);
                }
                else
                {
                    line_following();
                }
            }
            else
            {
                if (line_sensor.result.line_lost_type == LINE_LOST_LEFT)
                {
                    movement.set(MOVEMENT_TURN_LEFT, 250, &line_detected);
                    movement.process();
                }
                else
                if (line_sensor.result.line_lost_type == LINE_LOST_RIGHT)
                {
                    movement.set(MOVEMENT_TURN_RIGHT, 250, &line_detected);
                    movement.process();
                }
                else
                {
                    speed_ramp.set(0);
                    motor_controll.set_right_speed(0.0);
                    motor_controll.set_left_speed(0.0);
                }
            }
        }
    }
}






void Robot::line_following()
{
    //compute curve shape using CNN
    line_predictor.process(line_sensor.adc_result, encoder_sensor.get_distance());

    //set correct speed limit
    float speed_limit = LINE_FOLLOWING_SPEED_MIN;


    switch (line_predictor.get_result())
    {
      case   2: speed_limit = LINE_FOLLOWING_SPEED_MAX; break;
      case   1:
      case   3: speed_limit = (LINE_FOLLOWING_SPEED_MAX + LINE_FOLLOWING_SPEED_MIN)/2.0; break;
      default : speed_limit = LINE_FOLLOWING_SPEED_MIN; break;
    }

    if (line_sensor.result.line_type == LINE_TYPE_SPOT)
    {
        speed_limit = LINE_FOLLOWING_SPEED_MIN;
    }

    if (distance_sensor.result.front_obstacle_warning)
        speed_limit = LINE_FOLLOWING_SPEED_MIN;

    //compute next speed, using ramp and speed limit for this curve
    float speed = speed_ramp.process(speed_limit);

    //get line position and compute error
    float line_position = line_sensor.result.center_line_position;
    //float line_position = line_sensor.result.right_line_position;

    float error         = 0.0 - line_position;

    //compute steering using PID
    float steering = steering_pid.process(error, line_position);

    //compute outputs for motors
    float speed_left  = steering  + speed;
    float speed_right = -steering + speed;

    //input into PID controllers for motors
    motor_controll.set_left_speed(speed_left);
    motor_controll.set_right_speed(speed_right);
}

void Robot::allign_to_line(unsigned int cycles)
{
    while (cycles)
    {
        if (line_sensor.ready())
        {
            //compute line possition and of center error
            float line_position = line_sensor.result.center_line_position;
            float error         = 0.0 - line_position;

            float steering = steering_pid.process(error, line_position);

            //compute outputs for motors
            float speed_left  = steering  ;
            float speed_right = -steering ;

            //input into PID controllers for motors
            motor_controll.set_left_speed(speed_left);
            motor_controll.set_right_speed(speed_right);

            //set last line position for lost line search
            //line_search.set_last_line_position(line_position);

            cycles--;
        }
    }
}



void Robot::spot_move()
{
    int line_position = line_sensor.result.center_line_position;


    motor_controll.set_left_speed(0);
    motor_controll.set_right_speed(0);

    while (true)
    {
        if (line_sensor.ready())
        {
            if (line_position > 0)
            {
                motor_controll.set_right_speed(0);
                motor_controll.set_left_speed(LINE_FOLLOWING_SPEED_MIN);
            }
            else
            {
                motor_controll.set_right_speed(0);
                motor_controll.set_left_speed(LINE_FOLLOWING_SPEED_MIN);
            }

            if (line_sensor.result.on_line_count <= 3)
                break;
        }
    }

    motor_controll.set_left_speed(0);
    motor_controll.set_right_speed(0);
}
