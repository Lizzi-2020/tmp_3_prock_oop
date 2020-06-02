#pragma once
#include "transport.h"
class car : public transport
{
	int maxSpeed;
public:
	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
	double ratio();
	//car() {}
};