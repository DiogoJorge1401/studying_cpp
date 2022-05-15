#include <iostream>

using namespace std;

union Color
{
  struct
  {
    unsigned char a;
    unsigned char b;
    unsigned char g;
    unsigned char r;
  } rgba;

  unsigned coded;
};

void readRGBA(Color *);
void readInt32(Color *);
void showColor(Color *, bool);

int main(int argc, char const *argv[])
{
  Color foreground, background;
  cout << "Digite uma cor no formato\n";
  cout << "RGBA:  ";
  readRGBA(&foreground);

  cout << "Int32:  ";
  readInt32(&background);

  cout << "\nExibindo as cores em formatos invertidos:\n";
  showColor(&foreground, false);
  showColor(&background, true);
  return 0;
}

void readRGBA(Color *color)
{
  short r, g, b, a;
  cin >> r >> g >> b >> a;

  color->rgba.r = (unsigned char)r;
  color->rgba.g = (unsigned char)g;
  color->rgba.b = (unsigned char)b;
  color->rgba.a = (unsigned char)a;
}
void readInt32(Color *color)
{
  cin >> color->coded;
}
void showColor(Color *color, bool type)
{
  if (type)
    cout << "RGBA("
         << int(color->rgba.r) << ","
         << int(color->rgba.g) << ","
         << int(color->rgba.b) << ","
         << int(color->rgba.a) << ")"
         << endl;
  else
    cout << color->coded << endl;
}