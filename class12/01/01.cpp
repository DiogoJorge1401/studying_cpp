#include <iostream>
#include <cstring>

using namespace std;

struct Player
{
  char name[40];
  float salary;
  unsigned goals;
};

void show(Player);
Player read();

int main(int argc, char const *argv[])
{
  cout << "Digite todas as informações sobre o jogador:\n";

  Player bob = read();
  Player sue = bob;

  show(bob);
  show(sue);

  return 0;
}

void show(Player p)
{
  cout << p.name << " "
       << p.salary << " "
       << p.goals << endl;
}

Player read()
{
  Player p;
  cin.getline(p.name, 40);
  cin >> p.salary;
  cin >> p.goals;
  return p;
}