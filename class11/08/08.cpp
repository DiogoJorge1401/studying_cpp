#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
  char nome[] = "C++ Primer Plus";

  cout << "A palavra e: " << nome << endl;
  cout << "Numero de caracteres: " << strlen(nome) << endl;
  cout << "Espaco ocupado em bytes: " << sizeof(nome) << endl;
  return 0;
}