#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int *ptr = (int *)0x01;
  cout << *ptr;
  return 0;
}