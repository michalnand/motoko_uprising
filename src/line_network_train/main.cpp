#include <timer.h>
#include <iostream>


#include <classification_experiment.h>

#include <dataset_line.h>

int main()
{
  DatasetLine dataset;

  JsonConfig parameters("experiments.json");


  for (unsigned int i = 0; i < parameters.result["experiments"].size(); i++)
  {
    std::cout << "processing experiment " << i << "\n";

    std::string config_dir = parameters.result["experiments"][i].asString();
    ClassificationExperiment experiment(dataset, config_dir);
    experiment.run();
  }

  std::cout << "program done\n";

  return 0;
}
