#pragma once
#include "transport.h"
class bus : public transport {
	int size;
public:
	// �������������� ��������� ������
	void InData(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	double ratio();
	//bus() {} // �������� ��� �������������.
};