#include <iostream>
#include <string>
#include "date.h"
#include "cake.h"

using namespace std;

Cake InputACake();


int main()
{
    // variables decleration
    Cake c = InputACake();
    cout << c;


    return 0;
}

Cake InputACake()
{
    int day, month, year, diameter, intStorage, intGlutenFree;
    Date expiryDate;
    double height, price;
    string strStorage;
    bool boolGlutenFree;

    // receiving input

    // date input
    cout << "entering date:" << endl;
    cout << "\tday: ";
    cin >> day;
    cout << "\tmonth: ";
    cin >> month;
    cout << "\tyear: ";
    cin >> year;
    cout << endl;

    Date d = Date(day, month, year);

    // diameter input
    cout << "enter diameter of cake: ";
    cin >> diameter;
    cout << endl;

    // height input
    cout << "enter height of cake: ";
    cin >> height;
    cout << endl;

    // price input
    cout << "enter price of cake: ";
    cin >> price;
    cout << endl;

    // diameter storage
    cout << "enter storage place of cake (1 -> refrigirator, 2 -> freezer): ";
    cin >> intStorage;
    cout << endl;

    if (intStorage == 1)
    {
        strStorage = "refrigirator";
    }
    else if(intStorage == 2)
    {
        strStorage = "freezer";
    }
    
    // diameter storage
    cout << "is glutten free (0 -> no, 1 -> yes): ";
    cin >> intGlutenFree;
    cout << endl;

    if (intGlutenFree == 0)
    {
        boolGlutenFree = false;
    }
    else if(intGlutenFree == 1)
    {
        boolGlutenFree = true;
    }

    
    Cake c = Cake(d, diameter, height, price, strStorage, boolGlutenFree);    
    return c;
}


