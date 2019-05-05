#ifndef _WIDGET_H_
#define _WIDGET_H_

#include <json_config.h>
#include "variables.h"
#include "glvisualisation.h"
#include "load_textures.h"

class Widget
{
  protected:

    GLVisualisation *visualisation;
    Variables       *variables;
    LoadTextures    *textures;
    Json::Value     params;

    bool            m_visible;
    std::string     m_type;

  protected:
    float x, y, z;
    float r, g, b;

  protected:
    std::vector<Widget*> widgets;

  public:
    Widget();
    Widget(GLVisualisation &visualisation_, Variables &variables_, LoadTextures &textures_, Json::Value &params_);

    virtual void init(GLVisualisation &visualisation_, Variables &variables_, LoadTextures &textures_, Json::Value &params_);

    Widget(Widget& other);
    Widget(const Widget& other);

    virtual ~Widget();
    Widget& operator= (Widget& other);
    Widget& operator= (const Widget& other);

  protected:
    void copy(Widget& other);
    void copy(const Widget& other);

  public:
    virtual void render();

  public:
    void visible_on();
    void visible_off();


};

#endif
