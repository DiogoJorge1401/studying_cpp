#include <iostream>
#include <math.h>
using namespace std;

float imc(float, float);
double imc(double, double);

int main(int argc, char const *argv[])
{
  cout.precision(12);
  cout << "float:  " << imc(1.75f, 80.0f) << endl;
  cout << "double: " << imc(1.75, 80.0) << endl;
  return 0;
}

float imc(float height, float weight)
{
  return weight / (height * height);
}

double imc(double height, double weight)
{
  return weight / (height * height);
}