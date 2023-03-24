#include "Scooter.h"
#include <cmath>

Scooter::Scooter()
{
    this->maxKM1 = 0;
    this->year1 = 0;
}

Scooter::Scooter(int maxKM1, int year1)
{
    this->maxKM1 = maxKM1;
    this->year1 = year1;
}

int Scooter::getMaxKM()
{
    return maxKM1;
}

int Scooter::getYear()
{
    return year1;
}

double Scooter::getPollutionScore()
{
    return maxKM1 * 250.0 / 365;
}

double Scooter::getTaxes()
{
    return (2022 - year1) * 12.5;
}










