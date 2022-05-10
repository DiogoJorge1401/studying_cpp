#include <iostream>

using namespace std;

void line();
void small();
void medium();
void big();

int main(int argc, char const *argv[])
{
  small();
  medium();
  big();
  cout << "Se leu é gay!" << endl;
  big();
  medium();
  small();
  return 0;
}

void line()
{
  cout << "----------";
}
void small()
{
  line();
  cout << endl;
}
void medium()
{
  line();
  line();
  cout << endl;
}
void big()
{
  line();
  line();
  line();
  cout << endl;
}