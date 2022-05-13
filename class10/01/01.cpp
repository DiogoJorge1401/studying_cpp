#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  const int size = 3;
  float prices[]{1.5, 2, 1}, quantity[size]{}, total = 0;
  string products[]{"Alface", "Beterraba", "Cenoura"};

  cout
      << "Prezado cliente\n"
      << "Digite a quantidade de quilos desejados: \n";

  for (int i = 0; i < size; i++)
  {
    cout << products[i] << ": ";
    cin >> quantity[i];
  }

  cout << "Resultado da compra\n"
       << "--------------------\n";

  cout << fixed;
  cout.precision(2);

  for (int i = 0; i < size; i++)
  {
    float productPrice = prices[i] * quantity[i];
    total += productPrice;

    cout
        << products[i] << " = R$"
        << productPrice
        << endl;
  }
  cout
      << "--------------------\n"
      << "Total: " << total << endl;

  return 0;
}