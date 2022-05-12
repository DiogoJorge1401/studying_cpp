#include <iostream>

using namespace std;

void convertToASCII(unsigned char);

int main(int argc, char const *argv[])
{
  convertToASCII(80);
  convertToASCII(114);
  convertToASCII(111);
  convertToASCII(103);
  convertToASCII(67);
  convertToASCII(111);
  convertToASCII(109);
  convertToASCII(112);
  cout << endl;
  return 0;
}

void convertToASCII(unsigned char num)
{
  cout << num;
}