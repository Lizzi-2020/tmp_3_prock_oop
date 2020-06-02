#pragma once
#include "node.h"
class container {
	node* noda = new node;
	node *head = NULL;
	node *endList = NULL;
	int data = 0; // текущая длина
public:
	void In(ifstream &ifst); // ввод фигур
	void Out(ofstream &ofst); // вывод фигур
	void OutTruck(ofstream &ofst);
	void ratio(ofstream &ofst);
	void Clear(); // очистка контейнера от фигур
	void Sort();
	//container(); // инициализация контейнера
	//~container() { Clear(); } // утилизация контейнера
};