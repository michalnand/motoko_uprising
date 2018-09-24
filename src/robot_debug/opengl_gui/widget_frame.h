#ifndef _WIDGET_FRAME_H_
#define _WIDGET_FRAME_H_

#include "widget.h"

class WidgetFrame: public Widget
{
  protected:
    float width;
    float height;
    std::string label;
    bool filled;

    std::string font_size;

    float fr, fg, fb;
    float frame_width;

  public:
    WidgetFrame();

    WidgetFrame(GLVisualisation &visualisation_, Variables &variables_, Json::Value &params_);


    WidgetFrame(WidgetFrame& other);
    WidgetFrame(const WidgetFrame& other);

    virtual ~WidgetFrame();

  public:
    virtual void render();

  protected:
    void render_frame();
};

#endif
