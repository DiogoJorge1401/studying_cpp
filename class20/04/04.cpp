#include <iostream>

using namespace std;

int sum(int a, int b, int c)
{
  int total = 0;
  for (; b <= c; b++)
    if (!(b % a))
      total += b;
  return total;
}

int main(int argc, char const *argv[])
{
  int a, b, c, total;
  cout << "Digite três números inteiros a, b e c (\"a\" maior que 1):\n";
  cin >> a >> b >> c;
  total = sum(a, b, c);
  cout << "A soma é " << total << endl;
  return 0;
}