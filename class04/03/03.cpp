#include <iostream>

using namespace std;

void OneThree();
void Two();

int main(int argc, char const *argv[])
{
  cout << "starting now!" << endl;
  OneThree();
  cout << "Done!";
  return 0;
}

void OneThree()
{
  cout << "One ";
  Two();
  cout << "Three" << endl;
}

void Two()
{
  cout << "Two ";
}