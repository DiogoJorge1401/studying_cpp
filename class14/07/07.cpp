#include <iostream>

using namespace std;

void more(int *x)
{
  ++(*x);
}

int increment(int x) { return ++x; }

int main(int argc, char const *argv[])
{
  int value;
  cout << "Digite um valor: ";
  cin >> value;

  more(&value);
  cout << "Resultado após more: " << value << endl;

  value = increment(value);
  cout << "Resultado após increment: " << value << endl;

  return 0;
}