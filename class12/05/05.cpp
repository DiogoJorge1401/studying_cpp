#include <iostream>

using namespace std;

struct ComplexNumber
{
  float real;
  float imaginary;
};

ComplexNumber operator+(ComplexNumber, ComplexNumber);
ostream &operator<<(ostream &, ComplexNumber &);
istream &operator>>(istream &, ComplexNumber &);

int main(int argc, char const *argv[])
{
  cout << "Digite os complexos:\n";
  ComplexNumber complexNumber1, complexNumber2, sum;

  cin >> complexNumber1 >> complexNumber2;

  sum = complexNumber1 + complexNumber2;

  cout << "A soma é: " << sum;

  return 0;
}

ComplexNumber operator+(ComplexNumber a, ComplexNumber b)
{
  ComplexNumber c{a.real + b.real, a.imaginary + b.imaginary};

  return c;
}

ostream &operator<<(ostream &os, ComplexNumber &number)
{
  os
      << number.real << showpos
      << number.imaginary << "i" << endl
      << noshowpos;
  return os;
}

istream &operator>>(istream &is, ComplexNumber &cp)
{
  is >> cp.real >> cp.imaginary;
  cin.get();
  return is;
}