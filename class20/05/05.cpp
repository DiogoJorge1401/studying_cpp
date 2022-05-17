#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  const int length = 10;
  int quantity = 0, biggerThanAverage = 0;
  double values[length]{}, value, media = 0;

  cout << "Digite até " << length << " valores de donativos (zero para encerrar):\n";

  while (quantity < length && (cin >> value, value) != 0)
    values[quantity++] = value;

  for (double d : values)
    media += d;

  media /= quantity;

  for (double d : values)
    if (d > media)
      biggerThanAverage++;

  cout.precision(2);
  cout << fixed << "A medida dos valores doados foi de R$ " << media << ".\n";
  cout << defaultfloat << biggerThanAverage << " valores foram maiores que a media\n";

  return 0;
}