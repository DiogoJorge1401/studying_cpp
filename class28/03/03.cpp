#include <iostream>
#include "lib.cpp"

using namespace std;

void (*print)(const char[]);

void normal(const char[]);
void alternative(const char[]);
void message();

int main(int argc, const char *argv[])
{
  cout << "Usar print normal [s/n]? ";
  char option;
  cin >> option;

  if (option == 's')
    print = normal;
  else
    print = alternative;

  message();

  return 0;
}

void normal(const char text[]) { cout << text << endl; }
void alternative(const char text[])
{
  cout << "<<< " << text << " >>>" << endl;
}