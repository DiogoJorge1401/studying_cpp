#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  char column;
  int hours, minutes;
  cout << "What time is it? (HH:mm)";
  cin >> hours >> column >> minutes;
  cout << hours << " horas" << endl;
  cout << minutes << " minutos" << endl;
  return 0;
}