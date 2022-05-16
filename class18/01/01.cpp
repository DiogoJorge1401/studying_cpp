#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  string name;
  int i = 0;

  cout << "Digite seu primeiro nome:";
  cin >> name;

  while (name[i])
    cout << name[i] << ": " << int(name[i++]) << endl;

  cout << endl;
  
  for (char ch : name)
    cout << ch << ": " << int(ch) << endl;

  return 0;
}