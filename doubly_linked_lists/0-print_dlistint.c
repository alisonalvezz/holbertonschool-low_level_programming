#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: h
 * Return: return
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
