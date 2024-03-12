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
void PrintAllDigitsFrequency(int number)
{
  for (short i = 1; i < 10; i++)
  {
    int frequency = CountDigitFrequency(number, i);
    if (frequency > 0)
    {
      cout << "\nDigit " << i << " frequency is " << frequency << " time(s)\n";
    }
  }
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");
    PrintAllDigitsFrequency(ReadPositiveNumber("please enter positive number"));
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}