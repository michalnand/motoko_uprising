#include "widget_distance_sensor.h"

#include <math.h>
#include <iostream>
#include <iomanip>
#include <sstream>

WidgetDistanceSensor::WidgetDistanceSensor()
            :WidgetFrame()
{

}


WidgetDistanceSensor::WidgetDistanceSensor(GLVisualisation &visualisation_, Variables &variables_,  LoadTextures &textures_, Json::Value &params_)
            :WidgetFrame(visualisation_, variables_, textures_, params_)
{

}


WidgetDistanceSensor::WidgetDistanceSensor(WidgetDistanceSensor& other)
            :WidgetFrame(other)
{

}

WidgetDistanceSensor::WidgetDistanceSensor(const WidgetDistanceSensor& other)
            :WidgetFrame(other)
{

}

WidgetDistanceSensor::~WidgetDistanceSensor()
{

}


void WidgetDistanceSensor::render()
{
  if (m_visible)
  {
    visualisation->push();
    visualisation->translate(x, y, z);

    render_frame();

    std::vector<float> values(variables->v[params["variable"]["name"].asString()].size());

    for (unsigned int i = 0; i < values.size(); i++)
    {
        values[i] = variables->v[params["variable"]["name"].asString()][i].asFloat();
    }

    float pi = 3.141592654;
    float radius = width/2.5;

    float arc_length = 2.0*pi/values.size();
    float offset = 0.0;

    visualisation->set_color(0.6, 0.6, 0.6);
    visualisation->paint_circle(radius);

    for (unsigned int i = 0; i < values.size(); i++)
    {
        float cl = values[i];
        if (cl < 0.1)
            cl = 0.1;
        if (cl > 1.0)
            cl = 1.0;

        visualisation->set_color(0.0, cl, 0.0);
        visualisation->paint_circle_arc(radius, arc_length*0.9, offset - arc_length/4.0);

        visualisation->push();

            std::string value = get_rounded(values[i], 3);
            float  angle = offset - arc_length/4.0;

            visualisation->set_color(0.2, 1.0 -cl, 0.2);
            visualisation->print(0.8*radius*cos(angle), 0.8*radius*sin(angle), 0, value);

        visualisation->pop();


        offset+= arc_length;
    }


    visualisation->pop();

    for (unsigned int i = 0; i < widgets.size(); i++)
        widgets[i]->render();
    visualisation->pop();
  }
}


std::string WidgetDistanceSensor::get_rounded(float value, unsigned int precision)
{
  std::stringstream stream;
  stream << std::fixed << std::setprecision(precision) << value;
  std::string str = stream.str();

  return str;
}
