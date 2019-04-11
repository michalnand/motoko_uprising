#ifndef _BRICK_DETECTION_H_
#define _BRICK_DETECTION_H_

#include <array.h>
#include <distance_sensor.h>


#define MAX_OBSTACLES_COUNT     ((unsigned int)8)

class BrickDetection
{
    public:
        BrickDetection();
        virtual ~BrickDetection();

    public:
        void init(Array<bool, MAX_OBSTACLES_COUNT> &detection_pattern, int ignore_distance);

        bool process(sDistanceSensor &distance_sensor_result);

    private:
        Array<bool, MAX_OBSTACLES_COUNT> detection_pattern;
        unsigned int ignore_distance;
        int last_detection_distance;
        unsigned int obstacle_idx;
};


#endif
