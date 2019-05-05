#ifndef _DATASET_LINE_SCAN_CAMERA_H_
#define _DATASET_LINE_SCAN_CAMERA_H_

#include "dataset_interface.h"

#include <json_config.h>

#include <vector>
#include <string>

class DatasetLineScanCamera: public DatasetInterface
{
    public:
        DatasetLineScanCamera(std::vector<std::string> dataset_dirs);
        virtual ~DatasetLineScanCamera();

    private:
        void load_dir(std::string path);
        void load_file(std::string file_name);

        sDatasetItem create_item(std::string file_name, bool mirror = false, float white_noise_level = 0.0, float luma_noise_level = 0.0);
        float rnd(float min, float max);

    private:

        float white_noise_level;
        float luma_noise_level;
        float testing_ratio;

        unsigned int augmentations_count ;

};

#endif
