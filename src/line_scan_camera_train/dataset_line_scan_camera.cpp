#include "dataset_line_scan_camera.h"

#include <math.h>
#include <json_config.h>
#include <experimental/filesystem>
#include <iostream>

DatasetLineScanCamera::DatasetLineScanCamera(std::vector<std::string> dataset_dirs)
{
    width          = 128;
    height         = 1;
    channels       = 1;

    white_noise_level = 0.1;
    luma_noise_level  = 0.2;
    testing_ratio     = 0.1;

    augmentations_count = 8;

    for (unsigned int i = 0; i < dataset_dirs.size(); i++)
    {
        std::cout << "processing dir " << dataset_dirs[i] << "\n";
        load_dir(dataset_dirs[i]);
    }

    print();
    print_testing_item(1000);
}

DatasetLineScanCamera::~DatasetLineScanCamera()
{

}


void DatasetLineScanCamera::load_dir(std::string path)
{
    for (auto & p : std::experimental::filesystem::directory_iterator(path))
    {
        std::string file_name;
        file_name = p.path();

        auto extension = std::experimental::filesystem::path(file_name).extension();

        if (extension == ".json")
        {
            load_file(file_name);
        }
    }
}


void DatasetLineScanCamera::load_file(std::string file_name)
{
    bool mirror;

    for (unsigned int i = 0; i < augmentations_count; i++)
    {
        if (i%2)
            mirror = true;
        else
            mirror = false;

        auto item = create_item(file_name, mirror, white_noise_level, luma_noise_level);

        if (rnd(0.0, 1.0) < testing_ratio)
            add_testing(item);
        else
            add_training_for_regression(item);
    }
}

sDatasetItem DatasetLineScanCamera::create_item(std::string file_name, bool mirror, float white_noise_level, float luma_noise_level)
{
    sDatasetItem result;

    result.input.resize(get_input_size());
    result.output.resize(1);

    std::vector<float> camera_input(get_input_size());

    JsonConfig json(file_name);


    for (unsigned int i = 0; i < camera_input.size(); i++)
        camera_input[i] = json.result["line_camera_pixels"][i].asFloat();

    for (unsigned int i = 0; i < camera_input.size(); i++)
        result.input[i] = (camera_input[i]/256.0 - 0.5)*2.0;

    for (unsigned int i = 0; i < camera_input.size(); i++)
    {
        result.input[i] = (1.0 - white_noise_level)*result.input[i] + white_noise_level*rnd(-1.0, 1.0);
        result.input[i]+= luma_noise_level*rnd(-1.0, 1.0);

        if (result.input[i] > 1.0)
            result.input[i] = 1.0;
        if (result.input[i] < -1.0)
            result.input[i] = -1.0;
    }


    result.output[0] = json.result["sensors"]["line_sensor"]["center_line_position"].asFloat();

    if (mirror)
    {
        unsigned int count = camera_input.size() - 1;

        for (unsigned int i = 0; i < (camera_input.size()/2); i++)
        {
            float tmp = result.input[i];
            result.input[i] = result.input[count - i];
            result.input[count - i] = tmp;
        }

        result.output[0]*= -1.0;
    }

    return result;
}



float DatasetLineScanCamera::rnd(float min, float max)
{
  float v = (rand()%100000)/100000.0;

  return (max - min)*v + min;
}
