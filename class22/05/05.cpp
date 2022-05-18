#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
  char ch;

  cout << "Digite seu texto (@ para sair):\n";
  cin.get(ch);

  while (ch != '@')
  {
    if (isalpha(ch))
      ch = isupper(ch) ? tolower(ch) : toupper(ch);
    cout << ch;
    cin.get(ch);
  }
  cout << endl;

  return 0;
}