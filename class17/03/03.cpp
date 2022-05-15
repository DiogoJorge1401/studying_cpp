#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int j;
  for (j = 0; j < 11; j += 3)
    cout << j;
  cout << endl
       << j << endl;

  return 0;
}