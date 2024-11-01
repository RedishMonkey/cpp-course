#include <iostream>
#include "date.h"
#include "trip.h"
#include "managementTrips.h"
#include <string>
using namespace std;

bool IsEmpty(int size);
void deleteTrips(ManagementTrips* mts);
void AddTrip(ManagementTrips* mts);

int main()
{
    ManagementTrips mts = ManagementTrips();
	int option;

	do {
		cout << "Please select an option: \n1.Print Trips\n2.Delete Trips\n3.Add Trip\n4.Exit" << endl;
		cin >> option;
		cout << "\n";
		switch (option)
		{
			case 1:
				cout << mts;
				break;
			case 2:
				deleteTrips(&mts);
				break;
			case 3:
				AddTrip(&mts);
				break;
			case 4:
				cout << "bye bye!" << endl;
				break;
		default:
			cout << "invalid option" << endl;
			break;
		}
	}while (option != 4);

    
    return 0;
}



bool IsEmpty(int size)
{
	if (size > 0)
	{
		return false;
	}
	return true;
}

void deleteTrips(ManagementTrips* mts)
{
	int day,month,year;
    cout << "type the date of the trip you want to delete:" << endl;
	cout << "day: ";
	cin >> day;
	cout << "\nmonth: ";
	cin >> month;
	cout << "\nyear: ";
	cin >> year;
	
	Date deleteDate = Date(day, month, year);
	Trip deleteTrip = Trip("yrip to delete by", deleteDate);

	*mts -= &deleteTrip;
}



void EditTrip(Trip* arr, int size)
{
	int tripNum;
	Trip* chosenTrip = nullptr;
	cout << "enter a trip number: ";
	cin >> tripNum;
	cout << "\n";
	if (size <= 0)
	{
		cout << "the array is empty\n\n";
		return;
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i].GetTripNum() == tripNum)
		{
			chosenTrip = &arr[i];
		}
	}
	if (chosenTrip == nullptr)
	{
		cout << "a trip with this number doesnt exist" << endl;
		return;
	}

	char answer;
	cout << "would you like to update the destination? y-yes, n-no: ";
	cin >> answer;
	if (answer == 'y')
	{
		string newDest;
		cout << "\nnew destination: ";
		cin >> newDest;
		chosenTrip->SetDest(newDest);
	}
	cout << "\nwould you like to update the date? y-yes, n-no: ";
	cin >> answer;
	if (answer == 'y')
	{
		int newDay, newMonth, newYear;
		cout << "\nday: ";
		cin >> newDay;
		cout << "\nmonth: ";
		cin >> newMonth;
		cout << "\nyear: ";
		cin >> newYear;

		Date newDate = Date(newDay, newMonth, newYear);
		chosenTrip->SetDate(newDate);
	}
	cout << "\n";
}

void AddTrip(ManagementTrips* mts)
{
	int newTripNum, day, month, year;
	string newDest;

	cout << "\nenter trip destination: ";
	cin >> newDest;
	cout << "\nnow entering the date:" << endl;
	cout << "day: ";
	cin >> day;
	cout << "\nmonth: ";
	cin >> month;
	cout << "\nyear: ";
	cin >> year;
	
	Date newTripDate = Date(day, month, year);
	Trip* tripToAdd = new Trip(newDest, newTripDate);


	*mts += tripToAdd;
}
