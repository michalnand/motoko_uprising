#ifndef _WIDGET_LABEL_H_
#define _WIDGET_LABEL_H_

#include "widget.h"

class WidgetLabel: public Widget
{
  public:
    WidgetLabel();

    WidgetLabel(GLVisualisation &visualisation_, Variables &variables_, Json::Value &params_);


    WidgetLabel(WidgetLabel& other);
    WidgetLabel(const WidgetLabel& other);

    virtual ~WidgetLabel();



  public:
    void render();
};

#endif
