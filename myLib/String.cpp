#include "String.h"

String::String(const char *str) : string(str) {}
String::String() {}
bool String::equalsTo(string compareStr) { return !this->compare(compareStr); }
