#include <iostream>

using namespace std;

float celciusToFahrenheit(float);

int main(int argc, char const *argv[])
{
  float celcius;
  cout << "Enter a temperature in degrees celcius: ";
  cin >> celcius;

  float fahrentheit = celciusToFahrenheit(celcius);

  cout << celcius << " degrees celcius equals " << fahrentheit << " degrees fahrenheit\n";

  return 0;
}

float celciusToFahrenheit(float cel)
{
  return 1.8 * cel + 32;
}