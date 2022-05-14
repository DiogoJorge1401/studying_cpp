#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  char fullname[50]{}, grade;

  cout << "Como você se chama\n";

  cin.getline(fullname, 50);

  cout << "Qual conceito você merece?\n";

  cin >> grade;

  grade += 1;

  cout << endl;

  cout << "Bom dia " << fullname << ", seu conceito é " << grade << endl;
  return 0;
}