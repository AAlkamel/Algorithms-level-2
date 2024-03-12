#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int ReadPositiveNumber(string message)
{
  float num;
  do
  {
    cout << message << endl;
    cin >> num;
  } while (num <= 0);

  return num;
}

void PrintNormalPattern(int number)
{
  for (short i = 1; i <= number; i++)
  {
    for (short y = 1; y <= i; y++)
    {
      cout << i;
    }
    cout << endl;
  }
}

int main()
{
  char again = 'y';
  do
  {
    system("cls");
    PrintNormalPattern(ReadPositiveNumber("please enter positive number"));
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}