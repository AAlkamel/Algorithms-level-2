#include <iostream>
#include <string>
using namespace std;
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
void CopyArray(int arrSource[100], int arrDestination[100], int arrLength)
{
  for (short i = 0; i < arrLength; i++)
  {
    arrDestination[i] = arrSource[i];
  }
}
int main()
{
  srand((unsigned)time(NULL));
  int arrSource[100], arrDestination[100], arrLength = 0;
  FullArrayWithRandom(arrSource, arrLength);
  CopyArray(arrSource, arrDestination, arrLength);
  PrintArray(arrSource, arrLength, "\nArraySource Element is: ");
  PrintArray(arrDestination, arrLength, "\nArrayDestination Element is: ");
}