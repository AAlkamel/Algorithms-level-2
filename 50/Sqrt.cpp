#include <iostream>
#include <cmath>
using namespace std;
float ReadNumber()
{
  float Number;
  cout << "Please enter a number?";
  cin >> Number;
  return Number;
}
float MySqrt(float Number) { return pow(Number, 0.5); }
int main()
{
  float Number = ReadNumber();
  cout << "My MySqrt Result : " << MySqrt(Number) << endl;
  cout << "C++ sqrt Result: " << sqrt(Number) << endl;
  return 0;
}