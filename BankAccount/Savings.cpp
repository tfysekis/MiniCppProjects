#include "Savings.h"

Savings::Savings(char *description, float balance) : Account(description,balance) { this->times = 0; }

bool Savings::withdraw(float amount)
{
  this->times++;
  if (this->balance >= amount){
      if (this->times > 3){
        return false;
      }else{
        this->balance -= amount;
        return true;
      }
  }else if (this->balance < amount){
      return false;
  }
}
