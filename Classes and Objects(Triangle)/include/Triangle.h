#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle
{
    public:
        Triangle();
        Triangle(float xa, float ya, float xb, float yb, float xc, float bc);
        float GetXA() { return XA; }
        void SetXA(float val) { XA = val; }
        float GetXB() { return XB; }
        void SetXB(float val) { XB = val; }
        float GetXC() { return XC; }
        void SetXC(float val) { XC = val; }
        float GetYA() { return YA; }
        void SetYA(float val) { YA = val; }
        float GetYB() { return YB; }
        void SetYB(float val) { YB = val; }
        float GetYC() { return YC; }
        void SetYC(float val) { YC = val; }

        float getAB();
        float getBC();
        float getAC();

        float getA();
        float getB();
        float getC();

        bool isScalino();
        bool isIsopleurous();
        bool isIsosceles();

        bool isOrthogonio();
        bool isOxygonio();
        bool isAmvligonio();

        float getBase();
        float getHeight();
        float getArea();


    private:
        float XA;
        float XB;
        float XC;
        float YA;
        float YB;
        float YC;
        float A,B,C;
        double roundTo(double ,int );
        float dist (float x1, float y1, float x2, float y2);
};

#endif // TRIANGLE_H
