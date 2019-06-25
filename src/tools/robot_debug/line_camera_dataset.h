#ifndef _LINE_CAMERA_DATASET_H_
#define _LINE_CAMERA_DATASET_H_

#include <vector>
#include <string>
#include <opengl_gui/gl_gui.h>
#include <json_config.h>

class LineCameraDataset
{
  private:
    std::vector<std::string> lines;
    JsonConfig json_result;

  public:
    LineCameraDataset();
    virtual ~LineCameraDataset();


    void update_sensors(GLGUI &gui, Json::Value &json);
    void update_camera(GLGUI &gui, Json::Value &json);
    std::string get_rounded(float value, unsigned int precision);

    void save_result(std::string file_name);
};

#endif
