#ifndef _LOAD_TEXTURES_H_
#define _LOAD_TEXTURES_H_

#include <OpenGL/gl.h>
#include <string>
#include <vector>
#include <map>

#include <json_config.h>

class LoadTextures
{
  private:
    std::map<unsigned int, unsigned int> map;
    std::vector<GLuint> textures;
    unsigned int textures_count;

  public:
    LoadTextures();
    LoadTextures(Json::Value json);
    virtual ~LoadTextures();

    void load(Json::Value json);

    unsigned int get_textures_count();

    GLuint get(unsigned int id);
    GLuint get_idx(unsigned int idx);

};


#endif
