#pragma once
#include <iostream>
#include <fstream>
#include "Cake.h"
#include <iostream>
#include <fstream>
#include "Cake.h"
#include "Date.h"
#include <cstring>
using namespace std;
class BirthdayCake :public Cake
{
	string text;

public:
	BirthdayCake(Date xd, double h, double p, int s, bool g, string t);

	BirthdayCake(const BirthdayCake& c);

	const BirthdayCake& operator=(const BirthdayCake& c) {
		expiryDate = c.expiryDate;
		height = c.height;
		price = c.price;
		storage = c.storage;
		glutenFree = c.glutenFree;
		text = c.text;
		return *this;
	}

	string GetText() { return text; }
	void SetText(string t);

	bool operator==(const BirthdayCake& c) const;
	void operator+=(const double money);
	virtual void toos(ostream& out)const { out << text << endl; }

	~BirthdayCake();
};


