#ifndef CREDITCARD_H
#define CREDITCARD_H

#include "Account.h"

class CreditCard : public Account
{
  private:
      int limit;

  public:
      CreditCard(char *description, float balance, int limit);
      bool withdraw(float );
};


#endif // CREDITCARD_H
