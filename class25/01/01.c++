#include <iostream>
#include <fstream>
#include <climits>

using namespace std;

double biggerElement(const double *, int);

int main(int argc, char const *argv[])
{
  int elements;
  double tmp;
  string filename;

  cout << "File name: ";
  cin >> filename;

  ifstream fin(filename);

  while (fin >> tmp)
    elements++;

  fin.clear();
  fin.seekg(0);

  double vet[elements];
  for (unsigned short i = 0; i < elements; i++)
    fin >> vet[i];
  fin.close();

  cout << "O maior valor é: " << biggerElement(vet, elements) << endl;

  return 0;
}

double biggerElement(const double *vet, int length)
{
  double bigger = __DBL_MIN__;
  for (unsigned short i = 0; i < length; i++)
    if (vet[i] > bigger)
      bigger = vet[i];

  return bigger;
}