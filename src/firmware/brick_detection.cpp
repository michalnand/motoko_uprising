#include "brick_detection.h"

#include <drivers/drivers.h>


BrickDetection::BrickDetection()
{
    for (unsigned int i = 0; i < this->detection_pattern.size(); i++)
        this->detection_pattern[i] = true;

    this->ignore_distance           = 0;
    this->last_detection_distance   = 0;
    this->obstacle_idx              = 0;
}

BrickDetection::~BrickDetection()
{

}


void BrickDetection::init(Array<bool, MAX_OBSTACLES_COUNT> &detection_pattern, int ignore_distance)
{
    this->detection_pattern         = detection_pattern;
    this->ignore_distance           = ignore_distance;
    this->last_detection_distance   = 0;
    this->obstacle_idx              = 0;
}

bool BrickDetection::process(sDistanceSensor &distance_sensor_result)
{
    bool result = false;

    if (distance_sensor.result.front_obstacle)
    {
        auto dist = encoder_sensor.get_distance() - this->last_detection_distance;
        dist = abs(dist);

        this->last_detection_distance = encoder_sensor.get_distance();

        if (dist > this->ignore_distance)
        {
            if (this->detection_pattern[obstacle_idx] == true)
            {
                result = true;
            }

            if (this->obstacle_idx < this->detection_pattern.size() - 1)
                this->obstacle_idx++;
        }
    }

    return result;
}
