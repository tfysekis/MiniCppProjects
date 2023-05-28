#include "Box.h"
#include <iostream>

using namespace std;

Box::Box() { width = height = length = 0; }

Box::Box(float a, float b, float c) {
    length = a;
    width = b;
    height = c;
}

Box operator*(Box b, float k) {
    return Box(b.Getlength() * k, b.Getwidth() * k, b.Getheight() * k);
}

Box operator/(Box b, float k) {
    return Box(b.Getlength() / k, b.Getwidth() / k, b.Getheight() / k);
}
Box operator+(Box b, float k) {
    return Box(b.Getlength() + k, b.Getwidth() + k, b.Getheight() + k);
}
Box operator-(Box b, float k) {
    return Box(b.Getlength() - k, b.Getwidth() - k, b.Getheight() - k);
}

Box operator+(Box a, Box b) {
    return Box(a.Getlength() + b.Getlength(), a.Getwidth() + b.Getwidth(),a.Getheight() + b.Getheight());
}

Box operator-(Box a, Box b) {
    return Box(a.Getlength() - b.Getlength(), a.Getwidth() - b.Getwidth(),a.Getheight() - b.Getheight());
}


bool Box::operator==(Box b) {
    return (length == b.Getlength() && width == b.Getwidth() &&height == b.Getheight());
}

bool Box::operator!=(Box b) {
    return !(length == b.Getlength() && width == b.Getwidth() && height == b.Getheight());
}

Box Box::operator++() {
    width++;
    height++;
    length++;
    return *this;
}


Box Box::operator++(int k) {
    Box back = *this;
    width++;
    height++;
    length++;
    return back;
}
Box Box::operator--() {
    width--;
    height--;
    length--;
    return *this;
}
Box Box::operator--(int k) {
    Box back = *this;
    width--;
    height--;
    length--;
    return back;
}

Box Box::operator+=(int k) {
  width += k;
  height += k;
  length += k;
  return *this;
}

Box Box::operator-=(int k) {
  width -= k;
  height -= k;
  length -= k;
  return *this;
}

Box Box::operator*=(int k) {
  width *= k;
  height *= k;
  length *= k;
  return *this;
}
Box Box::operator/=(int k) {
  width /= k;
  height /= k;
  length /= k;
  return *this;
}

Box Box::operator=(Box b) {
  length = b.length;
  width = b.width;
  height = b.height;
  return *this;
}

ostream &operator<<(ostream &o, Box b) {
  o << "length: " << b.Getlength() << ", width: " << b.Getwidth()
    << ", height: " << b.Getheight();
  return o;
}

float Box::Getlength() { return length; }
void Box::Setlength(float val) { length = val; }
float Box::Getwidth() { return width; }
void Box::Setwidth(float val) { width = val; }
float Box::Getheight() { return height; }
void Box::Setheight(float val) { height = val; }
