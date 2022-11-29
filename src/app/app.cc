#include <iostream>
#include <math.h>
#include <cctype>
#include <algorithm>
#include <string>
#include "header/app.h"

int main()
{
    int cents = greedy_algorithm::get_cents();
    return 0;
}

int greedy_algorithm::get_cents()
{
    std::string change;

    std::cout << "Change owed: ";

    std::cin >> change;

    // remove newline '\n' character the string
    change.erase(std::remove(change.begin(), change.end(), '\n'), change.cend());

    for (char eachChar : change)
    {
        if (isdigit(eachChar) == false)
        {
            greedy_algorithm::get_cents();
        }
    }

    int cents = atoi(change.c_str());

    return round(cents * 100);
}