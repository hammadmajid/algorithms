#ifndef APP_H
#define APP_H
#include <iostream>
#include <math.h>
#include "test/app_test.cc"

namespace greedy_algorithm
{
    class algorithm
    {
        /**
         * @brief Prompts the user to enter change (float) in dollars than
         * Converts the given change to cents (integer)
         * 
         * @return Cents that were converted
         */
        public:
        int static get_cents();
    };
}

#endif