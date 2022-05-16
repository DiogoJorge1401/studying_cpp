#ifndef STRING_H
#define STRING_H

#include <string>
#include <iostream>
using namespace std;

class String : public string
{
public:
  String();
  String(const char *);
  bool equalsTo(string);

protected:
private:
};

#endif // STRING_H