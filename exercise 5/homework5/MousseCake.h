#pragma once
#include <iostream>
#include <fstream>
#include "Cake.h"
#include "Date.h"
#include <cstring>
using namespace std;

class MousseCake :public Cake
{
	string taste;

public:
	MousseCake(Date xd, double h, double p, int s, bool g, string t);

	MousseCake(const MousseCake& c);

	~MousseCake();

	const MousseCake& operator=(const MousseCake& c);

	void SetTaste(string t);

	string GetTaste() { return taste; }

	bool operator==(const MousseCake& c) const;
	void operator+=(const double money);
	
	virtual void toos(ostream& out)const { out << taste << endl; }

};

