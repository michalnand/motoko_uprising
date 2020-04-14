#include "load_textures.h"

#include <vector>
#include <CImg.h>

#include <iostream>

LoadTextures::LoadTextures()
{
  textures_count = 0;
}

LoadTextures::LoadTextures(Json::Value json)
{
  load(json);
}

LoadTextures::~LoadTextures()
{

}

void LoadTextures::load(Json::Value json)
{
  textures_count = json["textures"].size();

  textures.resize(textures_count);
  map.clear();

  glGenTextures(textures_count, &textures[0]);

  for (unsigned int i = 0; i < textures_count; i++)
  {
    std::string texture_file_name = json["textures"][i]["file_name"].asString();
    unsigned int texture_id = json["textures"][i]["id"].asInt();

    std::count << "loading texture ";
    std::count << texture_id << " ";
    std::count << texture_file_name << "\n";

    map[texture_id] = i;

    cimg_library::CImg<unsigned char> image(texture_file_name.c_str());

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
}



unsigned int LoadTextures::get_textures_count()
{
  return textures_count;
}

GLuint LoadTextures::get(unsigned int id)
{
  unsigned int idx = map[id];
  return textures[idx];
}

GLuint LoadTextures::get_idx(unsigned int idx)
{
  return textures[idx];
}
