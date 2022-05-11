#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int km, liters;

  cout << "How many kilometers did you drive?";
  cin >> km;

  cout << "How many liter of fuel were used?";
  cin >> liters;

  cout << "The consumption of your car was " << (km / liters) << " km/liter" << endl;

  return 0;
}