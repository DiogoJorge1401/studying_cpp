#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
  char animalA[20];
  char felinoA[]{"jaguar"};

  string animalS;
  string felinoS = "pantera";

  strcpy(animalA, felinoA);
  animalS = felinoS;

  strcat(animalA, "ibe");
  animalS += "rosa";

  cout << animalA << " contém " << strlen(animalA) << " caracteres.\n";
  cout << animalS << " contém " << animalS.length() << " caracteres.\n";

  return 0;
}