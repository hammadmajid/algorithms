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

        if(std::cin.fail())
        {
            //Tells user that their input was incorrect, then clears the stream for 
            //another attempt until user inputs correct information
            std::cout << "You've enter an incorrect input" << std::endl;

            std::cin.clear();
            std::cin.ignore(__INT_MAX__, '\n');
        }

        if (change > 0)
        {
            break;
        }
    }

    return std::round(change * 100);
}