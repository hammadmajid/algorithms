#include <cassert>
#include "input_test.hh"
#include "../src/input.hh"

void input_test::TestIsPositiveRealNumber()
{
    // case 1
    assert(Input::IsPositiveRealNumber("15") == true);
    // case 2
    assert(Input::IsPositiveRealNumber("0.248") == true);
    // case 3
    assert(Input::IsPositiveRealNumber("1.0.4") == false);
    // case 4
    assert(Input::IsPositiveRealNumber("x") == false);
    // case 5
    assert(Input::IsPositiveRealNumber("w.3") == false);
    // case 6
    assert(Input::IsPositiveRealNumber("-23.6") == false);
    // case 7
    assert(Input::IsPositiveRealNumber("0") == false);
}

void input_test::TestConvertToCents()
{
    // case 1
    assert(Input::ConvertInputToCents("1") == 100);
    // case 2
    assert(Input::ConvertInputToCents("0.35") == 35);
    // case 3
    assert(Input::ConvertInputToCents("5.0759") == 508);
    // case 4
    assert(Input::ConvertInputToCents("0.01") == 1);
    // case 5
    assert(Input::ConvertInputToCents("10") == 1000);
}
