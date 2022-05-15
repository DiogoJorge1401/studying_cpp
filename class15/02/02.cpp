#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int length;

  cout << "Digite o tamanho do vetor: ";
  cin >> length;

  int *vetor = new int[length];

  cout << "Criando vetor para " << length << " inteiros\n";
  return 0;
}