#ifndef _WIDGET_TEXT_FRAME_H_
#define _WIDGET_TEXT_FRAME_H_

#include "widget_frame.h"

class WidgetTextFrame: public WidgetFrame
{
  protected:
    float cr, cg ,cb;
  public:
    WidgetTextFrame();

    WidgetTextFrame(GLVisualisation &visualisation_, Variables &variables_, Json::Value &params_);


    WidgetTextFrame(WidgetTextFrame& other);
    WidgetTextFrame(const WidgetTextFrame& other);

    virtual ~WidgetTextFrame();

  public:
    virtual void render();

  protected:
    void split(std::vector<std::string>& tokens, std::string &str, std::string &splitBy);
};

#endif
