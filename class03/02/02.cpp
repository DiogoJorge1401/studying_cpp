#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  float height, width, length, volume;

  cout << "Entre com a altura, largura e comprimento em \"cm\"" << endl;

  cin >> height >> width >> length;

  volume = height * width * length;

  cout << "O volume é " << volume << " cm cúbicos" << endl;
  
  return 0;
}