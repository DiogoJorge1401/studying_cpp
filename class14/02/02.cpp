#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  float torque[10]{2.5, 8.1, 3.4, 9.2, 5.7, 9.6, 6.3, 8.0, 5.4, 4.9};

  float *init = torque;
  float *final = &torque[9];

  cout << "Torques: ";
  for (int i = 0; i < 10; i++)
    cout << torque[i] << ", ";
  cout << endl;
  cout << "Primeiro: " << *init << endl;
  cout << "Último: " << *final << endl;

  return 0;
}