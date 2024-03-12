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

int SumNumberDigits(int number)
{
  int sum = 0;
  cout << "\n\nthe sum of number digits is:\n";
  int Remainder = 0;
  while (number > 0)
  {
    Remainder = number % 10;
    number /= 10;
    sum += Remainder;
  }
  return sum;
}

int main()
{
  char again = 'y';
  do
  {
    system("cls");
    cout << SumNumberDigits(ReadPositiveNumber("please enter positive number"));

    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}