#include <iostream>

using namespace std;

unsigned char turnOnBit(unsigned char, int);
unsigned char turnOffBit(unsigned char, int);
bool testBit(unsigned char, int);

int main(int argc, char const *argv[])
{
  //[0][0][0][0][1][1][0][0]
  int number1 = (int)turnOnBit(8, 2);

  cout << number1 << endl;

  //[0][0][0][0][0][1][0][0]
  int number2 = (int)turnOffBit(number1, 3);

  cout << number2 << endl;

  cout << "Bit 3 está " << testBit(number2, 2) << endl;

  return 0;
}

unsigned char turnOnBit(unsigned char ch, int bit)
{
  return ch | (1 << bit);
}

unsigned char turnOffBit(unsigned char ch, int bit)
{
  return ch & ~(1 << bit);
}

bool testBit(unsigned char ch, int bit)
{
  if (ch & (1 << bit))
    return true;
  return false;
}