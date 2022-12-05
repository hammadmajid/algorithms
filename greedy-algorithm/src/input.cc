#include "input.h"

int input::change::get_cents()
{
    std::string change;

    std::cout << "Change owed: ";

    std::cin >> change;

    // remove newline '\n' character from the input
    change.erase(std::remove(change.begin(), change.end(), '\n'), change.cend());

    for (auto &&each_char : change)
    {
        if (input::change::IsValidCharacter(each_char) == false)
        {
            input::change::get_cents();
        }
    }

    return input::change::ConvertToCents(change.c_str());
}

bool input::change::IsValidCharacter(const char character_to_verify)
{
    bool is_valid = false;

    int period_char = '.';
    if (character_to_verify == period_char)
    {
        is_valid = true;
    }

    if (isdigit(character_to_verify))
    {
        is_valid = true;
    }

    return is_valid;
}

void Input::ExitProgram(const char message[], int exit_code)
{
    std::cout << std::endl
              << message << std::endl;
    std::exit(exit_code);
}