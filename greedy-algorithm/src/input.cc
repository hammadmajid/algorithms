#include "input.hh"
#include <iostream>
#include <cctype>
#include <math.h>
#include <stdlib.h>

bool Input::IsPositiveRealNumber(const char flag[])
{
    // for (auto &&each_char :
    // {
    //     if (!std::isdigit(each_char) || each_char != 46) // 46 in ASCII represents the dot(.) character
    //     {
    //         return false;
    //     }
    // }

    return true;
}

    return is_valid;
}

void Input::ExitProgram(const char message[], int exit_code)
{
    std::cout << std::endl
              << message << std::endl;
    std::exit(exit_code);
}