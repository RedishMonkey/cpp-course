#ifndef date
#define date
#include <iostream>

using namespace std;

class Date
{
public:
	Date(int day, int month, int year = 2024);
	Date();
	int GetDay();
	void SetDay(int newDay);
	int GetMonth();
	void SetMonth(int newMonth);
	int GetYear();
	void SetYear(int newYear);
	friend ostream& operator<<(ostream& out, Date& d);
  
private:
	int day;
	int month;
	int year;

};
#endif
