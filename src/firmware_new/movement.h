#ifndef _MOVEMENT_H_
#define _MOVEMENT_H_

#include <embedded_libs.h>


#define MOVEMENT_FORWARD        ((uint8_t)0)
#define MOVEMENT_BACKWARD       ((uint8_t)1)
#define MOVEMENT_TURN_LEFT      ((uint8_t)2)
#define MOVEMENT_TURN_RIGHT     ((uint8_t)3)
#define MOVEMENT_TURN_CENTER    ((uint8_t)4)



class MovementTerminateConditionInterface
{
    public:
        MovementTerminateConditionInterface()
        {

        }

        virtual ~MovementTerminateConditionInterface()
        {

        }
        
        virtual bool test()
        {
            return false;
        }
};

class Movement
{
    public:
        Movement();
        virtual ~Movement();

    public:
        void set(uint8_t type, int32_t parameter, MovementTerminateConditionInterface *terminate_condition = nullptr);
        int process();
        bool is_done();

    private:
        void forward_step();
        void turn_left_step();
        void turn_right_step();

    private:
        int32_t initial_angle;
        int32_t initial_angular_rate ;

        int32_t initial_left_distance;
        int32_t initial_right_distance;
        int32_t initial_distance;

        float initial_left_speed;
        float initial_right_speed;

    private:
        uint8_t move_type;
        int32_t parameter;
        bool    done;
        uint8_t state;

        PID forward_steering_pid, forward_position_pid;
        Ramp ramp, ramp_left, ramp_right;

        MovementTerminateConditionInterface *terminate_condition;


};

#endif
