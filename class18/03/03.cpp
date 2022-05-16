#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int j = 5;

  while (++j < 9)
    cout << j++ << endl;
  cout << j << endl;
  
  return 0;
}