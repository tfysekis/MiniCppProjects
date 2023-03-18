#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
    public:
        Vector();
        Vector(double x, double y);
        double GetX() {  return x; }
        double GetY() { return  y; }
        void SetX(double x) { this->x = x; }
        void SetY(double y) { this->y = y; }
        double magnitude();
        double angle();
        double angleD();
        void multiply(double f);
        Vector add(Vector e);
        Vector clone();
    private:
        double x;
        double y;
};

#endif // VECTOR_H
