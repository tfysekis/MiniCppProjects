#ifndef SAVINGS_H
#define SAVINGS_H

#include "Account.h"

class Savings : public Account
{
    public:
        Savings(char *description, float balance);
        bool withdraw(float amount);
    private:
        int times;
};

#endif // SAVINGS_H
