#include "Triangle.h"
#include <cmath>
#include <iostream>

using namespace std;

#define E 0.0001

Triangle::Triangle()
{
    XA=XB=XC=YA=YB=YC=0;
}

Triangle::Triangle(float xa, float ya, float xb, float yb, float xc, float yc)
{
    XA = xa;
    XB = xb;
    XC = xc;
    YA = ya;
    YB = yb;
    YC = yc;
}


float Triangle::dist(float x1, float y1, float x2, float y2)
{
    return sqrt( (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2) );
}

float Triangle::getAB()
{
    return dist(XA,YA,XB,YB);
}

float Triangle::getAC()
{
    return dist(XA,YA,XC,YC);
}


float Triangle::getBC()
{
    return dist(XC,YC,XB,YB);
}


float Triangle::getA()
{
    double cosa = (pow(getAC(),2) + pow(getAB(),2) - pow(getBC(),2)) / (2 * getAC() * getAB());
    return acos(cosa);
}

float Triangle::getB()
{
    double cosb = (pow(getBC(),2) + pow(getAB(),2) - pow(getAC(),2)) / (2 * getBC() * getAB());
    return acos(cosb);
}

float Triangle::getC()
{
    double cosc = (pow(getBC(),2) + pow(getAC(),2) - pow(getAB(),2)) / (2 * getBC() * getAC());
    return acos(cosc);
}


bool Triangle::isIsopleurous()
{
    if ((fabs(getAB() - getAC()) <= E) && (fabs(getAB() - getBC()) <= E)){
        return true;
    }else{
        return false;
    }
}

bool Triangle::isIsosceles()
{
    if ( (fabs(getAB() - getAC()) <= E ) || (fabs(getAC() - getBC()) <= E ) || ( fabs(getAB() - getBC()) <= E )){
        return true;
    }else{
        return false;
    }
}


bool Triangle::isScalino()
{
    return !isIsosceles();
}


bool Triangle::isOrthogonio()
{
    if((fabs(getA() - M_PI/2) <= E) || (fabs(getB() - M_PI/2) <= E) || (fabs(getC() - M_PI/2) <= E) ){
        return true;
    }else{
        return false;
    }
}

bool Triangle::isAmvligonio()
{
    if ((roundTo(getA()*180/M_PI,1) > 90) || (roundTo(getB()*180/M_PI,1) > 90) || (roundTo(getC()*180/M_PI,1) > 90)){
        return true;
    }else{
        return false;
    }
}


bool Triangle::isOxygonio()
{
    if ((roundTo(getA()*180/M_PI,1) < 90) && (roundTo(getB()*180/M_PI,1) < 90) && (roundTo(getC()*180/M_PI,1) < 90)){
        return true;
    }else{
        return false;
    }
}

double Triangle::roundTo(double val, int digits)
{
    double k = pow(10,digits);
    return round(val*k)/k;
}

float Triangle::getBase()
{
    return roundTo(getAB(),1);
}

float Triangle::getHeight()
{
    float h = sin(getA()) * getAC();
    return h;
}

float Triangle::getArea()
{
    float e = getBase() * getHeight() / 2;
    return e;
}

