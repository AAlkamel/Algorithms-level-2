#include <iostream>
using namespace std;
#include <string>
string ReadText(string message)
{
  string w;
  cout << message << endl;
  getline(cin, w);
  return w;
}
string EncryptText(string text, int EncryptionKey)
{
  for (int i = 0; i < text.length(); i++)
  {
    text[i] = char((int)text[i] + EncryptionKey);
  }
  return text;
}
string DecryptText(string text, int EncryptionKey)
{
  for (int i = 0; i < text.length(); i++)
  {
    text[i] = char((int)text[i] - EncryptionKey);
  }
  return text;
}
int main()
{
  int EncryptionKey = 7;
  string text = ReadText("Enter text to encrypt it .");
  string EncryptedText = EncryptText(text, EncryptionKey);
  cout << "yor text is: \n"
       << text << endl;
  cout << "Encrypted text is: \n"
       << EncryptedText << endl;
  cout << "Encrypted text is: \n"
       << DecryptText(EncryptedText, EncryptionKey) << endl;
}