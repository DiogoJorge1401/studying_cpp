#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  double liter = 3.4;
  double *ptr = &liter;

  cout << "O valor de litros é " << *ptr << endl;

  return 0;
}