#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int from, int to)
{
  int ran = rand() % (to - from + 1) + from;
  return ran;
}
int main()
{
  srand((unsigned)time(NULL));

  cout << rand() << endl;
  cout << RandomNumber(1, 10) << endl;
  cout << RandomNumber(1, 10) << endl;
  cout << RandomNumber(1, 10) << endl;
}