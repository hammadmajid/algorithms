#include "input.hh"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        Input::ExitProgram("Invalid number of arguments", 1);
    }
    else if (Input::IsPositiveRealNumber(argv[1]) == false)
    {
        Input::ExitProgram("Expected a positive real number", 2);
    }

    return 0;
}