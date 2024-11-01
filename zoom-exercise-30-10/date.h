#ifndef date
#define date
#include <iostream>


class Date
{
public:
	Date(int day, int month, int year);
	Date();
	int GetDay();
	void SetDay(int newDay);
	int GetMonth();
	void SetMonth(int newMonth);
	int GetYear();
	void SetYear(int newYear);
    bool operator>(Date date1);
    bool operator==(Date date1);
    bool operator<(Date date1);
    friend std::ostream& operator<<(std::ostream& out, Date date1);


private:
	int day;
	int month;
	int year;

};
#endif
