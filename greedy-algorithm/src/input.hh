#ifndef INPUT_H
#define INPUT_H

class Input
{
public:
    Input() = default;

    /**
     * @brief TODO
     *
     * @param change
     * @return int
     */
    static int ConvertInputToCents(float change);
    /**
     * @brief Verifies that the supplied flag is positive real(ℝ) number
     *
     * @param flag Will verify this is positive real number
     * @return true if the flag is positive real number
     * @return false if the flag is not positive real number
     */
    static bool IsPositiveRealNumber(const char flag[]);
    /**
     * @brief When invoked this method will cause the program to exit
     * with supplied message and exit code
     *
     * @param message this message will be displayed on console before exiting
     * @param exit_code the program will exit with this code
     */
    static void ExitProgram(const char message[], int exit_code);
};

#endif