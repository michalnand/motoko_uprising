#ifndef _VARIABLES_H_
#define _VARIABLES_H_

#include <map>
#include <string>

#include <json_config.h>

class Variables
{
  public:
    std::map<std::string, Json::Value> v;

  public:
    Variables();
    virtual ~Variables();

    void add(std::string &name, Json::Value &value);
};


#endif
