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
	if (newDay >= 1 && newDay <= 30)
	{
		this->day = newDay;
	}
	else
	{
		this->day = 1;
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
		this->month = 1;
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
		this->year = 1;
	}
}

bool Date::operator>(Date date1)
{
    if (this->year > date1.GetYear()) // if later year in left date
    {
        return true;
    }
    else if (this->year == date1.GetYear() && this->month > date1.GetMonth()) // checks if equal year
    {
        if ( this->month > date1.GetMonth())  // if same year but later month in left
        {
            return true;
        }
        else if (this->day > date1.GetDay()) // if same year and month but later day in right
        {
            return true;
        }
    }
    
    return false;
    
}

bool Date::operator==(Date date1)
{
    return this->year == date1.GetYear() && this->month == date1.GetMonth() && this->day == date1.GetDay();
}

bool Date::operator<(Date date1)
{
    return !(*this > date1) && !(*this == date1); 
}

std::ostream& operator<<(std::ostream& out, Date date1)
{
    out << date1.day << "/" << date1.month << "/" << date1.year << endl;
    return out;
}

