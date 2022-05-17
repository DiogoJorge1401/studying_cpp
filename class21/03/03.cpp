#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  string product,
      mostExpensiveProduct;
  double productPrice,
      total,
      mostExpensiveProductPrice;
  char answer;
  unsigned greaterThan1000;

  greaterThan1000 = mostExpensiveProductPrice = productPrice = total = 0;

  cout << "\tComputer shop\n";

  do
  {
    cout << "\t-------------\n";
    cout << "Product: ";
    cin >> product;
    cout << "Price: ";
    cin >> productPrice;

    total += productPrice;
    greaterThan1000 = productPrice > 1000 ? greaterThan1000 + 1 : greaterThan1000;

    if (productPrice > mostExpensiveProductPrice)
    {
      mostExpensiveProductPrice = productPrice;
      mostExpensiveProduct = product;
    }
    cout << "\t-------------\n";
    cout << "Deseja continuar [S/N]?";
    cin >> answer;
    cout << endl;

  } while (tolower(answer) == 's');

  cout << "Total da compra: R$" << total << endl;
  cout << greaterThan1000 << " produtos custam mais de R$1000.\n";
  cout << mostExpensiveProduct << " é o produto mais caro.\n";

  return 0;
}