#include <fizzbuzz.h>

std::string FizzBuzz::GetOutputText(int index)
{
    std::string output = "";

    if (index % 3 == 0)
    {
        output = "Fizz";
    }
    else if (index % 5 == 0)
    {
        output = "Buzz";
    }
    else
    {
        output = std::to_string(index);
    }

    return output;
}
