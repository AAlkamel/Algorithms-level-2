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

void PrintInvertedPattern(int number)
{
  for (short i = 1; i <= number; i++)
  {
    for (short y = 1; y <= i; y++)
    {
      cout << char(64 + i);
    }
    cout << endl;
  }
}
void PrintInvertedPattern00(int number)
{
  cout << "\n";
  for (short i = 65; i <= (65 + number - 1); i++)
  {
    for (short y = 1; y <= (i - 65 + 1); y++)
    {
      cout << char(i);
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
    PrintInvertedPattern00(ReadPositiveNumber("please enter positive number"));
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}