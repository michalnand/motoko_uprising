#ifndef _JSON_PARSER_H_
#define _JSON_PARSER_H_

#include <vector>
#include <string>
#include <json_config.h>

class JsonParser
{
    private:

        std::string start_pattern, end_pattern;

        unsigned int state, pattern_idx;


        bool updated_;

        std::string result_str;
        Json::Value result;

    public:
        JsonParser();
        virtual ~JsonParser();

        void add(char c);

        bool updated();
        Json::Value& get();

    private:
        bool check_pattern(char c, std::string pattern);

};

#endif
