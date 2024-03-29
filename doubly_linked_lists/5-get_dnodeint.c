#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a list
 * @head: pointer to the head of list
 * @index: index of the node
 * Return:pointer to the nth node 
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	dlistint_t *current;

	current = head;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	return (current);
}
