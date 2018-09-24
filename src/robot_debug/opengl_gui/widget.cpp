#include <iostream>

#include "widget.h"

#include "widget_label.h"
#include "widget_frame.h"
#include "widget_text_frame.h"
#include "widget_model_frame.h"

Widget::Widget()
{

}

Widget::Widget(GLVisualisation &visualisation_, Variables &variables_, Json::Value &params_)
{
  init(visualisation_, variables_, params_);
}

void Widget::init(GLVisualisation &visualisation_, Variables &variables_, Json::Value &params_)
{
  visualisation = &visualisation_;
  variables     = &variables_;
  params        = params_;

  m_type = params["type"].asString();

  x = params["position"][0].asFloat();
  y = params["position"][1].asFloat();
  z = params["position"][2].asFloat();

  r = params["color"][0].asFloat();
  g = params["color"][1].asFloat();
  b = params["color"][2].asFloat();

  auto variable_name  = params["variable"]["name"].asString();
  auto variable_value = params["variable"]["value"];
  variables->add(variable_name, variable_value);

  visible_on(); 

  std::cout << "creating widget " << params["type"].asString() << "\n";

  for (unsigned int i = 0; i < params["widgets"].size(); i++)
  {
    std::string type = params["widgets"][i]["type"].asString();

    if (type == "label")
      widgets.push_back(new WidgetLabel(visualisation_, variables_, params_["widgets"][i]));
    else
    if (type == "frame")
      widgets.push_back(new WidgetFrame(visualisation_, variables_, params_["widgets"][i]));
    else
    if (type == "text frame")
      widgets.push_back(new WidgetTextFrame(visualisation_, variables_, params_["widgets"][i]));
    else
    if (type == "model frame")
      widgets.push_back(new WidgetModelFrame(visualisation_, variables_, params_["widgets"][i]));
    else
      widgets.push_back(new Widget(visualisation_, variables_, params_["widgets"][i]));
  }
}

Widget::Widget(Widget& other)
{
  copy(other);
}

Widget::Widget(const Widget& other)
{
  copy(other);
}

Widget::~Widget()
{
  for (unsigned int i = 0; i < widgets.size(); i++)
    delete widgets[i];
}

Widget& Widget::operator= (Widget& other)
{
  copy(other);
  return *this;
}

Widget& Widget::operator= (const Widget& other)
{
  copy(other);
  return *this;
}


void Widget::copy(Widget& other)
{
  visualisation = other.visualisation;
  variables     = other.variables;
  params        = other.params;
  m_visible     = other.m_visible;

  m_type        = other.m_type;

  x = other.x;
  y = other.y;
  z = other.z;

  r = other.r;
  g = other.g;
  b = other.b;
}

void Widget::copy(const Widget& other)
{
  visualisation = other.visualisation;
  variables     = other.variables;
  params        = other.params;
  m_visible     = other.m_visible;

  m_type        = other.m_type;

  x = other.x;
  y = other.y;
  z = other.z;

  r = other.r;
  g = other.g;
  b = other.b;
}



void Widget::render()
{
  if (m_visible)
  {
    visualisation->push();

    visualisation->translate(0, 0, 0);
    visualisation->set_color(1, 1, 1);

    visualisation->print(0, 0, 0, "default widget");

    for (unsigned int i = 0; i < widgets.size(); i++)
      widgets[i]->render();


    visualisation->pop();

  }
}

void Widget::visible_on()
{
  m_visible = true;
}

void Widget::visible_off()
{
  m_visible = false;
}
