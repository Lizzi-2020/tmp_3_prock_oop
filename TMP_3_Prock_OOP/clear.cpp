#include "container.h"
void container::Clear() {
	node *time = new node;
	node *timeTwo = new node;
	if (head != NULL)
	{
		timeTwo = head;
		while (true)
		{
			time = timeTwo->next;
			delete timeTwo;
			timeTwo = time;
			if (timeTwo == NULL)
			{
				break;
			}
		}
	}
}