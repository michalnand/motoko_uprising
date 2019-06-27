#include <iostream>
#include <dataset_line.h>

#include <classification_experiment.h>

int main()
{
    DatasetLine dataset(8, 8);

    ClassificationExperiment experiment(dataset, "network_2/", "network_config.json");
    experiment.run();
    std::cout << "program done\n";

    return 0;
}
