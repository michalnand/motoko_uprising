#include "variables.h"


Variables::Variables()
{

}

Variables::~Variables()
{

}

void Variables::add(std::string &name, Json::Value &value)
{
  v[name] = value;
}
