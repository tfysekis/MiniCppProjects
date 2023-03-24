#ifndef ELECTRICALSCOOTER_H
#define ELECTRICALSCOOTER_H

#include "Scooter.h"

class ElectricalScooter : public Scooter
{
    public:
        ElectricalScooter() : Scooter(), chargingTime(0) {}
        ElectricalScooter(int maxKM, int year, int chargingTime) : Scooter(maxKM, year), chargingTime(chargingTime) {}
        double getPollutionScore();
        double getTaxes();
        int getChargingTime() { return this->chargingTime; };
        void setChargingTime(int val) { this->chargingTime = val; }
    private:
        int chargingTime;
};

#endif // ELECTRICALSCOOTER_H
