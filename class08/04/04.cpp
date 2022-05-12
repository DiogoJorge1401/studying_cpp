#include <iostream>
#define seconds 3.156E+7
using namespace std;

double convertYearsToSeconds(int);

int main(int argc, char const *argv[])
{
  int age;
  cout << "How old are you?";
  cin >> age;

  cout.setf(ios_base::fixed, ios_base::floatfield);
  cout.precision(1);

  cout << age << " years is " << convertYearsToSeconds(age) << " seconds" << endl;

  return 0;
}

double convertYearsToSeconds(int age)
{
  return seconds * age;
}