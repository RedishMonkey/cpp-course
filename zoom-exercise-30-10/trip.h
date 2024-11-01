#ifndef trip
#define trip

#include "date.h"
#include <string>
#include <ostream>
using namespace std;

class Trip
{
public:
	Trip(string dest, Date tripDate);
	Trip();
    Trip(Trip* tripToCopy);
	int GetTripNum();
	string GetDest();
	void SetDest(string newDest);
	Date GetDate();
	void SetDate(Date newTripDate);
    friend ostream& operator<<(ostream& out, Trip trip1);

private:
    static int counter;
	int tripNum;
	string dest;
	Date tripDate;
};



#endif

