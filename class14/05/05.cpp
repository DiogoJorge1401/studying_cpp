#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int x, *p, **q;

  p = &x;
  q = &p;

  x = 10;

  cout << **q << endl;
  return 0;
}