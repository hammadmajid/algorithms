#include "input.hh"
#include <iostream>
#include <cctype>
#include <math.h>
#include <string.h>

bool Input::IsPositiveRealNumber(const char input[])
{
    // TODO(@hammadmajid) return false if here are more than one dots(.) in flag

    int len = strlen(input);
    for (int i = 0; i < len; i++ )
    {
        if (!std::isdigit(input[i]) || input[i] != 46) // 46 in ASCII represents the dot(.) character
        {
            return false;
        }
    }
    return true;
}
int Input::ConvertInputToCents(const char input[])
{
    return std::round(std::atof(input) * 100);
}
void Input::ExitProgram(const char message[], int exit_code)
{
    std::cout << std::endl
              << message << std::endl;
    std::exit(exit_code);
}