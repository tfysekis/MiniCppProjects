#include <iostream>
#include <stdlib.h>
#include "Product.h"
#include "overloads.h"
#include "Controller.h"
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(1);

    // create some example products
    Product products[3];
    char name[20];
    float price;
    for (int i = 0; i < 3; ++i) {
        cout << "Name of Product: ";
        cin >> name;
        cout << "Price: ";
        cin >> price;
        products[i].setName(name);
        products[i].setPrice(price);
    }

    cout << endl;

    Controller controller;

    // save the products
    controller.save(products, "products.txt", 3);

    // load the products from the file
    Product products2[3];
    controller.load("products.txt", products2, 3);

    // print the data
    cout << "The data loaded from the file: " << endl;
    for (int i = 0; i < 3; ++i) {
        cout << products2[i] << endl;
    }

    cout << "\nThank you\n";

    return 0;
}
