#include <iostream>
#include <string>
#include "date.h"

using namespace std;

Date::Date(int day, int month, int year)
{
	this->SetDay(day);
	this->SetMonth(month);
	this->SetYear(year);
}
Date::Date()
{
	this->day = 1;
	this->month = 1;
	this->year = 1;
}

int Date::GetDay()
{
	return this->day;
}

void Date::SetDay(int newDay)
{
	try
	{
		if (newDay < 1 || newDay > 31)
		{
			throw "out of bound day";
		}
	}
	catch (const char *e)
	{
		cout << e << '\n';
	}

	this->day = newDay;
}
int Date::GetMonth()
{
	return this->month;
}
void Date::SetMonth(int newMonth)
{
	try
	{
		if (newMonth < 1 || newMonth > 12)
		{
			throw "out of bounds month";
		}
	}
	catch (const char *e)
	{
		cout << e << '\n';
	}

	this->month = newMonth;
}
int Date::GetYear()
{
	return this->year;
}

void Date::SetYear(int newYear)
{
	if (newYear < 1)
	{
		throw "out of bounds year";
	}
	this->year = newYear;
}

ostream &operator<<(ostream &out, Date &d)
{
	out << d.day << "/" << d.month << "/" << d.year << endl;
	return out;
}