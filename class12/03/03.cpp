#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  struct
  {
    int x = 1;
    int y = 2;
  } point;

  cout << point.x << endl;
  cout << point.y << endl;

  return 0;
}