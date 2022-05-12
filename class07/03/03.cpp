#include <iostream>

using namespace std;

void charade(unsigned char, int);

int main(int argc, char const *argv[])
{
  charade('<', 20);
  charade('\a', 90);
  charade('(', 72);
  charade('5', 48);
  charade(0x01, 107);
  cout << endl;
  return 0;
}

void charade(unsigned char ch, int x)
{
  unsigned char letter = ch + x;
  cout << letter;
}