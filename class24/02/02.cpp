#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
  ofstream fout("values.dat", ios_base::out | ios_base::binary);
  const unsigned short length = 3;
  long arr[length] = {38, 42, -51};

  fout.write((char *)&length, sizeof(unsigned short));
  fout.write((char *)arr, sizeof(long) * length);
  fout.close();

  ifstream finp("values.dat", ios_base::in | ios_base::binary);

  unsigned short quantityItems;
  finp.read((char *)&quantityItems, sizeof(unsigned short));

  long newArr[quantityItems];
  finp.read((char *)newArr, sizeof(long) * quantityItems);

  for (long item : newArr)
    cout << item << endl;

  finp.close();

  return 0;
}