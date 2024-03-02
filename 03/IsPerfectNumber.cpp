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
void PrintResult()
{
  int number = ReadPositiveNumber("please enter positive Number.");
  IsPerfectNumber(number) ? cout << "\n\n"
                                 << number << " is perfect number"
                          : cout << "\n\n"
                                 << number << " is not perfect number";
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");
    PrintResult();
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}