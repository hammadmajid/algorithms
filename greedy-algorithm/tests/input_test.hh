#ifndef INPUT_TEST_H
#define INPUT_TEST_H

#include "../src/input.hh"

namespace input_test {

    /**
     * @brief Test IsPositiveRealNumber(const char input[]) for these cases
     * 1. Passing 15 should return true
     * 2. Passing 0.248 should return true
     * 3. Passing 1.0.4 should return false
     * 4. Passing x should return false
     * 5. Passing w.3 should return false
     * 6. Passing -23.6 should return false
     * 7. Passing 0 should return false
     * 
     */
    void TestIsPositiveRealNumber();

    /**
     * @brief Tests ConvertToCents(const char input[]) method with these cases:
     * 1. Passing 1 should return 100
     * 2. Passing 0.35 should return 35
     * 3. Passing 5.0759 should return 508
     * 4. Passing 0.01 should return 1
     * 5. Passing 10 should return 1000
     * 
     */
    void TestConvertToCents();
}

#endif