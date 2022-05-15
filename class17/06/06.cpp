#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int x;
  cout << boolalpha;

  cout << (cin >> x, x < 0) << endl;
  return 0;
}