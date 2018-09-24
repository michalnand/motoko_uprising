#ifndef _WIDGET_MODEL_FRAME_H_
#define _WIDGET_MODEL_FRAME_H_

#include "widget_frame.h"
#include "obj_model.h"

class WidgetModelFrame: public WidgetFrame
{
  protected:
    float rx, ry, rz;
    float sx, sy, sz;

    ObjModel model;

  public:
    WidgetModelFrame();

    WidgetModelFrame(GLVisualisation &visualisation_, Variables &variables_, Json::Value &params_);


    WidgetModelFrame(WidgetModelFrame& other);
    WidgetModelFrame(const WidgetModelFrame& other);

    virtual ~WidgetModelFrame();

  public:
    virtual void render();
};

#endif
