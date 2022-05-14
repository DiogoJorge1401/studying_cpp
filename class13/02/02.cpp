#include <iostream>

using namespace std;

enum class Month
{
  Jan = 1,
  Fev,
  Mar,
  Abr,
  Mai,
  Jun,
  Jul,
  Ago,
  Set,
  Out,
  Nov,
  Dez
};

istream &operator>>(istream &ist, Month &month)
{
  int num{};
  ist >> num;
  month = Month(num);
  return ist;
}

int main(int argc, char const *argv[])
{
  Month opp, end, current;

  opp = Month::Fev;
  end = Month::Nov;

  cout << "Digite o número do mês atual: ";
  cin >> current;

  if (current >= opp && current <= end)
    cout << "Você está em período de aulas.\n";
  else
    cout << "Férias!\n";

  return 0;
}
