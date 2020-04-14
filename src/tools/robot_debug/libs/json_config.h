#ifndef _JSON_CONFIG_H_
#define _JSON_CONFIG_H_

#include <string>

#include <json/json.h>
#include <json/value.h>

#include <json/reader.h>
#include <json/writer.h>

class JsonConfig
{
    public:
        Json::Value result;

    public:
        JsonConfig();
        JsonConfig(std::string json_file_name);
        virtual ~JsonConfig();

        void load(std::string json_file_name);
        void save(std::string file_name);

        Json::Value get();
};


#endif