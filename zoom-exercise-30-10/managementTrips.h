#ifndef managementTrips
#define managementTrips

#include "trip.h"
#include <ostream>

using namespace std;

class ManagementTrips
{
    public:

    ManagementTrips();
    void operator+=(Trip* trip1);
    void operator-=(Trip* trip1);
    friend ostream& operator<<(ostream& out, ManagementTrips mangeTrips);
    int GetIndex();
    Trip** GetTrips();

    private:
    Trip** trips;
    int index;

};

#endif