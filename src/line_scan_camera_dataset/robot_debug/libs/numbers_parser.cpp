#include "numbers_parser.h"

NumbersParser::NumbersParser()
{
  updated_ = false;
}

NumbersParser::~NumbersParser()
{

}


void NumbersParser::add(char c)
{
  if (is_number(c))
    str_number+= c;
  else
  if ((c == '.') || (c == '-'))
    str_number+= c;
  else
  if (c == ' ')
  {
    if (str_number.size() > 0)
    {
      float tmp = std::stof(str_number);
      numbers_line.push_back(tmp);
    }

    str_number.clear();
  }
  else
  if (c == '\n')
  {
    if (str_number.size() > 0)
    {
      float tmp = std::stof(str_number);
      numbers_line.push_back(tmp);
    }

    if (numbers_line.size() > 0)
    {
      result = numbers_line;
      updated_ = true;
    }

    str_number.clear();
    numbers_line.clear();
  }
}


bool NumbersParser::updated()
{
  return updated_;
}

std::vector<float> NumbersParser::get()
{
  updated_ = false;
  return result;
}

bool NumbersParser::is_number(char c)
{
  if ((c >= '0')&&(c <= '9'))
    return true;
  return false;
}
