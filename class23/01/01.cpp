#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
  ifstream finp("intro.txt");
  ofstream fout("result.txt");

  string text;
  int number;
  finp >> number;

  while (!finp.eof())
  {
    if (finp.good())
      fout << number << endl;
    else
    {
      finp.clear();
      finp >> text;
    }
    finp >> number;
  }

  finp.close();
  fout.close();
  return 0;
}