#include <iostream>
#include <fstream>
using namespace std;
struct planet
{
  char name[24];
  double population;
  double gravity;
};
int main(int argc, char const *argv[])
{
  planet p{"Terra", 6820400000, 9.81};
  ofstream fout("planets.dat", ios_base::out | ios_base::binary);
  fout.write((char *)&p, sizeof(planet));
  fout.close();
  planet t;
  ifstream fin("planets.dat", ios_base::in | ios_base::binary);
  while (fin.read((char *)&t, sizeof(planet)))
  {
    cout << t.name << " "
         << t.population << " "
         << t.gravity << endl;
  }
  fin.close();
  return 0;
}