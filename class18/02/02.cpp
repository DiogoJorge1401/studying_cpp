#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int w = 1, x, y;
  x = y = 10;

  // while (w < 1)
  //   cout << w << endl;

  // do
  //   cout << w << endl;
  // while (w < 1);

  do
  {
    while (x > 0)
      cout << x-- << " ";
    cout << endl;
  } while (x = --y);

  return 0;
}