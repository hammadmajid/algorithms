#include "header/user.cc"

using namespace std;
//An alias to make writing out greed_algorithm easier.
namespace greedy = greedy_algorithm;

int main()
{
   int cents = greedy::cash_algorithm::get_cents();
   cout << cents << endl; // See results

    return 0;
}