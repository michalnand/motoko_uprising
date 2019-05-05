#ifndef _GL_GUI_H_
#define _GL_GUI_H_

#include <json_config.h>
#include <log.h>

#include "variables.h"
#include "glvisualisation.h"
#include "load_textures.h"
#include "widget.h"
#include "obj_model.h"

class GLGUI
{
  protected:
    Json::Value json;

    unsigned int width, height;
    unsigned int background_texture;

    Variables variables;
    GLVisualisation visualisation;
    LoadTextures textures;

    Log result_log;

    float time;

  protected:
    Widget widgets;
    ObjModel model;


  public:
    GLGUI(std::string config_file_name);
    virtual ~GLGUI();
    void init(Json::Value &json);

    void main();

    void set_variable(std::string name, Json::Value value);
};

#endif
