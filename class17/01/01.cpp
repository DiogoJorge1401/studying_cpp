#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
  string word = "";
  string word2 = "";

  cout << "Digite uma palavra\n";
  cin >> word;

  for (int i = word.length() - 1, j = 0; i >= 0; i--, j++)
    word2.push_back(word[i]);

  if (!word.compare(word2))
    cout << "A palavra é palíndroma\n";
  else
    cout << "A palavra não é palíndroma\n";

  return 0;
}