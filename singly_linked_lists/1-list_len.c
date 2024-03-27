#include "lists.h"

/**
 * list_len - length
 * @h: h
 * Return: return
 */

size_t list_len(const list_t *h)
{
	int count;

	for (count = 0; h != NULL; h = h->next)
		count++;
	return (count);
}
