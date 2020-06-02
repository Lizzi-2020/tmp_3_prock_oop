#include "container.h"
#include "transport.h"
void container::OutTruck(ofstream &ofst)
{
	ofst << "Only truck " << data
		<< "." << endl;
	
	for (int i = 0; i < data; i++) {
		noda->data->OutTruck(ofst);
		
		noda = noda->next;
	}

}