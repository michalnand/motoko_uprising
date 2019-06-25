#ifndef _WIDGET_DISTANCE_SENSOR_H_
#define _WIDGET_DISTANCE_SENSOR_H_

#include "widget_frame.h"
#include "obj_model.h"

class WidgetDistanceSensor: public WidgetFrame
{
  public:
    WidgetDistanceSensor();

    WidgetDistanceSensor(GLVisualisation &visualisation_, Variables &variables_,  LoadTextures &textures_, Json::Value &params_);


    WidgetDistanceSensor(WidgetDistanceSensor& other);
    WidgetDistanceSensor(const WidgetDistanceSensor& other);

    virtual ~WidgetDistanceSensor();

  public:
    virtual void render();

private:
    std::string get_rounded(float value, unsigned int precision);

};

#endif
