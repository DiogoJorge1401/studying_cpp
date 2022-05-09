#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  if (argc < 3)
    return 0;

  cout << argv[1] << " " << argv[2] << " programar!" << endl;

  return 0;
}