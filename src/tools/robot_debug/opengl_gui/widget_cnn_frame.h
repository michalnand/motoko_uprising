#ifndef _WIDGET_CNN_FRAME_H_
#define _WIDGET_CNN_FRAME_H_

#include "widget_frame.h"

class WidgetCNNFrame: public WidgetFrame
{
  protected:
    int texture_id;
    float cr, cg ,cb;
  public:
    WidgetCNNFrame();

    WidgetCNNFrame(GLVisualisation &visualisation_, Variables &variables_,  LoadTextures &textures_, Json::Value &params_);


    WidgetCNNFrame(WidgetCNNFrame& other);
    WidgetCNNFrame(const WidgetCNNFrame& other);

    virtual ~WidgetCNNFrame();

  public:
    virtual void render();

  protected:
    void split(std::vector<std::string>& tokens, std::string &str, std::string &splitBy);
};

#endif
