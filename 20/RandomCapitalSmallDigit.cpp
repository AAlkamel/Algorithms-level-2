#include <iostream>
#include <cstdlib>
using namespace std;
enum eCharType
{
  SmallLetter = 1,
  CapitalLetter = 2,
  SpecialLetter = 3,
  Digit = 4
};
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
int main()
{
  srand((unsigned)time(NULL));
  cout << char(GetRandomCharacter(eCharType::CapitalLetter)) << endl;
  cout << char(GetRandomCharacter(eCharType::SmallLetter)) << endl;
  cout << char(GetRandomCharacter(eCharType::Digit)) << endl;
  cout << char(GetRandomCharacter(eCharType::SpecialLetter)) << endl;
  return 0;
}