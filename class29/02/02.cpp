#include <iostream>

using namespace std;

void print(const char *str, bool calls = false);

int main(int argc, const char *argv[])
{
  print("Vamos ");
  print("aprender ");
  print("C++ ", true);
  print("\n");
  return 0;
}

void print(const char *str, bool calls)
{
  static int count = 0;
  ++count;

  if (calls)
    for (int i = 0; i < count; i++)
      cout << str << " ";
  else
    cout << str;
}