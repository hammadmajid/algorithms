#ifndef INPUT_H
#define INPUT_H

#include "../include/greedy_algorithm.h"

namespace input
{
    class change
    {
    private:
        static int ConvertToCents(const char change[]);
        static bool IsValidCharacter(const char character_to_check);

    public:
        static int get_cents();
    };
}

#endif