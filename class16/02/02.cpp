#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int x;
  cout << "Digite um valor:  ";
  for (cin >> x; x; cin >> x)
    cout << "Digite outro valor:  ";
  return 0;
}