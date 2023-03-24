#include "ElectricalScooter.h"


double ElectricalScooter::getTaxes()
{
    float taxes = Scooter::getTaxes() * 0.2;
    return Scooter::getTaxes() - taxes;
}


double ElectricalScooter::getPollutionScore()
{
    return getChargingTime() * 300.0 / 365;
}
