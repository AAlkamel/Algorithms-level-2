#include <iostream>
#include <string>
#include <cmath>
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

void PrintWordsFromAAAtoZZZ()
{
  cout << "\n\n";
  int count = 0;
  for (short i = 65; i <= 90; i++)
  {
    for (short j = 65; j <= 90; j++)
    {
      for (short k = 65; k <= 90; k++)
      {
        cout << char(i) << char(j) << char(k) << endl;
        count++;
      }
    }
  }
  cout << "count of words is: " << count << endl;
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");
    PrintWordsFromAAAtoZZZ();
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}