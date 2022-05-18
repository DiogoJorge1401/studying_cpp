#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
  int letters = 0;
  char ch;
  cin >> ch;
  while (ch != '|' && ch != '?')
  {
    if (isalpha(ch))
      letters++;
    cin >> ch;
  }

  cout << letters << endl;
  return 0;
}