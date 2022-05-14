#include <iostream>
#include <cstring>

using namespace std;

char getLastChar(char[]);

int main(int argc, char const *argv[])
{
  char word[100]{};

  cout << "Digite uma palavra: ";
  cin >> word;

  cout << "Em " << word << " a última letra é " << getLastChar(word) << endl;

  return 0;
}

char getLastChar(char str[])
{
  int pos = strlen(str) - 1;

  return str[pos];
}