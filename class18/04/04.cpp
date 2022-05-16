#include <iostream>
#include <cstring>

using namespace std;

class String : string
{
public:
  String(const char *str) : string(str) {}
  bool equalTo(string compareStr) { return !this->compare(compareStr); }
};

int main(int argc, char const *argv[])
{
  String palavra = "colega";

  if (palavra.equalTo("colega"))
    cout << "Iguais" << endl;
  else
    cout << "Diferentes" << endl;

  return 0;
}