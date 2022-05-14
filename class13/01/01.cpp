#include <iostream>
#include <random>

using namespace std;

enum Gender
{
  Male,
  Female
};

int main(int argc, char const *argv[])
{
  random_device rand;

  int sortition = rand() % 2;

  if (sortition == Male)
    cout << "Male" << endl;
  else
    cout << "Female" << endl;

  return 0;
}