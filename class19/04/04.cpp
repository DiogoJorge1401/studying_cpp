#include "../../myLib/String.cpp"
#include <iostream>

using namespace std;

void readWords(int &cont)
{
  String WORDS[100];
  while ((cin >> WORDS[cont], !WORDS[cont].equalsTo("pronto")))
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