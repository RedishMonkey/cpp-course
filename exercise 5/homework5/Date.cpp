#include "Date.h"
#include <iostream>
#include <fstream>
using namespace std;

Date::Date(int d, int m, int y ) {
	if (d < 1 && d>31) throw d;
	if (m < 1 && m>12) throw m;
	day = d;
	month = m;
	year = y;
}

void Date::SetYear(int y) {
	year = y;
}

std::ostream& operator<<(std::ostream& out, const Date& d) {
	out << d.day << "/" << d.month << "/" << d.year << endl;
	return out;
}

bool Date::operator==(const Date& d)const {
	if (day != d.day) { return false; }
	if (month != d.month) { return false; }
	if (year != d.year) { return false; }
	return true;
}

void Date::SetDay(int nDay) {
	if (nDay < 1 && nDay>31) throw nDay;
	day = nDay;
}

void Date::SetMonth(int nMonth) {
	if (nMonth < 1 && nMonth>12) throw nMonth;
	month = nMonth;
}
Date::Date() {
	day = 1;
	month = 1;
	year = 2024;
}

Date::~Date() {
	cout << "~Date" << endl;
}

