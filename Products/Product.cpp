#include "Product.h"
#include <cstring>

Product::Product()
{
    this->name = nullptr;
    this->price = 0;
}

Product::Product(const char *name, float price)
{
    // Allocate memory for the name and copy the argument into it
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->price = price;
}

Product::~Product()
{
    delete[] this->name;
}

char * Product::getName()
{
    return this->name;
}

void Product::setName(const char *name)
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name,name);
}

float Product::getPrice()
{
    return this->price;
}


void Product::setPrice(float price)
{
    this->price = price;
}
