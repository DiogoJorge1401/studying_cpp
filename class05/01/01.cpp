#include <iostream>

using namespace std;

void showTime(int, int);

int main(void)
{
  int hours, minutes;

  cout << "Enter the number of hours: ";
  cin >> hours;

  cout << "Enter the number of minutes: ";
  cin >> minutes;

  showTime(hours, minutes);

  return 0;
}

void showTime(int hours, int minutes)
{
  cout << hours << ':' << minutes << endl;
}