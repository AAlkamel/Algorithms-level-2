#include <iostream>
#include <string>
using namespace std;
int RandomNumber(int from, int to)
{
  int ran = rand() % (to - from + 1) + from;
  return ran;
}
int ArrayMax(int arr[100], int arrLength)
{
  int count = 0;
  for (short i = 0; i < arrLength; i++)
  {
    if (arr[i] > count)
      count = arr[i];
  }
  return count;
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
int TimesRepeated(int Number, int arr[100], int arrLength)
{
  int count = 0;
  for (short i = 0; i < arrLength; i++)
  {
    if (Number == arr[i])
      count++;
  }
  return count;
}
int main()
{
  srand((unsigned)time(NULL));
  int arr[100], arrLength = 0;
  FullArrayWithRandom(arr, arrLength);
  // PrintArray(arr, arrLength);
  cout << "\nThe Array Max is: " << ArrayMax(arr, arrLength) << endl;
}