#ifndef date
#define date

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
	void PrintDate();

private:
	int day;
	int month;
	int year;

};
#endif
