#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int num, input;
  srand(time(NULL));

  num = rand() % 11;

  cout << "Tente adivinhar um número entre 0 e 10: \n";
  while ((cin >> input, input) != num)
  {
    if (input < num)
      cout << "muito baixo\n";
    else
      cout << "muito alto\n";
  }

  cout << "Parabéns acertou!\n";

  return 0;
}