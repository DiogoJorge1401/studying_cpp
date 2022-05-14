#include <iostream>

using namespace std;

struct ComplexNumber
{
  float real;
  float imaginary;
};

ComplexNumber sum(ComplexNumber, ComplexNumber);
void show(ComplexNumber);
ComplexNumber read();

int main(int argc, char const *argv[])
{
  cout << "Digite os complexos:\n";
  ComplexNumber complexNumber1{read()}, complexNumber2{read()};

  cout << "A soma é ";
  show(sum(complexNumber1, complexNumber2));

  return 0;
}

ComplexNumber read()
{
  ComplexNumber temp;
  cin >> temp.real;
  cin >> temp.imaginary;
  cin.get();
  return temp;
}

ComplexNumber sum(ComplexNumber a, ComplexNumber b)
{
  ComplexNumber c{a.real + b.real, a.imaginary + b.imaginary};

  return c;
}

void show(ComplexNumber number)
{
  cout << number.real;
  cout << showpos;
  cout << number.imaginary << "i" << endl;
  cout << noshowpos;
}
