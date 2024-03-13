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
void ReadArray(int arr[100], int &arrLength)
{
  cout << "\n enter number of elements.\n";
  cin >> arrLength;
  for (short i = 0; i < arrLength; i++)
  {
    cout << " enter element [" << i + 1 << "]: ";
    cin >> arr[i];
  }
}
void PrintArray(int arr[100], int arrLength)
{
  for (short i = 0; i < arrLength; i++)
  {
    cout << " enter element [" << i + 1 << "]: " << arr[i] << endl;
  }
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
  int arr[100], arrLength = 0, NumberToCheck = 0;
  ReadArray(arr, arrLength);
  NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");
  cout << "Original array is: \n";
  PrintArray(arr, arrLength);
  cout << "\nNumber to check: " << NumberToCheck
       << "\nis repeated " << TimesRepeated(NumberToCheck, arr, arrLength)
       << " time(s)" << endl;
}