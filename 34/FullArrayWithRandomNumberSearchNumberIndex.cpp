#include <iostream>
#include <string>
using namespace std;
int ReadPositiveNumber(string message)
{
  float num;
  do
  {
    cout << message << endl;
    cin >> num;
  } while (num <= 0);

  return num;
}
int RandomNumber(int from, int to)
{
  int ran = rand() % (to - from + 1) + from;
  return ran;
}
void FullArrayWithRandom(int arr[100], int &arrLength)
{
  // cout << "\n enter number of elements.\n";
  // cin >> arrLength;
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
int main()
{
  srand((unsigned)time(NULL));
  int arr[100], arrLength = 0, NumberForFindPosition = 0;
  arrLength = ReadPositiveNumber("\n enter number of elements.\n");
  FullArrayWithRandom(arr, arrLength);
  PrintArray(arr, arrLength, "\nArraySource Element is: ");
  NumberForFindPosition = ReadPositiveNumber("\n Enter a number to find its position.\n");
  cout << "\nNumber you are looking for is: " << NumberForFindPosition << endl;
  short NumberPosition = FindNumberPositionInArray(arr, arrLength, NumberForFindPosition);
  if (NumberPosition == -1)
    cout << "The number is not found :-(\n";
  else
  {
    cout << "The number found at position: ";
    cout << NumberPosition << endl;
    cout << "The number found its order  : ";
    cout << NumberPosition + 1 << endl;
  }
}