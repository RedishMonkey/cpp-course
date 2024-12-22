#ifndef CAKE
#define CAKE

#include <iostream>
#include <string>
#include "date.h"

using namespace std;

class Cake
{
    Date expiryDate;
    int diameter;
    double height;
    double price;
    string storage;
    bool glutenFree;

public:
    Cake(Date expiryDate, int diameter, double height, double price, string storage, bool glutenFree): expiryDate(expiryDate),
    diameter(diameter), height(height), price(price), storage(storage), glutenFree(glutenFree)
    {
        cout << "In Cake(expiryDate, diameter, height, price, storage, glutenFree)" << endl;
    }

    virtual void Print(ostream& out);
    friend ostream& operator<<(ostream& out, Cake& c);

    ~Cake();
};

#endif