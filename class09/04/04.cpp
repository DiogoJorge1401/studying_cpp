#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  double bet1, bet2, award;

  cout << "Digite a quantia apostada pelo jogador 1: ";
  cin >> bet1;

  cout << "Digite a quantia apostada pelo jogador 2: ";
  cin >> bet2;

  cout << "Entre com o valor do prêmio: ";
  cin >> award;

  double bet = bet1 + bet2;

  double betPlayer1 = (bet1 * award) / bet;
  double betPlayer2 = award - betPlayer1;

  cout << fixed;
  cout.precision(1);

  cout << "O jogador 1 tem direito a R$"<<betPlayer1 << endl;
  cout << "O jogador 2 tem direito a R$"<<betPlayer2 << endl;

  return 0;
}