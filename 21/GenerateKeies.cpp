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
int main()
{
  srand((unsigned)time(NULL));
  char again = 'y';
  do
  {
    system("cls");
    GenerateKeys(ReadPositiveNumber("please enter number of keys"));
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
  return 0;
}