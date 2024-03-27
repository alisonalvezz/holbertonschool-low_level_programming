#include "lists.h"

/**
 * free_list - frees a list
 * @head: head
 */

void free_list(list_t *head)
{
	list_t *adr;

	while (head != NULL)
	{
		adr = head->next;
		free(head->str);
		free(head);
		head = adr;
	}
}
