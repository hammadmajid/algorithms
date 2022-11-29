#include <iostream>
#include <math.h>
#include "header/app.h"

int main()
{
    int cents = greedy_algorithm::get_cents();
    return 0;
}

int greedy_algorithm::get_cents()
{
    float change = 0;

    while (true)
    {
        std::cout << std::endl
                  << "Change owed: ";

        std::cin >> change;

        if (change > 0)
        {
            break;
        }
    }

    return round(change * 100);
}