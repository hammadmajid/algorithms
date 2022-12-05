#include "input.hh"
#include <iostream>
#include <cctype>
#include <math.h>
#include <string.h>

bool Input::IsPositiveRealNumber(const char flag[])
{
    int len = strlen(flag);
    for (int i = 0; i < len; i++ )
    {
        if (!std::isdigit(flag[i]) || flag[i] != 46) // 46 in ASCII represents the dot(.) character
        {
            return false;
        }
    }

    return true;
}

int Input::ConvertInputToCents(const char change[])
{
    return std::round(std::atof(change) * 100);
}

void Input::ExitProgram(const char message[], int exit_code)
{
    std::cout << std::endl
              << message << std::endl;
    std::exit(exit_code);
}