#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  double x1, x2;

  cout << "Enter the value of x1: ";
  cin >> x1;

  cout << "Enter the value of x2: ";
  cin >> x2;

  cout << "The integer sum of the values is " << int(x1) + int(x2) << endl;

  return 0;
}