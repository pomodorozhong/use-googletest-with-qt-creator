#include <examplemodule.h>

std::string ExampleModule::Echo(std::string input)
{
    std::string output = input;

    if (input == "fail_case")
    {
        output = "something_wrong";
    }

    return output;
}
