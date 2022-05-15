#include <iostream>

using namespace std;

struct Player
{
  char name[20];
  float salary;
  unsigned gols;
};

ostream &operator<<(ostream &, Player);
void showElement(Player *, int);

int main(int argc, char const *argv[])
{
  int length = 1;
  Player *players = new Player[length]{{"Suegoid Kun", 9200, 150}};
  showElement(players, length);
  return 0;
}
ostream &operator<<(ostream &ost, Player p)
{
  ost << p.name << ", " << p.gols << ", " << p.salary;
  return ost;
}

void showElement(Player *vect, int len)
{
  for (int i = 0; i < len; i++)
    cout << vect[i] << endl;
}
