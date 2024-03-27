#include "lists.h"

void free_list(list_t *head)
{
	list_t *adr;

	while(head != NULL)
	{
		adr = head->next;
		free(head->str);
		free(head);
		head = adr;
	}
}
