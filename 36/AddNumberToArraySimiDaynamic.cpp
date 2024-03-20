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
void PrintArray(int arr[100], int arrLength, string message)
{
  cout << message;
  for (short i = 0; i < arrLength; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}
void AddNumberToArray(int arr[100], int arrLength, int number)
{
  arr[arrLength - 1] = number;
}
void InputUserNumberToArray(int arr[100], int ArrayMaxLength, int &arrLength)
{
  bool AddMore = true;
  do
  {
    arrLength++;
    AddNumberToArray(arr, arrLength, ReadPositiveNumber("Please enter a number?"));
    cout << "\nDo you want to add more numbers? [0]:no [1]:yes\n";
    cin >> AddMore;
  } while (AddMore && ArrayMaxLength - 1 >= arrLength);
  if (ArrayMaxLength <= arrLength)
  {
    cout << "\nyou reached to Max Array Length\n";
  }
  PrintArray(arr, arrLength, "Your Array: ");
}
int main()
{
  int arr[100], ArrayMaxLength = 4, arrLength = 0;
  InputUserNumberToArray(arr, ArrayMaxLength, arrLength);
  return 0;
}