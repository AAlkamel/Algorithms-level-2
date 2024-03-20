#include <iostream>
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
void AddNumberToArray(int arr[100], int &arrLength, int number)
{
  arrLength++;
  arr[arrLength - 1] = number;
}
void CopyOddToArray(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
  for (short i = 0; i < arrLength; i++)
  {
    if (arrSource[i] % 2 != 0)
    {
      AddNumberToArray(arrDestination, arrDestinationLength, arrSource[i]);
    }
  }
}
int main()
{
  srand((unsigned)time(NULL));
  int arrSource[100], arrDestination[100], arrLength = 0, arrDestinationLength = 0;
  FillArrayWithRandom(arrSource, arrLength);
  CopyOddToArray(arrSource, arrDestination, arrLength, arrDestinationLength);
  PrintArray(arrSource, arrLength, "\nArraySource Element is: ");
  PrintArray(arrDestination, arrDestinationLength, "\nArrayDestination Element is: ");
}