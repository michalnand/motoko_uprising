#include <robot.h>


Robot::Robot()
{
    //initialize steering PD controll
    steering_pid.init(0.4, 0.0, 1.8, 10.0);

    speed      = 0.0;
    speed_max  = 0.4;
    speed_rise = 0.002;

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

                /*
                //TODO line search
                motor_controll.set_left_speed(0);
                motor_controll.set_right_speed(0);
                speed = 0.0;
                steering_pid.reset();
                */
            }
        }
    }
}

void Robot::line_following()
{
    line_predictor.process(line_sensor.adc_result, encoder_sensor.get_distance());

    switch (line_predictor.get_result())
    {
      case   2: speed_max = 0.8; break;
      default : speed_max = 0.4; break;
    }

    float line_position = line_sensor.result.right_line_position*1.0/line_sensor.get_max();
    float error         = 0.0 - line_position;

    float turn = steering_pid.process(error, line_position);


    float speed_left  = turn  + speed;
    float speed_right = -turn + speed;

    if (speed < speed_max)
      speed+= speed_rise;
    else
      speed = speed_max;

    motor_controll.set_left_speed(speed_left);
    motor_controll.set_right_speed(speed_right);

    line_search.set_initial_turn(turn);
}
