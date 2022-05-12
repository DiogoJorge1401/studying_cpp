#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  unsigned char state = 1; //[0][0][0][0][0][0][0][1]
  state = ~state;          //[1][1][1][1][1][1][1][0]
  cout << (int)state << endl;

  state = 1;          //[0][0][0][0][0][0][0][1]
  state = state << 3; //[0][0][0][0][1][0][0][0]
  cout << (int)state << endl;

  state = 10;         //[0][0][0][0][1][0][0][1]
  state = state >> 3; //[0][0][0][0][0][0][0][1]
  cout << (int)state << endl;
  return 0;
}