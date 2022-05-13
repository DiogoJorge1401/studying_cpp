#include <iostream>

using namespace std;

void showArrayValues(string, int[], int);

int main(int argc, char const *argv[])
{
  const int size = 5;

  int arrA[size]{10, 20, 30, 40, 50};
  int arrB[size]{10, 20};
  int arrC[size]{};

  arrC[2] = 30;

  showArrayValues("Array A", arrA, size);
  showArrayValues("Array B", arrB, size);
  showArrayValues("Array C", arrC, size);

  return 0;
}

void showArrayValues(string name, int arr[], int size)
{
  cout << name << ": ";
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}