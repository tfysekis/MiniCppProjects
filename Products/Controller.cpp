#include "Controller.h"
#include <fstream>
#include <iostream>
using namespace std;

void Controller::save(Product products[], const char *filename, int num)
{
    ofstream f;
    f.open(filename,ios::out);
    if (!f.is_open()){
        cerr << "Could not open file" << endl;
    }else{
        for (int i = 0; i < num; i++){
            f << products[i].getName() << " " << products[i].getPrice() << endl;
        }
        f.close();
    }
}

void Controller::load(const char *filename, Product products[], int num)
{
    ifstream f;
    f.open(filename,ios::in);
    if (!f.is_open()){
        cerr << "Could not open file" << endl;
    }else{
        for (int i = 0; i < num && !f.eof(); i++){
            char name[50];
            float price;
            f >> name >> price;
            products[i].setName(name);
            products[i].setPrice(price);
        }
        f.close();
    }
}
