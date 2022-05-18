#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  char choose;
  cin >> choose;

  while (choose != 5)
  {
    switch (choose)
    {
    case 'a':
      cout << "a\n";
      break;
    case 'b':
      cout << "b\n";
      break;
    case 'c':
      cout << "c\n";
      break;
    case 'd':
      cout << "d\n";
      break;
    default:
      cout << "inválido\n";
    }
    cin >> choose;
  }
  return 0;
}