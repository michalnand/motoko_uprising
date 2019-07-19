#ifndef _ROBOT_DEBUG_H_
#define _ROBOT_DEBUG_H_

#include <vector>
#include <string>
#include <opengl_gui/gl_gui.h>
#include <json_config.h>

class RobotDebug
{
  private:
    std::vector<std::string> lines;

  public:
    RobotDebug();
    ~RobotDebug();

    void update(GLGUI &gui, Json::Value &json);
    std::string get_rounded(float value, unsigned int precision);


};

#endif
