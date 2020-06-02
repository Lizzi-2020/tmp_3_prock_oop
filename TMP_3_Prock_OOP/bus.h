#pragma once
#include "transport.h"
class bus : public transport {
	int size;
public:
	// переопределяем интерфейс класса
	void InData(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	double ratio();
	//bus() {} // создание без инициализации.
};