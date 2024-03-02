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
void PrintReversNumber()
{
  int number = ReadPositiveNumber("please enter positive number");
  cout << "\n\nthe revers number is:\n";
  do
  {
    if (number <= 9)
      cout << number << endl;
    else
    {
      cout << number % 10 << endl;
      number /= 10;
      if (number <= 9)
        cout << number << endl;
    }

  } while (number > 9);
}
void PrintReversNumberHadhood()
{
  int number = ReadPositiveNumber("please enter positive number");
  cout << "\n\nthe revers number is:\n";
  int Remainder = 0;
  while (number > 0)
  {
    Remainder = number % 10;
    number /= 10;
    cout << Remainder << endl;
  }
}

int main()
{
  char again = 'y';
  do
  {
    system("cls");
    PrintReversNumberHadhood();
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}