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

int ReversNumber(int number)
{
  int Remainder = 0, ReversNumber = 0;
  while (number > 0)
  {
    Remainder = number % 10;
    number /= 10;

    ReversNumber = ReversNumber * 10 + Remainder;
  }
  return ReversNumber;
}
bool IsPalindrome(int number)
{
  return ReversNumber(number) == number;
}

int main()
{
  char again = 'y';
  do
  {
    system("cls");
    IsPalindrome(ReadPositiveNumber("please enter positive number")) ?

                                                                     cout << " is palindrome number" << endl

                                                                     : cout << " is not palindrome number" << endl;
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}