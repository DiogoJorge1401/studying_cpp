#include <iostream>
#include <cstring>

using namespace std;

void invertChar(const char *str, char *inverted)
{
  size_t len = strlen(str);
  for (size_t i = 0; i < len; i++)
    inverted[i] = str[len - 1 - i];
  inverted[len] = '\0';
}
 

int main(int argc, const char *argv[])
{
  char inverted[6];
  invertChar("diogo", inverted);
  cout << inverted << endl;
  return 0;
}