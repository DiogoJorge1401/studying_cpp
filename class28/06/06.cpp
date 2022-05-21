#include <iostream>

using namespace std;

struct Box
{
  char brand[40];
  float height, width, length, volume;
};

void showBox(const Box &box)
{
  cout
      << box.brand << ", "
      << box.height << "cm, "
      << box.width << "cm, "
      << box.length << "cm, "
      << box.volume << "cm³" << endl;
}
void showBox(const Box *box)
{
  cout
      << box->brand << ", "
      << box->height << "cm, "
      << box->width << "cm, "
      << box->length << "cm, "
      << box->volume << "cm³" << endl;
}

void setVolume(Box &box)
{
  box.volume = box.height * box.width * box.length;
}
void setVolume(Box *box)
{
  box->volume = box->height * box->width * box->length;
}

int main(int argc, const char *argv[])
{
  Box box1 = {"adidas", 2.5f, 5.0f, 7.0f};
  setVolume(&box1);
  showBox(&box1);
  return 0;
}