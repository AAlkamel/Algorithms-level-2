#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string ReadGuess(string message)
{
  string w;
  cout << message << endl;
  cin >> w;
  return w;
}

bool GuessPassword(string Origale)
{
  cout << "\n\n";
  int count = 0;
  string word = "";
  for (short i = 65; i <= 90; i++)
  {
    for (short j = 65; j <= 90; j++)
    {
      for (short k = 65; k <= 90; k++)
      {
        word += char(i);
        word += char(j);
        word += char(k);
        count++;
        cout << "[" << count << "]: " << word << endl;
        if (Origale == word)
        {
          cout << "===================================\n"
               << "the password is: " << word;
          cout << "\ncount of tries are: " << count << endl;
          return true;
        }
        word = "";
      }
    }
  }
  cout << "Not found count of tries are: " << count << endl;
  return false;
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");
    GuessPassword(ReadGuess("Set Password"));
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}