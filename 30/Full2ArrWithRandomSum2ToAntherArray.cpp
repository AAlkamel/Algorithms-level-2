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
void CopyArray(int arr1[100], int arr2[100], int arrSum[100], int arrLength)
{
  for (short i = 0; i < arrLength; i++)
  {
    arrSum[i] = arr2[i] + arr1[i];
  }
}
int main()
{
  srand((unsigned)time(NULL));
  int arr1[100], arr2[100], arrSum[100], arrLength = 0;
  arrLength = ReadPositiveNumber("\n enter number of elements.\n");
  FullArrayWithRandom(arr1, arrLength);
  FullArrayWithRandom(arr2, arrLength);
  CopyArray(arr1, arr2, arrSum, arrLength);
  PrintArray(arr1, arrLength, "\nArraySource Element is: ");
  PrintArray(arr2, arrLength, "\nArray2 Element is: ");
  PrintArray(arrSum, arrLength, "\nArraySum Element is: ");
}