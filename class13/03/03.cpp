#include <iostream>

using namespace std;

enum class Direction
{
  N,
  NE,
  E,
  SE,
  S,
  WE,
  W,
  NW
};

union Identifier
{
  char code[5];
  int number;
};

struct Ball
{
  Identifier id;
  char brand[30];
  int posX;
  int posY;
  Direction dir;
  float velo;
  float acce;
};

int main(int argc, char const *argv[])
{
  Ball proVolley[10];

  proVolley;             // Ball [10]
  proVolley[4];          // Ball
  proVolley[1].brand;    // Char [30]
  proVolley[1].brand[2]; // Char

  proVolley[0].dir;       // Direction
  proVolley[4].id;        // Indentifier
  proVolley[4].id.number; // Int
  proVolley[4].acce;      // Float
  return 0;
}