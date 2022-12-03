#ifndef INPUT_H
#define INPUT_H

#include <math.h>

namespace input
{
    class change
    {
    private:
        /* data */
    public:
        change(/* args */);
        ~change();
    };
    
    change::change(/* args */)
    {
    }
    
    change::~change()
    {
    }
    
    /**
     * @brief Prompts the user to enter change (float) in dollars than
     * Converts the given change to cents (integer)
     *
     * @return Cents that were converted
     */
    int get_cents();
} // namespace input

#endif