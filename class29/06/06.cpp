#include <iostream>

using namespace std;

template <typename T>
T maxn(const T *vec, int len)
{
  T bigger = vec[0];
  for (int i = 1; i < len; i++)
    if (vec[i] > bigger)
      bigger = vec[i];
  return bigger;
}

int main(int argc, const char *argv[])
{
  int intvet[] = {1, 2, 3, 4, 5, 6};
  double doublevet[] = {-4.0, -3.0, -2.0, -1.0};

  cout << maxn(intvet, 6) << endl;
  cout << maxn(doublevet, 4) << endl;
  return 0;
}