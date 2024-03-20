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

    arr[i] = RandomNumber(-100, 100);
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

int PositiveCount(int arr[100], int arrLength)
{
  int positiveCount = 0;
  for (int i = 0; i < arrLength; i++)
  {
    if (arr[i] >= 0)
      positiveCount++;
  }
  return positiveCount;
}
int main()
{
  srand((unsigned)time(NULL));
  int arrSource[100], arrLength = 0;
  FillArrayWithRandom(arrSource, arrLength);
  PrintArray(arrSource, arrLength, "\nArraySource Element is: ");
  cout << "\npositive number count is: " << PositiveCount(arrSource, arrLength) << endl;
}