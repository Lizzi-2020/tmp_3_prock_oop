#include "container.h"
void container::Sort() {
	node* fir = head;
	node* sec = head->next;
	node* tmp = new node;
	while (fir->next)
	{
		while (sec)
		{
			if (fir->data->Compare(*sec->data))
			{
				/*node* time2 = fir->next->next;
				node* time = fir;*/
				tmp->data = fir->data;
				fir->data = sec->data;
				sec->data = tmp->data;

			}
			sec = sec->next;
		}
		fir = fir->next;
		sec = fir->next;
	}
}
