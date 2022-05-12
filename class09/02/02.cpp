#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  double num;

  cout << "Enter a floating number: ";
  cin >> num;

  cout << num << endl;

  cout << scientific;
  cout << num << endl;

  cout << fixed;
  cout.precision(2);
  cout << num << endl;
  return 0;
}