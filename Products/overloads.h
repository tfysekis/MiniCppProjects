#ifndef OVERLOADS_H_INCLUDED
#define OVERLOADS_H_INCLUDED
#include <iostream>
#include "Product.h"
using namespace std;

ostream& operator<<(ostream& os, Product& product) {
    os << product.getName() << " ";
    os << product.getPrice();
    return os;
}

#endif // OVERLOADS_H_INCLUDED
