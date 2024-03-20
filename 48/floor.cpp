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

int MyFloor(float number)
{
  if (number == int(number))
  {
    return int(number);
  }

  if (number > 0)
  {
    return int(number);
  }
  else
  {
    return (int)number - 1;
  }
}
int main()
{
  float number = ReadNumber();
  cout << "My Round Result : " << MyFloor(number) << endl;
  cout << "C++ round Result: " << floor(number) << endl;
  return 0;
}