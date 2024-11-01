#include "trip.h"
#include "date.h"
#include <iostream>
#include <string>
using namespace std;

Trip::Trip(int tripNum, string dest, Date tripDate)
{
	this->SetTripNum(tripNum);
	this->SetDest(dest);
	this->tripDate = tripDate;
}
Trip::Trip()
{
	SetTripNum(0);
	string str = "a";
	SetDest(str);
}
int Trip::GetTripNum()
{
	return this->tripNum;
}

void Trip::SetTripNum(int newTripNum)
{
	if (newTripNum > 0)
	{
		this->tripNum = newTripNum;
	}
	else
	{
		this->tripNum = 0;
	}
	
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




void Trip::PrintTrip()
{
	cout << "the trip number is: " << this->tripNum << endl;
	cout << "the trip destination is: " << this->dest << endl;
	cout << "the trip date is: ";
	this->tripDate.PrintDate();
	cout << endl;
	
}