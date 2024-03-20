#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void PrintArray(int arr[100], int arrLength, string message)
{
  cout << message;
  for (short i = 0; i < arrLength; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}
void AddNumberToArray(int arr[100], int &arrLength, int number)
{
  arrLength++;
  arr[arrLength - 1] = number;
}
int FindNumberPositionInArray(int arr[100], int arrLength, int Number)
{
  for (int i = 0; i < arrLength; i++)
  {
    if (arr[i] == Number)
    {
      return i;
    }
  }
  return -1;
}
bool IsNumberInArray(int arr[100], int arrLength, int Number)
{
  return FindNumberPositionInArray(arr, arrLength, Number) != -1;
}
void CopyDisTinctToArray(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
  for (short i = 0; i < arrLength; i++)
  {
    if (!IsNumberInArray(arrDestination, arrDestinationLength, arrSource[i]))
    {
      AddNumberToArray(arrDestination, arrDestinationLength, arrSource[i]);
    }
  }
}
void FillArray(int arr[100], int &arrLength)
{
  arrLength = 10;
  arr[0] = 10;
  arr[1] = 10;
  arr[2] = 10;
  arr[3] = 50;
  arr[4] = 50;
  arr[5] = 70;
  arr[6] = 70;
  arr[7] = 70;
  arr[8] = 70;
  arr[9] = 90;
}
int main()
{
  srand((unsigned)time(NULL));
  int arrSource[100], arrDestination[100], arrLength = 0, arrDestinationLength = 0;
  FillArray(arrSource, arrLength);
  CopyDisTinctToArray(arrSource, arrDestination, arrLength, arrDestinationLength);
  PrintArray(arrSource, arrLength, "\nArraySource Element is: ");
  PrintArray(arrDestination, arrDestinationLength, "\nArrayDestination Element is: ");
}