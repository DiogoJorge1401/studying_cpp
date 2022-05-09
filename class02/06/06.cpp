#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  if (argc < 2)
    return 1;

  system(argv[1]);
  
  return 0;
}