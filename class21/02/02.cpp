#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int i = 0;
  while (!((i % 3 == 2) && (i % 5 == 3) && (i % 7 == 4)))
    i++;
  cout << i << endl;
  return 0;
}