#include "Vector.h"
#include <cmath>
#include <iostream>

Vector::Vector()
{
    this->x = 0;
    this->y = 0;
}

Vector::Vector(double x, double y)
{
    this->x = x;
    this->y = y;
}

double Vector::magnitude()
{
    return sqrt(pow(x, 2) + pow(y, 2));
}

double Vector::angle()
{
    double angle = atan2(GetY(), GetX());
    return angle;
}

double Vector::angleD()
{
    return angle() * 180 / M_PI;
}

void Vector::multiply(double f)
{
    double ax = GetX() * f;
    double ay = GetY() * f;
    SetX(ax);
    SetY(ay);
}

Vector Vector::add(Vector e)
{
    Vector v(GetX() + e.GetX(), GetY() + e.GetY());
    return v;
}

Vector Vector::clone()
{
    Vector e(GetX(), GetY());
    return e;
}


