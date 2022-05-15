#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  for (int i = 0, j = 1; i < 14; i += 2, j *= 2)
    cout << j << " ";

  cout << endl;
  return 0;
}