#include "mousseCake.h"

MousseCake::MousseCake(char* taste, Date expiryDate, int diameter, double height, double price, string storage, bool glutenFree):Cake(expiryDate, 
    diameter, height, price, storage, glutenFree), taste(taste)
    {
        cout << "In MousseCake(char* taste, Date expiryDate, int diameter, double height, double price, string storage, bool glutenFree)" << endl;
    }


