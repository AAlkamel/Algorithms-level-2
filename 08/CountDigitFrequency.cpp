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
// my
int CountDigitFrequency(int number, short digit)
{

  int Remainder = 0, frequency = 0;
  while (number > 0)
  {
    Remainder = number % 10;
    number /= 10;
    if (Remainder == digit)
      frequency++;
  }
  return frequency;
}

int main()
{
  char again = 'y';
  do
  {
    system("cls");
    int number = ReadPositiveNumber("please enter positive number");
    int digit = ReadPositiveNumber("please enter digit to count frequency");

    cout << "\nDigit " << digit << " frequency is " << CountDigitFrequency(number, digit) << " time(s)\n";
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}