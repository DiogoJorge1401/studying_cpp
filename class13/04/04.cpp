#include <iostream>

using namespace std;

union Color
{
  unsigned char name[10];
  unsigned char code[5];
  int number;
};

struct Car
{
  unsigned char brand[15];
  unsigned releaseDate;
  Color color;
  float price;
};

Car createCar();

ostream &operator<<(ostream &, Car);

int main(int argc, char const *argv[])
{
  Car cars[10]{
      {"Vectra", 2009, "Azul", 58000.0},
      {"Polo", 2008, "Preto", 45000.0}};

  cout << "Entre com uma marca"
          ", ano de fabricação"
          ", cor(nome,código,numero)"
          ", preço:\n";

  cars[2] = createCar();

  cout << "\nCarros em Estoque"
          "\n-----------------\n";

  cout << cars[0];
  cout << cars[1];
  cout << cars[2];

  return 0;
}

Car createCar()
{
  Car car;
  cin >> car.brand >> car.releaseDate >> car.color.code >> car.price;
  return car;
}

ostream &operator<<(ostream &ost, Car c)
{
  ost << c.brand << "\t";
  ost << c.releaseDate << "\t";
  ost << c.color.name << "\t";
  ost << c.price << endl;

  return ost;
}