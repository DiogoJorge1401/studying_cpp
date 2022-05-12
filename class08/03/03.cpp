#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  double num;
  cout << "Type a floating point: ";
  cin >> num;

  cout << "Notacao padrao: " << num << endl;

  cout.setf(ios_base::scientific, ios_base::floatfield);
  cout << "Notacao cientifica: " << num << endl;

  cout.setf(ios_base::fixed, ios_base::floatfield);
  cout << "Notacao decima: " << num << endl;
  return 0;
}