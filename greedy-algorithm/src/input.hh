#ifndef INPUT_H
#define INPUT_H

/*
    TODO(@hammadmajid) Change this class to namespace
     - Class is being used as namespace
     - No instance of this class is ever initalized
*/
class Input
{
public:

    /**
     * @brief We are converting the input that was provided by user to cents
     * Input has type `char` because input was read from argv
     * Why convert? algorithm::calculate(int cents) will require cents in type `int`
     * Also, we are assuming that input is provided in dollars($)
     * Steps to convert:
     * 1. First input is converted from char[] to float
     * 2. The float value is multiplied 100 to convert to cents, since 100 cents = 1 dollar
     * 3. The multiplied value to rounded off, aka converted to int
     *
     * @param change will be converted
     * @return change that was converted
     */
    static int ConvertInputToCents(const char input[]);

    /**
     * @brief Verifies that the supplied input is a positive real(ℝ) number
     * The method will return true if all character matches these cases
     *  - Character is a digit (0-9)
     *  - At most one character is a dot(.)
     *
     * @param input Will be checked for above cases
     * @return true if the input is positive real number
     * @return false if the input is not positive real number
     */
    static bool IsPositiveRealNumber(const char input[]);

    /*
        TODO(@hammadmajid) move exit program method to main.cc
        Because it doesn't make sense to put it in class called `Input`
    */
    /**
     * @brief This method will used to exit out the program when something goes wrong.
     *
     * @param message will be displayed on console before exiting
     * @param exit_code should non-zero and unique
     */
    static void ExitProgram(const char message[], int exit_code);
};

#endif