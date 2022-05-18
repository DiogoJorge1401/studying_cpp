#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
  string line, newline;
  int spaces = 0;
  
  cout << "Enter a line of text:\n";
  getline(cin, line);

  for (int i = 0; line[i] && line[i] != '.'; i++)
  {
    newline += line[i];
    if (line[i] == ' ')
      spaces++;
  }

  cout << "Linha completa: " << line << endl;
  cout << "Linha até o primeiro ponto: " << newline << endl;

  return 0;
}