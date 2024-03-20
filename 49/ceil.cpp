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

int MyCeil(float number)
{
  if (number == int(number))
  {
    return int(number);
  }

  if (number > 0)
  {
    return int(number) + 1;
  }
  else
  {
    return (int)number;
  }
}
int main()
{
  float number = ReadNumber();
  cout << "My Ceil Result : " << MyCeil(number) << endl;
  cout << "C++ Ceil Result: " << ceil(number) << endl;
  return 0;
}