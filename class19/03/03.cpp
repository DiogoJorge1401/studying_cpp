#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int columns, rows;
  cout << "Quantidade de linhas e colunas:  ";
  cin >> rows >> columns;
  /*
    ponteiro para vetor(ponteiro) de inteiros
    int ** arr[rows] = [*int, *int, *int, *int, *int]
  */
  int **arr = new int *[rows];

  for (int i = 0; i < rows; i++)
    /*
     vetor(ponteiro) de inteiros
     int * arr[i] = [int, int, int, int]
   */
    arr[i] = new int[columns];

  for (int i = 0; i < rows; i++)
    for (int j = 0; j < columns; j++)
    {
      cout << "Valor para " << i + 1 << " linha e " << j + 1 << " coluna:  ";
      cin >> arr[i][j];
    }

  for (int i = 0; i < rows; i++)
    delete[] arr[i];
  delete[] arr;

  return 0;
}