#ifndef _WIDGET_BAR_FRAME_H_
#define _WIDGET_BAR_FRAME_H_

#include "widget_frame.h"

class WidgetBarFrame: public WidgetFrame
{
  protected:
    float br, bg ,bb;

  protected:
    float min;
    float max;
    float min_out;
    float max_out;

    float k, q;

  public:
    WidgetBarFrame();

    WidgetBarFrame(GLVisualisation &visualisation_, Variables &variables_,  LoadTextures &textures_, Json::Value &params_);


    WidgetBarFrame(WidgetBarFrame& other);
    WidgetBarFrame(const WidgetBarFrame& other);

    virtual ~WidgetBarFrame();

  public:
    virtual void render();

  protected:
    float convert(float value);
    std::string get_rounded(float value, unsigned int precision);

};

#endif
