#include "load_texture.h"

#include <vector>
#include <CImg.h>


LoadTexture::LoadTexture()
{
  textures_count = 0;
}

LoadTexture::LoadTexture(std::vector<std::string> &textures_file_names)
{
  load(textures_file_names);
}

LoadTexture::~LoadTexture()
{

}

std::vector<GLuint> LoadTexture::load(std::vector<std::string> &textures_file_names)
{
  textures_count = textures_file_names.size();

  textures.resize(textures_count);

  glGenTextures(textures_count, &textures[0]);

  for (unsigned int i = 0; i < textures_count; i++)
  {
    cimg_library::CImg<unsigned char> image(textures_file_names[i].c_str());

    unsigned int width  = image.width();
    unsigned int height = image.height();

    std::vector<unsigned char> image_data;
    image_data.resize(width*height*3);

    unsigned int ptr = 0;
    for (unsigned int y = 0; y < height; y++)
      for (unsigned int x = 0; x < width; x++)
        for (unsigned int ch = 0; ch < 3; ch++)
        {
          image_data[ptr] = *(image.data(x, y, 0, ch));
          ptr++;
        }

    glBindTexture(GL_TEXTURE_2D, textures[i]);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0,
        GL_RGB, GL_UNSIGNED_BYTE, (GLvoid*)(&image_data[0]));
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  }

  return textures;
}



unsigned int LoadTexture::get_textures_count()
{
  return textures_count;
}
