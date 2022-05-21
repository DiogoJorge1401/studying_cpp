#include <iostream>

using namespace std;

inline double square(double x) { return x * x; }

int main(int argc, const char *argv[])
{
  double a, b;
  a = square(2);
  b = square(4);
  cout << a << endl;
  cout << b << endl;
  return 0;
}