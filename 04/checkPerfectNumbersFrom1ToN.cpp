#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int ReadPositiveNumber(string message)
{
  int num;
  do
  {
    cout << message << endl;
    cin >> num;
  } while (num <= 0);

  return num;
}
bool IsPerfectNumber(int number)
{
  int sum = 0;
  for (int i = 1; i < number; i++)
  {
    if (number % i == 0)
    {
      sum += i;
    }
  }
  return number == sum;
}
void checkPerfectNumbersFrom1ToN()
{
  cout << "\nThis app print Perfect numbers from 1 to number \n";
  int number = ReadPositiveNumber("please enter positive number.");
  cout << "\nPerfect numbers from 1 to " << number << "\n";
  cout << "\nare: \n";
  for (int i = 1; i < number; i++)
  {
    if (IsPerfectNumber(i))
    {
      cout << i << endl;
    }
  }
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");
    checkPerfectNumbersFrom1ToN();
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}