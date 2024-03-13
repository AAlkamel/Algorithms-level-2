#include <iostream>
#include <string>
using namespace std;
int RandomNumber(int from, int to)
{
  int ran = rand() % (to - from + 1) + from;
  return ran;
}
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
void FullArrayWithRandom(int arr[100], int arrLength)
{
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
  arrLength = ReadPositiveNumber("Enter the number of element to generate ");
  FullArrayWithRandom(arr, arrLength);
  PrintArray(arr, arrLength);
}