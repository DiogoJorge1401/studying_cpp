#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  const int size = 20;
  char name[size]{}, surname[size]{};

  cout << "Primeiro nome?\t";
  cin >> name;

  cout << "Segundo nome?\t";
  cin >> surname;

  cout << "Bom dia, " << name << " " << surname << ".\n";

  cout << "Seja bem vindo " << *name << *surname << "!\n";

  return 0;
}