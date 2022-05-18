#include <iostream>

using namespace std;

enum class Preference
{
  name,
  role,
  nickname
};
struct Bop
{
  string name;
  string role;
  string nickname;
  Preference preference;
};

string chooseWayToShow(Preference preference, Bop bop)
{
  string choose;
  switch (preference)
  {
  case Preference::name:
    choose = bop.name;
    break;
  case Preference::role:
    choose = bop.role;
    break;
  case Preference::nickname:
    choose = bop.nickname;
    break;
  }

  return choose;
}

int main(int argc, char const *argv[])
{
  Bop bops[] = {
      {"Jose", "Contador", "Paquito", Preference::nickname},
      {"Marcos", "Porteiro", "Bibiri", Preference::role},
      {"Joao", "Seguranca", "Montanha", Preference::role},
      {"Carlos", "Motorista", "Tito", Preference::name}};

  cout << "Listagem de Funcionários\n"
       << "  a. Mostrar por nome\n"
       << "  b. Mostrar por cargo\n"
       << "  c. Mostrar por apelido\n"
       << "  d. Mostrar por preferência\n"
       << "  e. Sair\n";

  cout << "\nDigite sua opção: ";
  char choose;
  cin >> choose;

  while (choose != 'e')
  {
    switch (choose)
    {
    case 'a':
      for (Bop bop : bops)
        cout << bop.name << endl;
      break;
    case 'b':
      for (Bop bop : bops)
        cout << bop.role << endl;
      break;
    case 'c':
      for (Bop bop : bops)
        cout << bop.nickname << endl;
      break;
    case 'd':
      for (Bop bop : bops)
        cout << chooseWayToShow(bop.preference, bop) << endl;
      break;
    default:
      cout << "Opcão inválida!\n";
    }
    cout << "\nDigite sua opção: ";
    cin >> choose;
  }

  cout << "Tchau!\n";

  return 0;
}