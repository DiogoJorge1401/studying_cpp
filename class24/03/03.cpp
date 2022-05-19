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
  unsigned total = 0;
  ifstream fin("pescado.txt");
  fish cache;

  fin >> cache.name;
  while (fin.good())
  {
    fin >> cache.weight;
    fin >> cache.length;
    cout << cache.name << " " << cache.weight << " " << cache.length << endl;
    total += cache.weight;
    fin >> cache.name;
  }

  cout << total << endl;
  fin.close();

  return 0;
}