#include <iostream>
#include <fstream>

using namespace std;

struct fish
{
  char name[20];
  unsigned weight;
  float length;
};

int main(int argc, char const *argv[])
{
  ifstream fin("pescado.dat", ios_base::in | ios_base::binary);
  fish fishCache;
  while (fin.read((char *)&fishCache, sizeof(fish)))
    cout << fishCache.name << " " << fishCache.weight << " " << fishCache.length << endl;
  fin.close();

  cout << endl;

  cout << "Peixe pescado no final de seamana:\n";
  cout << "Nome do peixe: ";
  cin >> fishCache.name;
  cout << "Peso do peixe (em gramas): ";
  cin >> fishCache.weight;
  cout << "Comprimento do peixe (em centímentros): ";
  cin >> fishCache.length;

  ofstream fout("pescado.dat", ios_base::out | ios_base::app);
  fout.write((char *)&fishCache, sizeof(fish));
  fout.close();
  return 0;
}