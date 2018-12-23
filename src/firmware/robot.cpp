#include <robot.h>


Robot::Robot()
{
    //initialize steering PD controll
    steering_pid.init(0.4, 0.0, 1.8, 10.0);

    //speed rise limit
    speed_ramp.init(0.002);

    //initialize line curve type predictor using neural network
    line_predictor.init(cnn);
}

Robot::~Robot()
{

}

void Robot::main()
{
    line_search.set_initial_conditions(1.0, 0.0);

    while (1)
    {
        if (line_sensor.ready())
        {
            line_search.main();
            speed_ramp.set_speed(line_search.get_speed());
        }
    }

    while (1)
    {
        /*
        if (distance_sensor.ready())
        {
            //TODO brick avoid
        }
        else
        */
        if (line_sensor.ready())
        {
            if (line_sensor.result.on_line)
            {
                line_following();
                //TODO mapping line
            }
            else
            {
                line_search.main();
                speed_ramp.set_speed(line_search.get_speed());
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
      case   2: speed_limit = 0.8; break;
      default : speed_limit = 0.4; break;
    }

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
    line_search.set_initial_conditions(line_position, speed);
}
