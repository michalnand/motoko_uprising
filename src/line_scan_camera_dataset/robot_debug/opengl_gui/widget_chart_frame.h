#ifndef _WIDGET_CHART_FRAME_H_
#define _WIDGET_CHART_FRAME_H_

#include "widget_frame.h"

class WidgetChartFrame: public WidgetFrame
{
  protected:
    float br, bg ,bb;

  protected:
    float min;
    float max;
    float min_out;
    float max_out;

    float k, q;

    bool show_values;

  public:
    WidgetChartFrame();

    WidgetChartFrame(GLVisualisation &visualisation_, Variables &variables_,  LoadTextures &textures_, Json::Value &params_);


    WidgetChartFrame(WidgetChartFrame& other);
    WidgetChartFrame(const WidgetChartFrame& other);

    virtual ~WidgetChartFrame();

  public:
    virtual void render();

  protected:
    float convert(float value);
    std::string get_rounded(float value, unsigned int precision);

};

#endif
