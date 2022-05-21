#include <iostream>

using namespace std;

inline void estimate(int lines, double (*fp)(int)) { cout << fp(lines) << endl; }

inline double me(int l) { return 0.05 * l; }
int main(int argc, const char *argv[])
{
  estimate(100, me);
  return 0;
}