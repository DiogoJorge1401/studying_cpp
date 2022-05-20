#include <iostream>

using namespace std;

int subst(char *, char, char);

int main(int argc, const char *argv[])
{
  cout << *"queijo" << endl;
  cout << "presuto"[2] << endl;
  return 0;
}

int subst(char *str, char c1, char c2)
{
  unsigned short count = 0;
  while (*str)
  {
    if (*str == c1)
    {
      *str = c2;
      count++;
    }
    str++;
  }

  return count;
}