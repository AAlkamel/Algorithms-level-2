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
float MyABS(float number)
{
  if (number >= 0)
  {
    return number;
  }
  else
  {
    return number * -1;
  }
}
int main()
{
  int number = ReadNumber();
  cout << "My abs Result : " << MyABS(number) << endl;
  cout << "C++ abs Result: " << abs(number) << endl;
  return 0;
}