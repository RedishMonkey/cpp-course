#include <iostream>
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

int Date::GetDay() {
	return this->day;
}

void Date::SetDay(int newDay)
{
	if (newDay >= 1 && newDay <= 12)
	{
		this->day = newDay;
	}
	else
	{
		this->day = 0;
	}
}
int Date::GetMonth()
{
	return this->month;
}
void Date::SetMonth(int newMonth)
{
	if(newMonth >=1 && newMonth <= 12)
	{
		this->month = newMonth;
	}
	else
	{
		this->month = 0;
	}
}
int Date::GetYear()
{
	return this->year;
}

void Date::SetYear(int newYear)
{
	if (newYear > 1)
	{
		this->year = newYear;
	}
	else
	{
		this->year = 0;
	}
}

void Date::PrintDate()
{
	cout << this->day << "/" << this->month << "/" << this->year << endl;
}