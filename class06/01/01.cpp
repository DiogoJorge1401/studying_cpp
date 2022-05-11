#include <iostream>
#include <climits>

using namespace std;

int main(void)
{
  int total = 100000000 + 200000000;
  long multi{100000000l * 200000000};

  cout << multi << endl;

  return 0;
}