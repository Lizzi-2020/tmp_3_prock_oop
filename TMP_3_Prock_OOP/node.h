#pragma once
#include "transport.h"
class node
{
public:
	transport* data;
	node *next; //��������� �� ��������� �������
	void In(ifstream &ifst); // ���� �����
	void InData(ifstream &ifst); // ����
	void Out(ofstream &ofst); // ����� �����
	//virtual void Out(ofstream &ofst) = 0; // �����
};