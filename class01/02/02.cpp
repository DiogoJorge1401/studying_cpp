#include <iostream>
using namespace std;

int main()
{
  int days;
  cout << "Number of days: ";
  cin >> days;

  int hours = days * 24;
  cout << days << " days have " << hours << " hours." << endl;

  return 0;
} 