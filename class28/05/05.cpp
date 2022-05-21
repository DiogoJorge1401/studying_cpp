#include <iostream>

using namespace std;

void count()
{
  static int count = 1;
  cout << count++ << "a chamada da função\n";
}

int main(int argc, const char *argv[])
{
  for (short i = 0; i < 3; i++)
    count();
  return 0;
}