#include <iostream>

using namespace std;

bool equalsTo(string a, string b)
{
  return a.compare(b);
}

void readWords(int &cont)
{
  string WORDS[100];
  while ((cin >> WORDS[cont], equalsTo(WORDS[cont], "pronto")))
    cont++;
}

int main(int argc, char const *argv[])
{
  int cont = 0;

  cout << "Digite palavras (\"pronto\" para sair):\n";

  readWords(cont);

  cout
      << endl
      << cont << " palavras foram digitadas.\n";
  return 0;
}