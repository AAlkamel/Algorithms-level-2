#include <iostream>
#include <cmath>
#include <string>
using namespace std;
enum enPrime
{
  prime,
  notPrime
};
bool CheckPrime(int number)
{
  int half = round(number / 2);
  for (int i = 2; i <= half; i++)
  {
    if (number % i == 0)
      return false;
  }
  return true;
}
int RandomNumber(int from, int to)
{
  int ran = rand() % (to - from + 1) + from;
  return ran;
}
void FullArrayWithRandom(int arr[100], int &arrLength)
{
  cout << "\n enter number of elements.\n";
  cin >> arrLength;
  for (short i = 0; i < arrLength; i++)
  {

    arr[i] = RandomNumber(1, 100);
  }
}
void PrintArray(int arr[100], int arrLength, string message)
{
  cout << message;
  for (short i = 0; i < arrLength; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}
void CopyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &copyLength)
{
  int Length = 0;
  for (short i = 0; i < arrLength; i++)
  {
    if (CheckPrime(arrSource[i]))
    {

      arrDestination[Length] = arrSource[i];
      Length++;
    }
  }
  copyLength = Length;
}
int main()
{
  srand((unsigned)time(NULL));
  int arrSource[100], arrPrimeNumbers[100], arrLength = 0, copyLength = 0;
  FullArrayWithRandom(arrSource, arrLength);
  CopyPrimeNumbers(arrSource, arrPrimeNumbers, arrLength, copyLength);
  PrintArray(arrSource, arrLength, "\nArraySource Element is: ");
  PrintArray(arrPrimeNumbers, copyLength, "\nArrayPrimeNumbers Element is: ");
}