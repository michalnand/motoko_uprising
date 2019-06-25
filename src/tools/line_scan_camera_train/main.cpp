#include <timer.h>
#include <iostream>


#include <regression_experiment.h>

#include <dataset_line_scan_camera.h>

int main()
{
    std::vector<std::string> dirs;
    dirs.push_back("/home/michal/dataset/line_scan_camera/basic/");
    dirs.push_back("/home/michal/dataset/line_scan_camera/bad_light/");
    dirs.push_back("/home/michal/dataset/line_scan_camera/hill/");
    //dirs.push_back("/home/michal/dataset/line_scan_camera/edges/");

    DatasetLineScanCamera dataset(dirs);

    {
        RegressionExperiment experiment(dataset, "line_scan_camera_network_0/");
        experiment.run();
    }

    {
        RegressionExperiment experiment(dataset, "line_scan_camera_network_1/");
        experiment.run();
    }



    std::cout << "program done\n";
    return 0;
}
