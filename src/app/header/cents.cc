#include "cents.h"

int greedy_algorithm::algorithm::get_cents()
{
    float change = 0;
    bool end = false;
    while (!end)
    {
        std::cout << std::endl
                  << "Change owed: ";

        std::cin >> change;
        end = test::test_get_cents(&change);

    }

    return round(change * 100);
}