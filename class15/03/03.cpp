#include <iostream>

using namespace std;

struct Fish
{
  char type[20];
  float weight;
  int length;
};

void showWeightOfFirstFish(Fish fishs[])
{
  cout << "O peso do peixe é: " << fishs[0].weight << " gramas.\n";
}

int main(int argc, char const *argv[])
{
  int length;
  Fish peixinho, *peixinhoPtr = new Fish, *peixinhos = NULL;

  cout << "Tamanho do vetor:  ";
  cin >> length;
  peixinhos = new Fish[length];

  cout << "Tipo:  ";
  cin >> peixinhoPtr->type;

  cout << "Peso:  ";
  cin >> peixinhoPtr->weight;

  cout << "Comprimento:  ";
  cin >> peixinhoPtr->length;

  peixinhos[0] = *peixinhoPtr;

  showWeightOfFirstFish(peixinhos);

  return 0;
}