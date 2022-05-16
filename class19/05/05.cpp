#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int rows = 3, columns = 2;
  int matriz[rows][columns];     // {{1, 7}, {3, 5}, {4, 6}};
  int transposta[columns][rows]; // {{1, 3, 4}, {7, 5, 6}};

  cout << "Matriz 3x2\n";

  for (int i = 0; i < rows; i++)
    for (int j = 0; j < columns; j++)
      cin >> matriz[i][j];

  for (int i = 0; i < columns; i++)
    for (int j = 0; j < rows; j++)
      transposta[i][j] = matriz[j][i];

  cout << "\nTransposta 2x3\n";
  for (int i = 0; i < columns; i++)
  {
    cout << "| ";
    for (int j = 0; j < rows; j++)
      cout << transposta[i][j] << " | ";
    cout << "\n-------------\n";
  }

  return 0;
}