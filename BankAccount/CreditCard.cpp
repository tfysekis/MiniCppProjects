#include "CreditCard.h"


CreditCard::CreditCard(char *description, float balance, int limit)
          : Account(description,balance)
{
  this->limit = limit;
}

bool CreditCard::withdraw(float amount)
{
  if (amount > this->limit){
    return false;
  }else if (amount <= this->limit){
    this->balance -= amount;
    this->limit -= amount;
    return true;
  }
}
