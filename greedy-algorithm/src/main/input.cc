#include "../include/input.h"

int greedy_algorithm::get_cents()
{
    float change = 0;

    while (true)
    {
        std::cout << std::endl
                  << "Change owed: ";

        std::cin >> change;

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