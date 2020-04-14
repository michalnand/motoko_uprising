#include "json_config.h"

#include <iostream>
#include <sstream>
#include <fstream>

JsonConfig::JsonConfig()
{

}

JsonConfig::JsonConfig(std::string json_file_name)
{
    load(json_file_name);
}

JsonConfig::~JsonConfig()
{

}

void JsonConfig::load(std::string json_file_name)
{
    std::ifstream inFile;
    inFile.open(json_file_name);

    if (inFile.is_open())
    {
        std::stringstream strStream;
        strStream << inFile.rdbuf();

        std::string str = strStream.str();

        //parse file
        Json::Reader json_reader;
        json_reader.parse(str, result);
    }
    else
    {
        std::cout << "JsonConfig file opening error " << json_file_name;
    }

    inFile.close();
}


void JsonConfig::save(std::string file_name)
{
    std::ofstream json_file;
    json_file.open(file_name);
    json_file << result;
    json_file.close();
}

Json::Value JsonConfig::get()
{
    return result;
}