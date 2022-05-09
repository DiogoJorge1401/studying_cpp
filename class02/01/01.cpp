#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  /*
   *****_***** *_________*
   ****___**** **_______**
   ***_____*** ***_____***
   **_______** ****___****
   *_________* *****_*****
   */
  cout << "Programa: " << argv[0] << endl;

  if (argc > 1)
    cout << "Arg 1: " << argv[1] << endl;

  return 0;
}
