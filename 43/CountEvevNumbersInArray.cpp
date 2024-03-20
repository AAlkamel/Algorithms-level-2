#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int RandomNumber(int from, int to)
{
  int ran = rand() % (to - from + 1) + from;
  return ran;
}
void FillArrayWithRandom(int arr[100], int &arrLength)
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
bool IsEven(int Number)
{
  if (Number % 2 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int EvenCount(int arr[100], int arrLength)
{
  int evenCount = 0;
  for (int i = 0; i < arrLength; i++)
  {
    if (IsEven(arr[i]))
      evenCount++;
  }
  return evenCount;
}
int main()
{
  srand((unsigned)time(NULL));
  int arrSource[100], arrLength = 0;
  FillArrayWithRandom(arrSource, arrLength);
  PrintArray(arrSource, arrLength, "\nArraySource Element is: ");
  cout << "\nEven number count is: " << EvenCount(arrSource, arrLength) << endl;
}