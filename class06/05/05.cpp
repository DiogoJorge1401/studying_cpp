#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  short Sshort;
  int Sint;
  long Slong;
  long long Sllong;
  int DataTypeTotalSize = sizeof Sshort + sizeof Sint + sizeof Slong + sizeof Sllong;

  cout << "short:\t\t" << sizeof Sshort << " bytes" << endl;
  cout << "int:\t\t" << sizeof Sint << " bytes" << endl;
  cout << "long:\t\t" << sizeof Slong << " bytes" << endl;
  cout << "long long:\t" << sizeof Sllong << " bytes" << endl;
  cout << "Total:\t\t" << DataTypeTotalSize << endl;

  return 0;
}