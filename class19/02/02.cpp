#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  const int Cities = 4, Years = 5;
  int i = 0;

  const string cites[Cities]{"Mossoró", "Caraúbas", "Anglicos", "Pau dos Ferros"};

  const int maxTemp[Cities][Years] = {
      {35, 28, 25, 20, 24},
      {15, 19, 23, 35, 32},
      {34, 36, 30, 31, 30},
      {31, 36, 38, 32, 26}};

  for (string city : cites)
  {
    cout << city << ":\t";
    for (int temp : maxTemp[i])
      cout << temp << "\t";
    cout << endl;
    i++;
  }

  return 0;
}