#ifndef _MOVEMENT_H_
#define _MOVEMENT_H_

#include <embedded_libs.h>


#define MOVEMENT_FORWARD        ((uint8_t)0)
#define MOVEMENT_TURN           ((uint8_t)1)
#define MOVEMENT_TURN_CENTER    ((uint8_t)2)



class Movement
{
    public:
        Movement();
        virtual ~Movement();

    public:
        void set(uint8_t type, int32_t parameter);
        void process();
        bool is_done();

    private:
        void forward_step();

    private:
        int32_t initial_angle;
        int32_t initial_angular_rate ;

        int32_t initial_left_distance;
        int32_t initial_right_distance;
        int32_t initial_distance;

        float initial_left_speed;
        float initial_right_speed;

    private:
        uint8_t type;
        int32_t parameter;
        bool done;

        PID forward_pid;


};

#endif
