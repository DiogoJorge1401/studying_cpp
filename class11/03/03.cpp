#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
  char felino[8]{"Tigre"};
  char animal[8];

  /*
    animal[0] = felino[0];
    animal[1] = felino[1];
    animal[2] = felino[2];
    animal[3] = felino[3];
    animal[4] = felino[4];
    animal[5] = '\0';
  */

  strcpy(animal, felino);

  cout
      << animal << "\n";

  return 0;
}
