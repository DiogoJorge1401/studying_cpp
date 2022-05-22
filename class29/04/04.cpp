#include <iostream>
#include <cstring>

using namespace std;

struct String
{
  char *str;
  int len;
};

void adjust(String &, const char *);
void show(String, int = 1);
void show(const char *, int = 1);

int main(int argc, const char *argv[])
{
  String msg;
  char test[] = "Realidade de ponteiro e strings\n";

  adjust(msg, test);
  show(msg);
  show(msg, 2);

  test[0] = 'D';
  test[1] = 'u';

  show(test);
  show(test, 3);

  show("Pronto!");

  delete[] msg.str;

  return 0;
}
void adjust(String &msg, const char *str)
{
  msg.len = strlen(str);
  msg.str = new char[msg.len + 1];

  strcpy(msg.str, str);
}

void show(String msg, int times)
{
  for (int i = 0; i < times; i++)
    cout << msg.str;
  cout << endl;
}
void show(const char *msg, int times)
{
  for (int i = 0; i < times; i++)
    cout << msg;
  cout << endl;
}