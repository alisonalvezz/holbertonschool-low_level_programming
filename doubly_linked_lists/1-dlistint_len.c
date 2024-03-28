#include "lists.h"

/**
 * dlistint_len - returns number of elements on a list
 * @h: pointer to the head of the list
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
