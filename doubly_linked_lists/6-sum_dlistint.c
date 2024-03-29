#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data
 * @head: pointer to head of list
 * Return: sum of all data or 0 if null
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *i;
	i = head;

	while (i != NULL)
	{
		sum = sum + i->n;
		i = i->next;
	}
	return (sum);
}
