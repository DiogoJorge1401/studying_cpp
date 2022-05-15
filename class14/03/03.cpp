#include <iostream>

using namespace std;

struct Fish
{
  string type;
  float weight;
  unsigned length;
};

void showFishWithPointer(Fish *fishPtr)
{
  cout
      << "Com ponteiro: " << fishPtr->type
      << " com " << fishPtr->weight
      << "g e " << fishPtr->length << "cm\n";
}
void showFishWithoutPointer(Fish fish)
{
  cout
      << "Sem ponteiro: " << fish.type
      << " com " << fish.weight
      << "g e " << fish.length << "cm\n";
}

int main(int argc, char const *argv[])
{
  Fish peixe{"Piaba", 6.5, 5};
  Fish *ptr = &peixe;
  showFishWithPointer(ptr);
  showFishWithoutPointer(peixe);
  return 0;
}