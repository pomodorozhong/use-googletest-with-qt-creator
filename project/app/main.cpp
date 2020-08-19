#include <iostream>
#include <string>

#include "fizzbuzz.h"

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        std::string text = FizzBuzz::GetOutputText(i);
        std::cout << text << std::endl;
    }

    return 0;
}
