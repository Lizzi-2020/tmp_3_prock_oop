#pragma once
#include "transport.h"
class node
{
public:
	transport* data;
	node *next; //указатель на следующий элемент
	void In(ifstream &ifst); // ввод фигур
	void InData(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод фигур
	//virtual void Out(ofstream &ofst) = 0; // вывод
};