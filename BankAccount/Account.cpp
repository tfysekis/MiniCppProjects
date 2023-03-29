#include "Account.h"
#include <cstring>
Account::Account(char *description)
{
    description = new char[strlen(this->description) + 1];
    strcpy(description,this->description);
}

Account::Account(char *description, float balance)
{
    this->description = description;
    this->balance = balance;
}

bool Account::withdraw(float amount)
{
    if (this->balance >= amount){
      this->balance -= amount;
      return true;
    }else{
      return false;
    }
}

bool Account::deposit(float amount)
{
    this->balance += amount;
    return true;
}

float Account::getBalance()
{
    return this->balance;
}

char *Account::getDescription()
{
    return this->description;
}
