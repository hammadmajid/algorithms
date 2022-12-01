#ifndef APP_H
#define APP_H
#include <iostream>
#include <math.h> //This header is needed if you implement it in the implementation

/*
* The syntax namespace was used as a class, to prevent bugs from occuring, I left
* namespace and included a class for get_cents()
*/
namespace greedy_algorithm
{
    // This can be renamed to anything else, I was just lazy with the naming
    class cash_algorithm
    {
        public:
        /**
         * @brief Prompts the user to enter change (float) in dollars than
         * Converts the given change to cents (integer)
         * 
         * @return Cents that were converted
         */

        // Must be static unless you intend for there to be instances of the class
        static int get_cents();
    };
}

#endif