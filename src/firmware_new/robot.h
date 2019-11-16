#ifndef _ROBOT_H_
#define _ROBOT_H_

#include <embedded_libs.h>

#include <movement.h>

#include <ai/LineNetwork/LineNetwork.h>
#include <ai/line_predictor.h>




class Robot
{
    public:
        Robot();
        virtual ~Robot();

        void main();

    private:
        void line_following();
        void allign_to_line(unsigned int cycles);
        void spot_move();


    private:
        PID steering_pid;
        Ramp speed_ramp;

        LineNetwork   cnn;
        LinePredictor line_predictor;

        Movement movement;
};

#endif
