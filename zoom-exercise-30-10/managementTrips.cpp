#include <ostream>
#include "managementTrips.h"
#include "trip.h"
#include "date.h"


ManagementTrips::ManagementTrips()
{
    this->trips=new Trip*[0];
    this->index = 0;
}

void ManagementTrips::operator+=(Trip* trip1)
{

    Trip** tempTripsArr = new Trip*[index+2];

    for (int i = 0; i < index; i++)
    {

        tempTripsArr[i] = trips[i];
    }


    tempTripsArr[index] = trip1;
    index++;
    
    delete[] trips;
    trips=tempTripsArr;
}

void ManagementTrips::operator-=(Trip* trip1)
{
    int toDelCount = 0;

    for (int i = 0; i < index - 1; i++)
    {
        if (this->trips[i]->GetDate() == trip1->GetDate())
        {
            toDelCount++;
        }
    }

    Trip** tempTripsArr = new Trip*[index - toDelCount];
    int tripsMovedCount = 0;

    for (int i = 0; i < index; i++)
    {
        if (!(this->trips[i]->GetDate() == trip1->GetDate()))
        {
            tempTripsArr[tripsMovedCount] = this->trips[i];
        }
    }

    trips = tempTripsArr;
    index -= toDelCount;
}

ostream& operator<<(ostream& out, ManagementTrips manageTrips)
{
    for (int i = 0; i < manageTrips.index; i++)
    {
        out << *(manageTrips.trips[i]) << endl;
    }

    if (manageTrips.index == 0)
    {
        out << "no trips in the list" << endl;
    }

    return out;
}



