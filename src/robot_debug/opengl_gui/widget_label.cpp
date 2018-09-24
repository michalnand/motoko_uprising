#include "widget_label.h"



WidgetLabel::WidgetLabel()
            :Widget()
{

}


WidgetLabel::WidgetLabel(GLVisualisation &visualisation_, Variables &variables_, Json::Value &params_)
            :Widget(visualisation_, variables_, params_)
{

}


WidgetLabel::WidgetLabel(WidgetLabel& other)
            :Widget(other)
{

}

WidgetLabel::WidgetLabel(const WidgetLabel& other)
            :Widget(other)
{

}

WidgetLabel::~WidgetLabel()
{

}


void WidgetLabel::render()
{
  if (m_visible)
  {
    visualisation->push();

    visualisation->translate(x, y, z);
    visualisation->set_color(r, g, b);

    std::string value = variables->v[params["variable"]["name"].asString()].asString();

    visualisation->print(0, 0, 0, value);

    for (unsigned int i = 0; i < widgets.size(); i++)
      widgets[i]->render();


    visualisation->pop();

  }
}
