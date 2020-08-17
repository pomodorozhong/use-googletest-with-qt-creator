#include <fizzbuzz.h>

std::string FizzBuzz::Echo(std::string input)
{
    std::string output = input;

    if (input == "fail_case")
    {
        output = "something_wrong";
    }

    return output;
}
