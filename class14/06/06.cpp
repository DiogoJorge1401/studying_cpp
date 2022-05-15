#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  char ch = 'A';
  char *ptrCh = &ch;

  *ptrCh = 'B';
  
  cout << ch << endl;
  cout << *ptrCh << endl;
  return 0;
}