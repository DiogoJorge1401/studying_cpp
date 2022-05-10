#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  double packPrice, total, years, perDay, pack = 20.0, yearDays = 365.0;

  cout << "A quantos anos você fuma? ";
  cin >> years;

  cout << "Quanto cigarros você fuma por dia? ";
  cin >> perDay;

  cout << "Qual o preço médio de um maço de cigarros? ";
  cin >> packPrice;

  total = ((yearDays / (pack / perDay)) * packPrice) * years;

  cout << "Você gastou até agota R$" << total << " com cigarros" << endl;

  return 0;
}