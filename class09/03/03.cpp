#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  const int dayHours = 24, hourMinutes = 60, minuteSeconds = 60;
  int days, hours, minutes, seconds;
  int secondsInput, rest;

  cout << "Enter the number of seconds: ";
  cin >> secondsInput; // 31'600'000

  days = (secondsInput / (dayHours * hourMinutes * minuteSeconds));

  rest = (secondsInput % (dayHours * hourMinutes * minuteSeconds));

  hours = (rest / (minuteSeconds * hourMinutes));

  rest = (rest % (minuteSeconds * hourMinutes));

  minutes = (rest / minuteSeconds);

  seconds = (rest % minuteSeconds);

  cout << secondsInput << " seconds = "
       << days << " days, "
       << hours << " hours, "
       << minutes << " minutes, "
       << seconds << " seconds\n";

  return 0;
}