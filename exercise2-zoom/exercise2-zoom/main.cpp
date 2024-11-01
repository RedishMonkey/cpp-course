#include <iostream>
#include "date.h"
#include "trip.h"
#include <string>
using namespace std;

bool IsEmpty(int size);
void Print(Trip* arr, int size);
void EditTrip(Trip* arr, int size);
Trip* AddTrip(Trip* arr, int size);

void main()
{
	int option;
	Trip* arr = new Trip[0];
	int size = 0;

	do {
		cout << "Please select an option: \n1.Print Trips\n2.Edit Trip\n3.Add Trip\n4.Exit" << endl;
		cin >> option;
		cout << "\n";
		switch (option)
		{
			case 1:
				Print(arr, size);
				break;
			case 2:
				EditTrip(arr, size);
				break;
			case 3:
				arr = AddTrip(arr, size);
				size++;
				break;
			case 4:
				cout << "bye bye!" << endl;
				break;
		default:
			cout << "invalid option" << endl;
			break;
		}
	}while (option != 4);
}



bool IsEmpty(int size)
{
	if (size > 0)
	{
		return false;
	}
	return true;
}

void Print(Trip* arr, int size)
{
	if (IsEmpty(size))
	{
		cout << "the array is empty" << endl;
		return;
	}
	for (int i = 0; i < size; i++)
	{
		arr[i].PrintTrip();
	}
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
Trip* AddTrip(Trip* arr, int size)
{
	int newTripNum, day, month, year;
	string newDest;
	
	cout << "enter trip number: ";
	cin >> newTripNum;
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
	Trip newTrip = Trip(newTripNum, newDest, newTripDate);
	Trip* newTripArr = new Trip[size + 2];
	Trip* tempArr = newTripArr;
	for (int i = 0; i < size; i++)
	{
		*tempArr = arr[i];
		tempArr = tempArr + 1;
	}

	*tempArr = newTrip;
	
	cout << &newTrip << endl;

	return newTripArr;
}
