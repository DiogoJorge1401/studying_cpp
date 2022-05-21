#include <iostream>

using namespace std;

void show()
{
  static int count = 1;
  cout << count++ << endl;
}

int main(int argc, const char *argv[])
{
  for (int i = 0; i < 5; i++)
    show();
  return 0;
}