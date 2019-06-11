#ifndef _MOVEMENT_H_
#define _MOVEMENT_H_

class MovementTerminateConditionInterface
{
    public:
        MovementTerminateConditionInterface()
        {
        }

        virtual ~MovementTerminateConditionInterface()
        {
        }

        virtual bool main()
        {
            return false;
        }
};


class Movement
{
    public:
        Movement();
        virtual ~Movement();

        void init(  MovementTerminateConditionInterface *terminate_condition,
                    int d_left, int d_right,
                    float max_speed_left    = 1.0,  float max_speed_right      = 1.0,
                    float ramp_speed_left   = 0.01, float ramp_speed_right     = 0.01,
                    float initial_speed_left = 0.0,  float initial_speed_right = 0.0
                );

        int process_step();
        int process();

    private:
        int d_left, d_right;
        int d_left_initial, d_right_initial;
        float max_speed_right, max_speed_left;
        float ramp_speed_right, ramp_speed_left;
        float speed_right, speed_left;

        bool left_done, right_done;

        MovementTerminateConditionInterface *terminate_condition;
};


#endif
