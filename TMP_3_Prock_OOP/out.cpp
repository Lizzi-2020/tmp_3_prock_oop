#include "container.h"
#include "transport.h"
void container::Out(ofstream &ofst)
{
	ofst << "Container contents " << data
		<< " elements." << endl;
	ofst << "----------------------------------------------------------------------|" << endl;
	node* a = head;
	for (int i = 0; i < data; i++) {
		//noda->data->OutTruck(ofst); // only trucks
		a->data->Out(ofst);
		
		ofst << "----------------------------------------------------------------------|" << endl;
		a = noda->next;
	}

}