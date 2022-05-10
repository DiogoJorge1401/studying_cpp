#include <iostream>

using namespace std;

int randNumber();

int main(int argc, char const *argv[])
{
  srand(time(NULL));
  int number = randNumber();

  if (number >= 6)
    cout << "Maior que 5" << endl;
  else
    cout << "Menor que 6" << endl;
  return 0;
}

int randNumber()
{
  return rand() % 10 + 1;
}
