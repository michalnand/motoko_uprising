#include "widget_frame.h"



WidgetFrame::WidgetFrame()
            :Widget()
{

}


WidgetFrame::WidgetFrame(GLVisualisation &visualisation_, Variables &variables_,  LoadTextures &textures_, Json::Value &params_)
            :Widget(visualisation_, variables_, textures_, params_)
{
  this->width       = params["width"].asFloat();
  this->height      = params["height"].asFloat();
  this->label       = params["label"].asString();
  this->filled      = params["filled"].asBool();

  this->font_size  = params["font size"].asString();

  this->fr = params["font color"][0].asFloat();
  this->fg = params["font color"][1].asFloat();
  this->fb = params["font color"][2].asFloat();


  this->frame_width = params["frame width"].asFloat();
}


WidgetFrame::WidgetFrame(WidgetFrame& other)
            :Widget(other)
{
  this->width       = other.width;
  this->height      = other.height;
  this->label       = other.label;
  this->filled      = other.filled;

  this->font_size  = other.font_size;

  this->fr = other.fr;
  this->fg = other.fg;
  this->fb = other.fb;

  this->frame_width = other.frame_width;
}

WidgetFrame::WidgetFrame(const WidgetFrame& other)
            :Widget(other)
{
  this->width       = other.width;
  this->height      = other.height;
  this->label       = other.label;
  this->filled      = other.filled;

  this->font_size  = other.font_size;

  this->fr = other.fr;
  this->fg = other.fg;
  this->fb = other.fb;

  this->frame_width = other.frame_width;
}

WidgetFrame::~WidgetFrame()
{

}

void WidgetFrame::render_frame()
{
  if (filled)
  {
    visualisation->push();
    visualisation->set_color(r, g, b);
    visualisation->paint_rectangle(width, height);
    visualisation->pop();
  }
  else
  {
    float size = frame_width;

    visualisation->push();

      visualisation->set_color(r, g, b);
      visualisation->translate(0, -height/2.0 - size/2.0, 0.0);
      visualisation->paint_rectangle(width, size);

    visualisation->pop();

    visualisation->push();

      visualisation->set_color(r, g, b);
      visualisation->translate(0, height/2.0 - size/2.0, 0.0);
      visualisation->paint_rectangle(width, size);

    visualisation->pop();

    visualisation->push();

      visualisation->set_color(r, g, b);
      visualisation->translate(-width/2.0 + size/2.0, 0.0, 0.0);
      visualisation->paint_rectangle(size, height);

    visualisation->pop();

    visualisation->push();

      visualisation->set_color(r, g, b);
      visualisation->translate(width/2.0 - size/2.0, 0.0, 0.0);
      visualisation->paint_rectangle(size, height);

    visualisation->pop();
  }

  visualisation->push();

    float size = 0.2;
    float height_ = size/2.0;
    float k1 = 1.0;
    float k2 = 0.5;

    visualisation->translate(0, height/2.0 + size/4.0 , 0.0);

    glBegin(GL_QUADS);

    glColor3f(r*k1, g*k1, b*k1); glVertex3f( + width/2.0,  + height_/2.0, 0.0);
    glColor3f(r*k2, g*k2, b*k2); glVertex3f( - width/2.0,  + height_/2.0, 0.0);
    glColor3f(r*k2, g*k2, b*k2); glVertex3f( - width/2.0,  - height_/2.0, 0.0);
    glColor3f(r*k1, g*k1, b*k1); glVertex3f( + width/2.0,  - height_/2.0, 0.0);

    glEnd();

  visualisation->pop();


  visualisation->push();


    visualisation->set_color(fr, fg, fb);

    if (font_size == "big")
      visualisation->print(0.02 + -width/2, height/2 + size/8.0, 0, label);
    else
      visualisation->print(0.02 + -width/2, height/2 + size/8.0, 0, label, true);

  visualisation->pop();

}

void WidgetFrame::render()
{
  if (m_visible)
  {
    visualisation->push();

    visualisation->translate(x, y, z);

    render_frame();

    for (unsigned int i = 0; i < widgets.size(); i++)
      widgets[i]->render();


    visualisation->pop();

  }
}
