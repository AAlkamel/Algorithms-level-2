#include <iostream>
#include <cmath>
#include <string>
using namespace std;
float ReadNumber()
{
  float Number;
  cout << "Please enter a number?";
  cin >> Number;
  return Number;
}
float GetFriction(float number)
{
  return number - int(number);
}
int MyRound(float number)
{
  int intPart = int(number);
  float frictionPart = GetFriction(number);
  if (abs(frictionPart) >= .5)
  {
    if (number > 0)
    {
      return ++intPart;
    }
    else
    {
      return --intPart;
    }
  }
  else
  {
    return intPart;
  }
}
int main()
{
  float number = ReadNumber();
  cout << "My Round Result : " << MyRound(number) << endl;
  cout << "C++ round Result: " << round(number) << endl;
  return 0;
}