#include <iostream>
#include <cstring>

using namespace std;

struct Dainty
{
  char brand[24];
  double weight;
  int calories;
};

void setDainty(Dainty &, const char * = "Charge", const double = 40.0, const int = 187);
void printDainty(const Dainty &);

int main(int argc, const char *argv[])
{
  Dainty d;
  setDainty(d);
  printDainty(d);

  setDainty(d, "Lacta");
  printDainty(d);

  setDainty(d, "Lacta", 90, 132);
  printDainty(d);
  return 0;
}

void setDainty(Dainty &dainty, const char *str, const double we, int ca)
{
  strcpy(dainty.brand, str);
  dainty.weight = we;
  dainty.calories = ca;
}

void printDainty(const Dainty &dainty)
{
  cout << dainty.brand << " " << dainty.weight << " " << dainty.calories << endl;
}