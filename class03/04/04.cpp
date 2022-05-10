#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int seconds, minutes;
  cout << "Enter an amount of minutes: ";
  cin >> minutes;
  seconds = minutes * 60;
  cout << "There are " << seconds << " seconds in " << minutes << " minutes." << endl;
  return 0;
}