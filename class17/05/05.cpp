#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
  char name[] = "suegoid kun";

  for (int i = 0; name[i]; i++)
    cout << name[i];
  cout << endl;

  for (char c : name)
    cout << c;
  cout << endl;

  return 0;
}