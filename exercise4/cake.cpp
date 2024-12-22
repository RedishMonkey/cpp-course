#include "cake.h"

void Cake::Print(ostream& out)
{
    out << "diameter: " << diameter << endl;
    out << "height: " << height << endl;
    out << "price: " << price << endl;
    out << "expiry date: " << expiryDate;
    out << "storage: " << storage << endl;
    if (glutenFree)
    {
        out << "without gluten" << endl;
    }
    else
    {
        out << "with gluten" << endl;
    }
}

ostream& operator<<(ostream& out, Cake& c)
{
    c.Print(out);
    return out;
}


Cake::~Cake(){}