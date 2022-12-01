//It's safer if you include just the header than the implementation file,
//With it implemented and compiled, the header is all that's needed
#include "user.cc"

int main()
{
    int cents = greedy_algorithm::get_cents();
    return 0;
}