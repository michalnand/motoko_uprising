#ifndef _NUMBERS_PARSER_H_
#define _NUMBERS_PARSER_H_

#include <vector>
#include <string>

class NumbersParser
{
  private:
    std::vector<float> result;

    std::string str_number;
    std::vector<float> numbers_line;
    bool updated_;
  public:
    NumbersParser();
    ~NumbersParser();

    void add(char c);

    bool updated(); 
    std::vector<float> get();

  private:
    bool is_number(char c);
};

#endif
