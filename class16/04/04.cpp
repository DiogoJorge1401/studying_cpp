#include <iostream>

using namespace std;

void showElement(int *vect, int len)
{
  const char *ch;
  for (int i = 0; i < len; i++)
    cout << vect[i] << (ch = i != len - 1 ? "," : "");
  cout << endl;
}

int main(int argc, char const *argv[])
{
  const int length = 5;

  int vect[length] = {15, 29, 48, 10, 35};
  showElement(vect, length);
  return 0;
}