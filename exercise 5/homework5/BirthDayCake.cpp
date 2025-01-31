#include "BirthdayCake.h"
#include "Cake.h"
#include "Date.h"
#include <iostream>
#include <fstream>
#include <cstring>

BirthdayCake::BirthdayCake(Date xd, double h, double p, int s, bool g, string t) :Cake(xd, h, p, s, g), text(t) {
	cout << "new birthday cake" << endl;
}

BirthdayCake::BirthdayCake(const BirthdayCake& c) :Cake(c) {
	text = c.text;
}

void BirthdayCake::SetText(string t) {
	text = t;
}

bool BirthdayCake::operator==(const BirthdayCake& c)const {
	if (text!=c.text) { return false; }
	return c.operator==(*this);
}

void BirthdayCake::operator+=(double m) {
	price += m;
}
BirthdayCake::~BirthdayCake() {
	cout << "~BirthdayCake" << endl;
}