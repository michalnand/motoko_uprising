#ifndef _LOAD_TEXTURE_H_
#define _LOAD_TEXTURE_H_

#include <GL/gl.h>
#include <string>
#include <vector>

class LoadTexture
{
  private:
    std::vector<GLuint> textures;
    unsigned int textures_count;

  public:
    LoadTexture();
    LoadTexture(std::vector<std::string> &textures_file_names);
    virtual ~LoadTexture();

    std::vector<GLuint> load(std::vector<std::string> &textures_file_names);
    std::vector<GLuint>& get()
    {
      return textures;
    }
    unsigned int get_textures_count();



};


#endif
