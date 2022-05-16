#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  char ch;
  int cont = 0;

  cout << "Digite caracters, use # para sair:\n";

  while (((ch = cin.get()) != '#') && (cont++, cout << ch, 1))
    ;

  cout << endl
       << cont << " caracteres lidos.\n";

  return 0;
}