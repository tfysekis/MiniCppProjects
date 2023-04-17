#include "Customer.h"

Customer::Customer(char * username)
{
    this->username = username;

    // Set all values in the shopping cart to NULL
    for (int i = 0; i < MAX_ITEMS; i++) {
        shoppingCart[i] = nullptr;
    }

}

Customer::~Customer()
{
    //delete[] this->username;


    // Free memory allocated for each product in the shopping cart
    for (int i = 0; i < MAX_ITEMS; i++) {
        delete shoppingCart[i];
        shoppingCart[i] = nullptr;
    }
}

char* Customer::getUsername()
{
    return this->username;
}

int Customer::getNumberOfProducts()
{
    int count = 0;
    for (int i = 0; i < MAX_ITEMS; i++){
        if (shoppingCart[i] != nullptr){
            count++;
        }
    }
    return count;
}

bool Customer::addProduct(Product *product)
{
     if (getNumberOfProducts() == MAX_ITEMS){
        return false; // shopping cart is full
    }

    // Find the first available position in the shopping cart
    int i = 0;
    while (i < MAX_ITEMS && shoppingCart[i] != nullptr) {
        i++;
    }

    if (i == MAX_ITEMS) {
        return false; // no available positions in the shopping cart
    }

    // Store the product at the available position
    shoppingCart[i] = product;
    return true;
}


float Customer::getTotalCost()
{
    float total = 0;
    for (int i = 0; i < MAX_ITEMS; i++){
        if (shoppingCart[i] != nullptr){
            total += shoppingCart[i]->getPrice();
        }
    }
    return total;
}


Product* Customer::findProductById(unsigned int id, int &pos)
{
    bool flag = false;
    for (int i = 0; i < MAX_ITEMS; i++){
        if (shoppingCart[i] != nullptr && shoppingCart[i]->getId() == id){
            flag = true;
            pos = i;
            break;
        }
    }
    if (flag == true){
        return shoppingCart[pos];
    }else{
        pos = -1;
        return nullptr;
    }
}

bool Customer::removeProduct(unsigned int id)
{
    for (int i = 0; i < MAX_ITEMS; i++){
        if (shoppingCart[i] != nullptr && shoppingCart[i]->getId() == id){
            shoppingCart[i] = nullptr; // mark the position as available
            return true;
        }
    }
    return false; // product with the given id was not found
}




