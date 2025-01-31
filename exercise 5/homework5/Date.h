#pragma once
#include <iostream>
#include <fstream>
class Date
{
protected:
	int day;
	int month;
	int year;

public:
	int GetDay() { return day; }
	int GetMonth() { return month; }
	int GetYear() { return year; }

	void SetDay(int nDay);
	void SetMonth(int nMonth);

	void SetYear(int nYear = 2024);

	Date(int d, int m, int y = 2024);

	Date();

	~Date();

	friend std::ostream& operator<<(std::ostream& out, const Date& d);

	bool operator==(const Date& d) const;


};

