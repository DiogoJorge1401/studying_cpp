#include <iostream>

using namespace std;

struct Chocolate
{
  char brand[50];
  float weight;
  int calories;
};

ostream &operator<<(ostream &, Chocolate);

int main(int argc, char const *argv[])
{
  Chocolate snack{"Charge", 2.3, 350};
  cout << snack;
  return 0;
}

ostream &operator<<(ostream &os, Chocolate ch)
{
  os << ch.brand << " " << ch.weight << " " << ch.calories << endl;
  return os;
}