#include "dataset_line.h"

#include <math.h>

DatasetLine::DatasetLine()
{
  classes_count  = 7;


  width          = 8;
  height         = width;
  channels       = 1;

  white_noise_level           = 0.1;
  brightness_noise_level      = 1.0;
  salt_and_pepper_noise_level = 0.02;


  unsigned int testing_count  = classes_count*1000;
  unsigned int training_count = testing_count*20;


  training.resize(classes_count);

  create(training_count, false);
  create(testing_count, true);

  print();


  for (unsigned int i = 0; i < 20; i++)
    print_testing_item(i);
/*
  save_to_txt_testing("testing_line.txt");
  save_to_txt_training("training_line.txt");
*/
}

DatasetLine::~DatasetLine()
{

}

void DatasetLine::create(unsigned int count, bool testing)
{
  sDatasetItem item;

  for (unsigned int i = 0; i < count; i++)
  {
    auto item = create_item();

    if (testing)
      add_testing(item);
    else
      add_training(item);
  }
}


sDatasetItem DatasetLine::create_item()
{
  sDatasetItem result;

  switch (rand()%2)
  {
    case 0: result = make_curved_item(); break;
    case 1: result = make_shifted_item(); break;
  }

  result = make_shifted_item();


  add_white_noise(result.input, white_noise_level);
  add_brightness_noise(result.input, brightness_noise_level);
  add_salt_and_pepper_noise(result.input, salt_and_pepper_noise_level);


  normalise_input(result.input);



  return result;
}


float DatasetLine::rnd(float min, float max)
{
  float v = (rand()%10000000)/10000000.0;

  float result = v*(max - min) + min;
  return result;
}

void DatasetLine::set_input(std::vector<float> &input, int x, int y, float value)
{
  if ((x >= 0)&&(y >= 0)&&(x < (int)width)&&(y < (int)height))
  {
    unsigned int idx = y*width + x;
    input[idx] = value;
  }
}


float DatasetLine::interpolate(float x, float y, float x0, float y0)
{
  float result = 0.0;

  result+= pow(x - x0, 2.0);
  result+= pow(y - y0, 2.0);

  result = exp(-result);

  return result;
}


void DatasetLine::normalise_input(std::vector<float> &input)
{
  for (unsigned int y = 0; y < height; y++)
  {
    float max = -1000000.0;
    float min = -max;

    for (unsigned int x = 0; x < width; x++)
    {
      float v = input[y*width + x];
      if (v > max)
        max = v;
      if (v < min)
        min = v;
    }

    float k = 0.0;
    float q = 0.0;

    if (max > min)
    {
      k = 1.0/(max - min);
      q = 1.0 - k*max;

      for (unsigned int x = 0; x < width; x++)
        input[y*width + x] = k*input[y*width + x] + q;
    }
  }
}


void DatasetLine::add_white_noise(std::vector<float> &vector, float value)
{
  for (unsigned int i = 0; i < vector.size(); i++)
    vector[i]+= rnd(-value, value);
}

void DatasetLine::add_brightness_noise(std::vector<float> &vector, float value)
{
  float noise = rnd(-value, value);
  for (unsigned int i = 0; i < vector.size(); i++)
    vector[i]+= noise;
}

void DatasetLine::add_salt_and_pepper_noise(std::vector<float> &vector, float value)
{
  for (unsigned int i = 0; i < vector.size(); i++)
  {
    if (rnd(0, 1) < value)
    {
      if (rnd(0, 1) < 0.5)
        vector[i] = 1.0;
      else
        vector[i] = 0.0;
    }
  }
}




sDatasetItem DatasetLine::make_curved_item()
{
  sDatasetItem result;
  result.input.resize(width*height*channels);
  result.output.resize(classes_count);


  for (unsigned int i = 0; i < classes_count; i++)
    result.input[i] = 0.0;

  for (unsigned int i = 0; i < classes_count; i++)
    result.output[i] = 0.0;

  float PI      = 3.141592654;
  float theta   = rnd(-PI/2, PI/2);

  float x0  = width/2.0 + (width*0.125)*rnd();
  float y0  = 0.0;

  float x1  = x0 + width*2.0*sin(theta);
  float y1  = y0 + width*2.0*cos(theta);

  unsigned int steps = width*10;

  for (unsigned int t = 0; t < steps; t++)
  {
    float t_ = t*1.0/steps;

    float x = (x1 - x0)*t_ + x0;
    float y = (y1 - y0)*t_ + y0;

    int xa = floor(x);
    int ya = floor(y);
    int xb = ceil(x);
    int yb = ceil(y);
    int xc = trunc(x);
    int yc = trunc(y);

    set_input(result.input, xa, height - 1 - ya, interpolate(xa, ya, x, y));
    set_input(result.input, xb, height - 1 - yb, interpolate(xb, yb, x, y));
    set_input(result.input, xc, height - 1 - yc, interpolate(xc, yc, x, y));
  }

  int angle_steps = 10000;
  int angle = ((theta*angle_steps)/(PI/2.0) + angle_steps)/2;

  unsigned int class_id = angle/(angle_steps/classes_count);

  result.output[class_id] = 1.0;
  return result;
}






sDatasetItem DatasetLine::make_shifted_item()
{
  sDatasetItem result;
  result.input.resize(width*height*channels);
  result.output.resize(classes_count);


  for (unsigned int i = 0; i < classes_count; i++)
    result.input[i] = 0.0;

  for (unsigned int i = 0; i < classes_count; i++)
    result.output[i] = 0.0;

  float center_normalised = (rnd() + 1.0)/2.0;

  float x0  = width*center_normalised;
  float y0  = 0.0;

  float x1  = x0 + rnd()*2.0/width;
  float y1  = width;

  unsigned int steps = width*10;

  for (unsigned int t = 0; t < steps; t++)
  {
    float t_ = t*1.0/steps;

    float x = (x1 - x0)*t_ + x0;
    float y = (y1 - y0)*t_ + y0;

    int xa = floor(x);
    int ya = floor(y);
    int xb = ceil(x);
    int yb = ceil(y);
    int xc = trunc(x);
    int yc = trunc(y);

    set_input(result.input, xa, height - 1 - ya, interpolate(xa, ya, x, y));
    set_input(result.input, xb, height - 1 - yb, interpolate(xb, yb, x, y));
    set_input(result.input, xc, height - 1 - yc, interpolate(xc, yc, x, y));
  }

  int position_steps    = 10000;
  int position          = (center_normalised + 0*0.5/width)*position_steps;
  int class_id = position/(position_steps/classes_count);

  if (class_id < 0)
    class_id = 0;
  if (class_id >= (int)classes_count)
    class_id = classes_count-1;

  result.output[class_id] = 1.0;

  return result;
}
