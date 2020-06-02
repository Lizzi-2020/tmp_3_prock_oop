#include "container.h"	
void container::In(ifstream &ifst) {
	while (!ifst.eof()) {
		data++;
		node* a = new node;
		a->data = transport::In(ifst);
		if (head == NULL)
		{
			endList = a;
			head = a;
			a->next = NULL;
			noda = a;
		}
		else
		{
			a->next = NULL;
			endList->next = a;
			endList = a;
		}
	}
}