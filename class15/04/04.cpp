#include <iostream>

using namespace std;

void discoverValues(int *, int &, int &, int);

int main(int argc, char const *argv[])
{
  int value = 10, minor, major;
  int *ptr = NULL;
  int vet[] = {50, 10, 250, 500, 25};

  ptr = &value;

  cout << "Conteúdo de value: " << value << endl;
  cout << "Endereço de value: " << &value << endl;
  cout << "Conteúdo de ptr: " << ptr << endl;
  cout << "Endereço de ptr: " << &ptr << endl;
  cout << "Conteúdo apontedo por ptr: " << *ptr << endl;

  discoverValues(vet, minor, major, 5);

  cout << "O maior valor do vetor é: " << major << endl;
  cout << "O menor valor do vetor é: " << minor << endl;

  return 0;
}

void discoverValues(int *vet, int &mi, int &ma, int len)
{
  int i;
  mi = ma = vet[0];

  for (i = 1; i < len; i++)
  {
    if (vet[i] < mi)
      mi = vet[i];
    else if (vet[i] > ma)
      ma = vet[i];
  }
}