#include <iostream>

using namespace std;

float harmonicMean(float, float);

int main(int argc, char const *argv[])
{
  float x, y;

  cout << "Enter a number: ";
  cin >> x;

  cout << "Enter another number: ";
  cin >> y;

  cout << "Teh harmonic mean of the numbers is " << harmonicMean(x, y) << endl;

  return 0;
}

float harmonicMean(float x, float y)
{
  return (2 * x * y) / (x + y);
}