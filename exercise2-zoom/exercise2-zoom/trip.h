#ifndef trip
#define trip

#include "date.h"
#include <string>
using namespace std;

class Trip
{
public:
	Trip(int tripNum, string dest, Date tripDate);
	Trip();
	int GetTripNum();
	void SetTripNum(int newTripNum);
	string GetDest();
	void SetDest(string newDest);
	Date GetDate();
	void SetDate(Date newTripDate);
	void PrintTrip();

private:
	int tripNum;
	string dest;
	Date tripDate;
};



#endif

