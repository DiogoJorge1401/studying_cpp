#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int year;

  cout << "Em que ano sua casa foi contruída?\n";
  cin >> year;
  cin.get(); // caracter \n lido e descartado

  cout << "Qual é o seu endereço?\n";
  char andress[80];
  cin.getline(andress, 80);

  cout << andress << endl;
  return 0;
}