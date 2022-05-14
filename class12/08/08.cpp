#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct Date
{
  short day;
  short month;
  short year;
};

int daysOfLife(Date, Date);
ostream &operator<<(ostream &, Date);
istream &operator>>(istream &, Date &);
int operator-(Date, Date);

int main(int argc, char const *argv[])
{
  Date nasc, today;

  cout << "Data de nascimento: ";
  cin >> nasc;

  cout << "Data de Hoje: ";
  cin >> today;

  cout << "Voce tem " << nasc - today << " dias de vida." << endl;

  return 0;
}

ostream &operator<<(ostream &os, Date date)
{
  string days = date.day < 10 ? "0" + to_string(date.day) : to_string(date.day);
  string months = date.month < 10 ? "0" + to_string(date.month) : to_string(date.month);

  cout << days << "/" << months << "/" << date.year;
  return os;
}
istream &operator>>(istream &is, Date &date)
{
  char separator;
  cin >> date.day >> separator >> date.month >> separator >> date.year;
  return is;
}
int operator-(Date date1, Date date2)
{
  const int daysPerMonth = 31;
  const int daysPerYear = 365;

  // Na data 05/02/2010, temos 1 (um) mês completo e mais 5 dias em 2010
  // Essa é a justificativa para subtrair 1 do valor do mês
  int ini = (date1.year * daysPerYear) + ((date1.month - 1) * daysPerMonth) + date1.day;
  int fim = (date2.year * daysPerYear) + ((date2.month - 1) * daysPerMonth) + date2.day;

  return fim - ini;
}