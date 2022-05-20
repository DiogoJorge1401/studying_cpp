#include <iostream>

using namespace std;

struct candidate
{
  char name[30];
  int grades[3];
};

void showCandite(candidate c)
{
  cout << "Name: " << c.name << endl
       << "Grades [ ";
  for (int grade : c.grades)
    cout << grade << " ";
  cout << "]\n";
}
void showCandite(candidate *c)
{
  cout << "Name: " << c->name << endl
       << "Grades [ ";
  for (int grade : c->grades)
    cout << grade << " ";
  cout << "]\n";
}
void showCandite(candidate *c, unsigned short len)
{
  for (int i = 0; i < len; i++)
    showCandite(c[i]);
}

int main(int argc, const char *argv[])
{
  candidate c1 = {"suegoidkun", {8, 9, 10}},
            c2 = {"ogoidkun", {9, 9, 10}},
            c3 = {"suetamkun", {10, 9, 10}},
            candidates[] = {c1, c2, c3};

  showCandite(c1);
  cout << endl;
  showCandite(&c1);
  cout << endl;
  showCandite(candidates, 3);
  return 0;
}