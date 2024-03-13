#include <iostream>
#include <string>
using namespace std;
int RandomNumber(int from, int to)
{
  int ran = rand() % (to - from + 1) + from;
  return ran;
}
int ArraySum(int arr[100], int arrLength)
{
  int Sum = 0;
  for (short i = 0; i < arrLength; i++)
  {
    Sum += arr[i];
  }
  return Sum;
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
void PrintArray(int arr[100], int arrLength)
{
  cout << "\nArray Element is: ";
  for (short i = 0; i < arrLength; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}
float ArrayAverage(int arr[100], int arrLength)
{
  return (float)ArraySum(arr, arrLength) / arrLength;
}
int main()
{
  srand((unsigned)time(NULL));
  int arr[100], arrLength = 0;
  FullArrayWithRandom(arr, arrLength);
  PrintArray(arr, arrLength);
  cout << "\nThe Array Average is: " << ArrayAverage(arr, arrLength) << endl;
}