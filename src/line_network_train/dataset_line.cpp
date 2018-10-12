#include "dataset_line.h"

#include <math.h>
#include <image_save.h>

DatasetLine::DatasetLine()
{
  width          = 8;
  height         = width;
  channels       = 1;

  classes_count  = 5;
  scale = 4;

  area_width   = 74*scale;
  area_length  = 60*scale;
  line_width   = 15*scale;

  luma_noise_level  = 1.0;
  white_noise_level = 0.2;

  straight_rotation_noise_level = 0.1;



  area.resize(area_length);
  for (unsigned int j = 0; j < area.size(); j++)
    area[j].resize(area_width);

  for (unsigned int j = 0; j < area_length; j++)
    for (unsigned int i = 0; i < area_width; i++)
      area[j][i] = 0.0;

  area_downsampled.resize(height);
  for (unsigned int j = 0; j < area_downsampled.size(); j++)
    area_downsampled[j].resize(width);

  for (unsigned int j = 0; j < height; j++)
    for (unsigned int i = 0; i < width; i++)
      area_downsampled[j][i] = 0.0;




  unsigned int training_count = classes_count*4000;
  unsigned int testing_count  = classes_count*500;

  training.resize(classes_count);

  for (unsigned int i = 0; i < training_count; i++)
  {
    auto item = create_item();
    add_training(item);
  }

  for (unsigned int i = 0; i < testing_count; i++)
  {
    auto item = create_item();
    add_testing(item);
  }



  for (unsigned int i = 0; i < 50; i++)
  {

    unsigned int line_position = rand()%area_width;

    unsigned int line_pos = convert_raw_line_position(line_position);
    float rotation = rnd(-straight_rotation_noise_level, straight_rotation_noise_level);

    area_shifted_line(line_position, rotation);

    downsample(area_downsampled, area);

    add_noise(area_downsampled);

    {
      std::string file_name;
      file_name = "dataset_examples/"  + std::to_string(line_pos) + "_" + std::to_string(i) + ".png";
      save_image(file_name);
    }
    {
      std::string file_name;
      file_name = "dataset_examples/"  + std::to_string(line_pos) + "_" + std::to_string(i) +"_D" + ".png";
      save_image_downsampled(file_name);
    }
  }

  print();
}

DatasetLine::~DatasetLine()
{

}


sDatasetItem DatasetLine::create_item()
{
  sDatasetItem result;

  unsigned int line_position = rand()%area_width;

  unsigned int line_pos = convert_raw_line_position(line_position);
  float rotation = rnd(-straight_rotation_noise_level, straight_rotation_noise_level);

  area_shifted_line(line_position, rotation);

  downsample(area_downsampled, area);

  add_noise(area_downsampled);

  result.input.resize(width*height*channels);
  result.output.resize(classes_count);


  unsigned int ptr = 0;
  for (unsigned int j = 0; j < height; j++)
    for (unsigned int i = 0; i < width; i++)
    {
      result.input[ptr] = area_downsampled[j][i];
      ptr++;
    }

  for (unsigned int j = 0; j < classes_count; j++)
    result.output[j] = 0.0;
  result.output[line_pos] = 1.0;


  return result;
}


unsigned int DatasetLine::area_shifted_line(unsigned int line_position, float rotation)
{
  unsigned int lw_half = line_width/2;

  if (line_position < lw_half)
    line_position = lw_half;

  if ((line_position+lw_half) >= area_width)
    line_position = area_width-lw_half;

  for (unsigned int y = 0; y < area_length; y++)
    for (unsigned int x = 0; x < area_width; x++)
      area[y][x] = 0.0;

  float a = 1.0;
  float b = 0.0;

  b = rotation;

  float c_left  = line_position - lw_half;
  float c_right = line_position + lw_half;

    for (unsigned int y = 0; y < area_length; y++)
      for (unsigned int x = 0; x < area_width; x++)
      {
        if ( ((a*x + b*y - c_left) > 0.0) && ((a*x + b*y - c_right) < 0.0) )
          area[y][x] = 1.0;
      }

/*
  for (unsigned int j = 0; j < area_length; j++)
    for (unsigned int i = (line_position-lw_half); i < (line_position+lw_half); i++)
      area[j][i] = 1.0;
*/
  return line_position;
}

unsigned int DatasetLine::convert_raw_line_position(unsigned int line_position)
{
  return (classes_count*line_position)/area_width;
}

void DatasetLine::downsample(std::vector<std::vector<float>> &area_output, std::vector<std::vector<float>> &area_input)
{
  unsigned int kw = area_input[0].size()/area_output[0].size();
  unsigned int kh = area_input.size()/area_output.size();


  for (unsigned int y = 0; y < area_output.size(); y++)
  for (unsigned int x = 0; x < area_output[y].size(); x++)
  {
    float sum = 0.0;
    for (unsigned int j = 0; j < kh; j++)
    for (unsigned int i = 0; i < kw; i++)
      sum+= area_input[y*kh + j][x*kw + i];

    area_output[y][x] = sum/(kw*kh);
  }
}

void DatasetLine::add_noise(std::vector<std::vector<float>> &area)
{
  float luma_noise = luma_noise_level*rnd(0.0, 1.0);


  for (unsigned int y = 0; y < area.size(); y++)
  for (unsigned int x = 0; x < area[y].size(); x++)
  {
    area[y][x] = luma_noise + (1.0 - white_noise_level)*area[y][x] + white_noise_level*(rand()%10000)/10000.0;
  }
}

void DatasetLine::save_image(std::string file_name)
{
  std::vector<float> v(area_length*area_width);

  unsigned int ptr = 0;
  for (unsigned int j = 0; j < area_length; j++)
    for (unsigned int i = 0; i < area_width; i++)
    {
      v[ptr] = area[j][i];
      ptr++;
    }

  ImageSave image(area_width, area_length, true);
  image.save(file_name, v);
}

void DatasetLine::save_image_downsampled(std::string file_name)
{
  std::vector<float> v(height*width);

  unsigned int ptr = 0;
  for (unsigned int j = 0; j < height; j++)
    for (unsigned int i = 0; i < width; i++)
    {
      v[ptr] = area_downsampled[j][i];
      ptr++;
    }

  ImageSave image(height, width, true);
  image.save(file_name, v);
}


float DatasetLine::rnd(float min, float max)
{
  float v = (rand()%100000)/100000.0;

  return (max - min)*v + min;
}
