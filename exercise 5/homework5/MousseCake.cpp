#include "MousseCake.h"
#include "Cake.h"
#include "Date.h"
#include <iostream>
#include <fstream>
#include <cstring>

MousseCake::MousseCake(Date xd, double h, double p, int s, bool g, string t) :Cake(xd, h, p, s, g), taste(t) {
	cout << "new mousse cake" << endl;
}

MousseCake::MousseCake(const MousseCake& c) :Cake(c) {
	taste = c.taste;
}

void MousseCake::SetTaste(string t) {
	taste = t;
}

bool MousseCake::operator==(const MousseCake& c)const {
	if (taste!=c.taste) { return false; }
	return c.operator==(*this);
}

void MousseCake::operator+=(double m) {
	price += m;
}

const MousseCake& MousseCake::operator=(const MousseCake& c) {
	expiryDate = c.expiryDate;
	height = c.height;
	price = c.price;
	storage = c.storage;
	glutenFree = c.glutenFree;
	taste = c.taste;
	return *this;
}
MousseCake::~MousseCake() {
	cout << "~MouuseCake" << endl;
}