#ifndef BOX_H
#define BOX_H

#include <iostream>
using namespace std;

class Box {
public:
  Box();
  Box(float, float, float);

  float Getlength();
  void Setlength(float val);
  float Getwidth();
  void Setwidth(float val);
  float Getheight();
  void Setheight(float val);

  Box operator=(Box);
  bool operator==(Box);
  bool operator!=(Box);
  Box operator++(); //++b; b++;
  Box operator++(int);
  Box operator--();
  Box operator--(int);
  Box operator+=(int);
  Box operator-=(int);
  Box operator*=(int);
  Box operator/=(int);

private:
  float length;
  float width;
  float height;
}; //end class

Box operator*(Box, float);
Box operator/(Box, float);
Box operator+(Box, float);
Box operator-(Box, float);
Box operator+(Box, Box);
Box operator-(Box, Box);

ostream &operator<<(ostream &, Box);


#endif // BOX_H
