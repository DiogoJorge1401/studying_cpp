#include <iostream>

using namespace std;

struct Chocolate
{
  char brand[50];
  float weight;
  int calories;
};

ostream &operator<<(ostream &, Chocolate);
ostream &operator<<(ostream &, Chocolate[]);

int main(int argc, char const *argv[])
{
  Chocolate chocolates[]{
      {"Charge", 2.3, 350},
      {"Garoto", 3.2, 500},
      {"Nestle", 2.5, 400},
  };

  for (int i = 0; i < 3; i++)
    cout << chocolates[i];

  return 0;
}

ostream &operator<<(ostream &os, Chocolate ch)
{
  os << ch.brand << " " << ch.weight << " " << ch.calories << endl;
  return os;
}
