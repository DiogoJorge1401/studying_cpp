#include <iostream>

using namespace std;

struct Player
{
  char name[40];
  float salary;
  unsigned goals;
};

int main(int argc, char const *argv[])
{
  Player team[22]{
      {"Suegoid Kun", 7000, 1000},
      {"Suetam Kun", 9000, 900},
  };

  return 0;
}