#include "json_parser.h"
#include <iostream>
#include <sstream>

JsonParser::JsonParser()
{
    updated_    = false;

    result_str  = "";
    result = "";


    state       = 0;
    pattern_idx = 0;

    start_pattern = "#JSON\n";
    end_pattern   = "#END\n";
}

JsonParser::~JsonParser()
{

}


void JsonParser::add(char c)
{
    switch (state)
    {
        case 0:
                if (check_pattern(c, start_pattern))
                    state = 1;
                result_str  = "";
                break;

        case 1:
                result_str+= c;
                if (check_pattern(c, end_pattern))
                {
                    state = 0;

                    result_str = result_str.substr(0, result_str.size() - end_pattern.size());



                    std::cout << "\nparsing : \n";
                    std::cout << result_str << "\n\n\n";

                    Json::Reader json_reader;
                    json_reader.parse(result_str, result);

                    result = result["debug"];


                    updated_ = true;

                }
                break;
    }

}


bool JsonParser::updated()
{
    return updated_;
}

Json::Value& JsonParser::get()
{
    updated_ = false;
    return result;
}


bool JsonParser::check_pattern(char c, std::string pattern)
{
    if (pattern_idx < pattern.size())
    {
        if (c == pattern[pattern_idx])
            pattern_idx++;
        else
            pattern_idx = 0;

        if (pattern_idx >= pattern.size())
        {
            pattern_idx = 0;
            return true;
        }
    }

    return false;
}
