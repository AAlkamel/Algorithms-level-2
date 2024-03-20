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
void CopyReverseArray(int arr1[100], int arr2[100], int arrLength)
{
  for (short i = 0; i < arrLength; i++)
  {
    arr2[i] = arr1[arrLength - i - 1];
  }
}
int main()
{
  srand((unsigned)time(NULL));
  int arr1[100], arr2[100], arrLength = 0;
  arrLength = ReadPositiveNumber("\n enter number of elements.\n");
  FullArrayWithRandom(arr1, arrLength);
  CopyReverseArray(arr1, arr2, arrLength);
  PrintArray(arr1, arrLength, "\nArraySource Element is: ");
  PrintArray(arr2, arrLength, "\nArray Reverse Copy Element is: ");
}