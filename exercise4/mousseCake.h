#ifndef MOUSSECAKE
#define MOUSSECAKE

#include "cake.h"

class MousseCake: Cake 
{
    char* taste;
public:
    MousseCake(char* taste, Date expiryDate, int diameter, double height, double price, string storage, bool glutenFree);
    ~MousseCake();
};




#endif