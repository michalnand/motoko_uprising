#include <robot.h>
#include <config_robot.h>
#include <movement.h>

class LineDetected: public MovementTerminateConditionInterface
{
    public:
        bool main()
        {
            if (line_sensor.result.line_lost_type == LINE_LOST_NONE)
                return true;

            return false;
        }
};

LineDetected line_detected;

Robot::Robot()
{
    mapping_enabled  = false;
    fast_run_enabled = false;

    //initialize steering PD controll
    steering_pid.init(STEERING_PID_KP, STEERING_PID_KI, STEERING_PID_KD, STEERING_PID_LIMIT);

    //speed rise limit
    speed_ramp.init(LINE_FOLLOWING_SPEED_RAMP_RISE);

    //initialize line curve type predictor using neural network
    line_predictor.init(cnn);

    int ignore_distance = 200;
    Array<int, MAX_OBSTACLES_COUNT> brick_detection_pattern;


    brick_detection_pattern[0] = BRICK_AVOID_SIDE_LEFT;
    brick_detection_pattern[1] = BRICK_AVOID_SIDE_RIGHT;
    brick_detection_pattern[2] = 0;
    brick_detection_pattern[3] = 0;
    brick_detection_pattern[4] = 0;
    brick_detection_pattern[5] = 0;
    brick_detection_pattern[6] = 0;
    brick_detection_pattern[7] = 0;


    brick_detection.init(brick_detection_pattern, ignore_distance);


    mapping_distance_next = 0;
    mapping_distance_prev = 0;
    line_mapping.init();
    //line_mapping.print_json();

    fast_run_max_distance = FAST_RUN_MAX_DISTANCE;
    bridge_active = false;
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
            speed_ramp.set_speed(0.0);

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

                    speed_ramp.set_speed(0);

                    steering_pid.reset(line_sensor.result.center_line_position);
                }
                else
                {
                    line_following();
                }
            }
            else
            {
                if (line_sensor.result.line_lost_type == LINE_LOST_CENTER)
                {
                    movement.init(&line_detected, 0, 280, 0.8, 0.8, 0.005, 0.005, motor_controll.get_speed_left(),  motor_controll.get_speed_right());
                    movement.process();
                }
                if (line_sensor.result.line_lost_type == LINE_LOST_LEFT)
                {
                    movement.init(&line_detected, 0, 250, 0.6, 0.6, 0.005, 0.005, 0,  motor_controll.get_speed_right()*0.5);
                    movement.process();
                }
                if (line_sensor.result.line_lost_type == LINE_LOST_RIGHT)
                {
                    movement.init(&line_detected, 250, 0, 0.6, 0.6, 0.005, 0.005, motor_controll.get_speed_left()*0.5,  0);
                    movement.process();
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


    if (fast_run_enabled)
    {
        if (fast_run_max_distance < encoder_sensor.get_distance())
        {
            speed_limit = LINE_FOLLOWING_SPEED_MAX;

            int map_a = line_mapping.get_closest(encoder_sensor.get_distance());
            int map_b = line_mapping.get_closest(encoder_sensor.get_distance() + LINE_MAPPING_STEP);


            if ((map_a == 0)||(map_a == 4)||
                (map_b == 0)||(map_b == 4))
                speed_limit = LINE_FOLLOWING_SPEED_MIN;
        }
        else
        {
            fast_run_disable();
        }
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

    //set last line position for lost line search
    //line_search.set_last_line_position(line_position);

    if (mapping_enabled)
    {
        /*
        unsigned int line_type = line_predictor.get_result();
        int mapping_distance_now = encoder_sensor.get_distance();

        if (mapping_distance_now >= mapping_distance_next)
        {
            int dist_dif = mapping_distance_now - mapping_distance_prev;
            mapping_distance_prev = mapping_distance_now;

            if (dist_dif > 255)
                dist_dif = 255;
            if (dist_dif < 0)
                dist_dif = 0;

            int line_position_ = (line_position + 1.0)*100;
            if (line_position_ > 255)
                line_position_ = 255;
            if (line_position_ < 0)
                line_position_ = 0;

            line_mapping.add(dist_dif, line_position_);

            mapping_distance_next+= LINE_MAPPING_STEP;
        }
        */
    }
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

void Robot::mapping_enable()
{
    mapping_enabled = true;
}

void Robot::mapping_disable()
{
    mapping_enabled = false;
}

void Robot::fast_run_enable()
{
    fast_run_enabled = true;
    speed_ramp.init(LINE_FOLLOWING_FAST_RUN_SPEED_RAMP_RISE);
}

void Robot::fast_run_disable()
{
    fast_run_enabled = false;
    speed_ramp.init(LINE_FOLLOWING_SPEED_RAMP_RISE);
}

void Robot::print_map()
{
    line_mapping.print_json();
}
