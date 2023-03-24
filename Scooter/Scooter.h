#ifndef SCOOTER_H
#define SCOOTER_H


class Scooter
{
    public:
        Scooter();
        Scooter(int , int );
        int getMaxKM();
        int getYear();
        double getPollutionScore();
        virtual double getTaxes();


    private:
        int maxKM1;
        int year1;
};

#endif // SCOOTER_H
