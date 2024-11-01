#include "trip.h"
#include "date.h"
#include <iostream>
#include <string>
#include <ostream>

using namespace std;

int Trip::counter = 1;

// you cannot make tripNum const because you need to copy Trip instances to an array of Trip in main
// which maens you would need to change the values of thecells in the array because you cannot change the values of the pointers
// which means you would need to change trip num which you wouldnt be able to do if trip num was const
// still i incorperated things you would do if tripNum was const like in the constructor Trip::Trip(string dest, Date tripDate):tripNum(counter)

Trip::Trip(string dest, Date tripDate):tripNum(counter)
{
	this->SetDest(dest);
	this->tripDate = tripDate;

    counter++;
}
Trip::Trip():tripNum(0)
{
	string str = "a";
	SetDest(str);
}

Trip::Trip(Trip* tripToCopy):tripNum(counter)
{
    this->dest = tripToCopy->dest;
    this->tripDate = tripToCopy->tripDate;
    
    counter++;
}

int Trip::GetTripNum()
{
	return this->tripNum;
}


string Trip::GetDest()
{
	return this->dest;
}

void Trip::SetDest(string newDest)
{
	this->dest = newDest;
}

Date Trip::GetDate()
{
	return this->tripDate;
}

void Trip::SetDate(Date newTripDate)
{
	this->tripDate = newTripDate;
}

ostream& operator<<(ostream& out, Trip trip1)
{
    cout << "the trip number is: " << trip1.tripNum << endl;
	cout << "the trip destination is: " << trip1.dest << endl;
	cout << "the trip date is: ";
	cout << trip1.tripDate;

    return out;
}
