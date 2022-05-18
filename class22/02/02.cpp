#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
  int num;
  cout << "Enter a positive or negative number: ";
  cin >> num;
  cout << "O valor absoluto de " << num << " é " << (num < 0 ? -num : num) << endl;
  return 0;
}