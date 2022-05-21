#include <iostream>

using namespace std;

typedef const double *(*myfunc)(const double *, int);
const double *f1(const double *, int);

int main()
{
  myfunc p[2] = {f1};
  cout << sizeof(p) << endl;
  return 0;
}
const double *f1(const double *vec, int n)
{
  double a = 2.0;
  return &a;
}