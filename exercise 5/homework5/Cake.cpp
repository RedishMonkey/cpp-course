#include "Cake.h"
#include "Date.h"
#include <iostream>
#include <fstream>
using namespace std;


Cake::Cake(Date xd, double h, double p, int s, bool g){
	expiryDate = xd;
	height = h;
	price = p;
	storage = s;
	glutenFree = g;
}

Cake::Cake(const Cake& c) {
	expiryDate = c.expiryDate;
	height = c.height;
	price = c.price;
	storage = c.storage;
	glutenFree = c.glutenFree;
}

bool Cake::operator==(const Cake& c)const {
	if (!(expiryDate == c.expiryDate)) { return false; }
	if (diameter != c.diameter) { return false; }
	if (height != c.height) { return false; }
	if (price != c.price) { return false; }
	if (storage != c.storage) { return false; }
	if (glutenFree != c.glutenFree) { return false; }
	return true;
}

void Cake::operator+=(double m) {
	price += m;
}

std::ostream& operator<<(std::ostream& out, const Cake& c) {
	out << "expiry date: " << c.expiryDate << endl;
	out << "diameter: " << c.diameter << endl;
	out << "height: " << c.height << endl;
	out << "price: " << c.price << endl;
	if (c.storage == 1) {
		out << "storage: fridge" << endl;
	}
	else {
		out << "storage: frizer" << endl;
	}
	c.glutenFree ? out << "gluten free" << endl : out << "not gluten free" << endl;
	c.toos(out);
	return out;
}
const Cake& Cake::operator=(const Cake& c) {
	expiryDate = c.expiryDate;
	height = c.height;
	price = c.price;
	storage = c.storage;
	glutenFree = c.glutenFree;
	return *this;
}
Cake::~Cake() {
	cout << "~Cake"<<endl;
}
