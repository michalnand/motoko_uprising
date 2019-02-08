#include <robot.h>
#include <robot_config.h>

Robot::Robot()
{
    //initialize steering PD controll
    steering_pid.init(STEERING_PID_KP, STEERING_PID_KI, STEERING_PID_KD, STEERING_PID_LIMIT);

    //speed rise limit
    speed_ramp.init(LINE_FOLLOWING_SPEED_RAMP_RISE);

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
        if (distance_sensor.ready() && distance_sensor.result.front_obstacle)
        {
            //allign_to_line(100);
            //brick_avoid.avoid_hard(BRICK_AVOID_SIDE_LEFT);

            brick_avoid.avoid(BRICK_AVOID_SIDE_LEFT);

            motor_controll.set_left_speed(0);
            motor_controll.set_right_speed(0);
            speed_ramp.set_speed(0.0);

            float line_position = line_sensor.result.right_line_position*1.0/line_sensor.get_max();
            steering_pid.reset(line_position);
        }
        else
        if (line_sensor.ready())
        {
            if (line_sensor.result.on_line)
            {
                line_following();
                //TODO mapping line
            }
            else
            {
                line_search.keep_speed_enable();
                line_search.main();

                motor_controll.set_left_speed(0);
                motor_controll.set_right_speed(0);
                speed_ramp.set_speed(0);

                float line_position = line_sensor.result.right_line_position*1.0/line_sensor.get_max();
                steering_pid.reset(line_position);
            }
        }
    }
}

void Robot::line_following()
{
    //compute curve shape using CNN
    line_predictor.process(line_sensor.adc_result, encoder_sensor.get_distance());

    //set correct speed limit
    float speed_limit = 0.0;
    switch (line_predictor.get_result())
    {
      case   2: speed_limit = LINE_FOLLOWING_SPEED_MAX; break;
      default : speed_limit = LINE_FOLLOWING_SPEED_MIN; break;
    }

    if (distance_sensor.result.front_obstacle_warning)
        speed_limit = LINE_FOLLOWING_SPEED_MIN;

    //compute next speed, using ramp and speed limit for this curve
    float speed = speed_ramp.process(speed_limit);

    //compute line possition and of center error
    float line_position = line_sensor.result.right_line_position*1.0/line_sensor.get_max();
    float error         = 0.0 - line_position;

    //compute steering using PID
    float steering = steering_pid.process(error, line_position);

    //compute outputs for motors
    float speed_left  = steering  + speed;
    float speed_right = -steering + speed;

    //input into PID controllers for motors
    motor_controll.set_left_speed(speed_left);
    motor_controll.set_right_speed(speed_right);

    //set last line position for lost line search
    line_search.set_last_line_position(line_position);
}

void Robot::allign_to_line(unsigned int cycles)
{
    while (cycles)
    {
        if (line_sensor.ready())
        {
            //compute line possition and of center error
            float line_position = line_sensor.result.right_line_position*1.0/line_sensor.get_max();
            float error         = 0.0 - line_position;

            float steering = steering_pid.process(error, line_position);

            //compute outputs for motors
            float speed_left  = steering  ;
            float speed_right = -steering ;

            //input into PID controllers for motors
            motor_controll.set_left_speed(speed_left);
            motor_controll.set_right_speed(speed_right);

            //set last line position for lost line search
            line_search.set_last_line_position(line_position);

            cycles--;
        }
    }
}

void Robot::brick_avoid_hard(unsigned int side)
{

}
