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
void FullArrayWithNumbers(int arr[100], int &arrLength)
{
  // cout << "\n enter number of elements.\n";
  // cin >> arrLength;
  for (short i = 0; i < arrLength; i++)
  {

    arr[i] = i + 1;
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
void CopyArray(int arrSource[100], int arrshuffle[100], int arrLength)
{
  for (short i = 0; i < arrLength; i++)
  {
    arrshuffle[i] = arrSource[i];
  }
}
void ShuffleArray(int arr[100], int arrLength)
{
  int temp = 0, randomIndex = 0;
  for (short i = 0; i < arrLength; i++)
  {
    randomIndex = RandomNumber(0, arrLength - 1);
    temp = arr[i];
    arr[i] = arr[randomIndex];
    arr[randomIndex] = temp;
  }
}
int main()
{
  srand((unsigned)time(NULL));
  int arr[100], arrLength = 0;
  arrLength = ReadPositiveNumber("\n enter number of elements.\n");
  FullArrayWithNumbers(arr, arrLength);
  PrintArray(arr, arrLength, "\nArraySource Element is: ");
  ShuffleArray(arr, arrLength);
  PrintArray(arr, arrLength, "\nArrayShuffle Element is: ");
}