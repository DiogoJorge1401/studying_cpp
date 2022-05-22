#include <iostream>

using namespace std;

template <class T>
void change(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}

int main(int argc, const char *argv[])
{
  int i = 10;
  int j = 20;

  change(i, j);
  cout << i << " " << j << endl;
  return 0;
}