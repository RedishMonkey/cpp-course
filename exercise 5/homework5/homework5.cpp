// homework5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include"Date.h"
#include "Cake.h"
#include "MousseCake.h"
#include "BirthDayCake.h"
#include <cstring>
using namespace std;

int main()
{
    Date d1 = Date(1, 1);
    Date d2 = Date(2, 2, 2020);
    cout << d1;
    cout << d2;
    Cake c1 = Cake(d1, 1.1, 2.2, 1, 0);
    cout << c1;
    string taste = "orange";
    MousseCake m1 = MousseCake(d1, 30.1, 25.0, 1, true, taste);
    cout << m1;
    BirthdayCake b1 = BirthdayCake(d2, 4, 30, 1, false, "19");
    cout << b1;

}
