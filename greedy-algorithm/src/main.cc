#include "input.cc"

int main()
{
    int cents = input::change::get_cents();
    std::cout << cents;
    return 0;
}