#include <iostream>

using namespace std;

int getUserInput(void);

int main(int argc, char const *argv[])
{
  const int size = 5;
  int values[size], sum{0};

  cout << "Digite 5 valores: ";
  
  for (int i = 0; i < size; i++)
    sum += values[i] = getUserInput();

  cout << "A soma do array é " << sum << endl;

  return 0;
}

int getUserInput()
{
  int value;
  cin >> value;
  return value;
}