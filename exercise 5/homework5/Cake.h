#pragma once
#include <iostream>
#include <fstream>
#include "Date.h"
class Cake
{
protected:
	Date expiryDate;
	const int diameter = 5;
	double height;
	double price;
	int storage;
	bool glutenFree;
public:
	virtual void toos(std::ostream& out)const {}

	Cake(Date xd, double h, double p, int s, bool g);

	const Cake& operator=(const Cake& c);

	Cake(const Cake& c);

	~Cake();

	bool operator==(const Cake& c) const;
	void operator+=(const double money);

	friend std::ostream& operator<<(std::ostream& out, const Cake& c);
};

