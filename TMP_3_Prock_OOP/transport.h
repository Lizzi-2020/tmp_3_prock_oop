#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class transport {
	int powerEngine;
	double fuelConsumption;
public:
	// �������������, ���������� � ���� ������ �� ������
	int getPowerEngine() { return powerEngine; }
	static transport* In(ifstream &ifst);
	virtual void InData(ifstream &ifst) = 0; // ����
	virtual void Out(ofstream &ofst) = 0; // �����
	virtual void OutTruck(ofstream &ofst);
	virtual double ratio() = 0;
	bool Compare(transport &other);
	void OutCommon(ofstream &ofst);
	void InCommon(ifstream &ifst);
	//protected:
		//shape() {};
};