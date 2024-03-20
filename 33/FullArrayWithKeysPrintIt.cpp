#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
enum eCharType
{
  SmallLetter = 1,
  CapitalLetter = 2,
  SpecialLetter = 3,
  Digit = 4
};
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
int GetRandomCharacter(eCharType CharType)
{
  switch (CharType)
  {
    // https://www.asciitable.com/
  case eCharType::SmallLetter:
    return RandomNumber(97, 122);
    break;
  case eCharType::CapitalLetter:
    return RandomNumber(65, 90);
    break;
  case eCharType::SpecialLetter:
    return RandomNumber(33, 47);
    break;
  case eCharType::Digit:
    return RandomNumber(48, 57);
    break;
  default:
    break;
  }
}
string GenerateRandomWord(eCharType CharType, short length)
{
  string w = "";
  for (short i = 0; i < length; i++)
  {
    w += char(GetRandomCharacter(CharType));
  }
  return w;
}
string GenerateKey(short keyLength, eCharType WordCharType, short WordLength, char divider = '-')
{
  string key = "";
  for (short i = 0; i < keyLength; i++)
  {
    key += GenerateRandomWord(WordCharType, WordLength);
    key += divider;
  }
  key.pop_back();
  return key;
}
void GenerateKeys(short numberOfKeys)
{
  for (short i = 0; i < numberOfKeys; i++)
  {
    cout << "[" << i << "]\t:  ";
    cout << GenerateKey(5, eCharType::CapitalLetter, 4) << endl;
  }
}
void FullArrayWithKeys(string arr[100], short &numberOfKeys)
{
  for (short i = 0; i < numberOfKeys; i++)
  {
    arr[i] = GenerateKey(5, eCharType::CapitalLetter, 4);
  }
}
void PrintArray(string arr[100], int arrLength, string message)
{
  cout << message;
  for (short i = 0; i < arrLength; i++)
  {
    cout << arr[i] << endl;
  }
  cout << "\n";
}

int main()
{
  srand((unsigned)time(NULL));
  string arr1[100];
  short arrLength = 0;
  arrLength = ReadPositiveNumber("\n enter number of Keys.\n");
  FullArrayWithKeys(arr1, arrLength);
  PrintArray(arr1, arrLength, "\nArray keys is: \n");
}