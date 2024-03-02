#include <iostream>
using namespace std;
void PrintTableHead()
{
  cout << "\n\n\t\t multiplication table from 1 to 10\n\n";
  for (short i = 1; i <= 10; i++)
  {
    cout << "\t" << i;
  }

  cout << "\n______________________________________________________________________________________\n";
}
string ColmunSeparator(int i)
{
  if (i < 10)
    return "   |";
  else
    return "  |";
}
void PrintMultiplicationTableFrom1To10()
{
  PrintTableHead();
  for (short i = 1; i <= 10; i++)
  {
    cout << " " << i << ColmunSeparator(i) << "\t";
    for (short j = 1; j <= 10; j++)
    {
      cout << j * i << "\t";
    }
    cout << endl;
  }
}
int main()
{
  PrintMultiplicationTableFrom1To10();
  system("pause>0");
  PrintTableHead();
}