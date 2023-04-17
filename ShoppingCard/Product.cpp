#include "Product.h"
#include <cstring>

Product::Product(unsigned int id, char *name, float price)
{
    this->id = id;
    this->price = price;
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

Product::~Product()
{
    delete[] this->name;
}


unsigned int Product::getId()
{
    return this->id;
}

char* Product::getName()
{
    return this->name;
}

float Product::getPrice()
{
    return this->price;
}
