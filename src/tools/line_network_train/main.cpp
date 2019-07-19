#include <iostream>
#include <dataset_line.h>

#include <classification_experiment.h>
#include <embedded_network_export.h>
#include <embedded_network_test.h>

#include <export/LineNetwork.h>

int main()
{
    std::string network_path = "network_3/";

    DatasetLine dataset(8, 8);
    ClassificationExperiment experiment(dataset, network_path, "network_config.json");
    experiment.run();

    EmbeddedNetworkExport net_export(network_path + "trained/network_config.json");
    net_export.process(network_path + "export/", "LineNetwork");


    /*
    DatasetLine dataset(8, 8);
    LineNetwork network;

    EmbeddedNetworkTest test(dataset, network);
    test.process();
    */

    std::cout << "program done\n";
    return 0;
}
