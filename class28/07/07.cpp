#include <iostream>

using namespace std;

struct Pair
{
  int x, y;
};

void calc(const Pair p, int &sum, int &multiplication)
{
  sum = p.x + p.y;
  multiplication = p.x * p.y;
}

int main(int argc, const char *argv[])
{
  Pair p1;
  int sum, mult;
  cout << "Digite um par de valores:\n";
  cin >> p1.x >> p1.y;
  calc(p1, sum, mult);
  cout << "Soma: " << sum << endl;
  cout << "Multiplicação: " << mult << endl;
  return 0;
}