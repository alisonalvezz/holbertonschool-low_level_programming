#include "lists.h"

size_t print_list(const list_t *h)
{
	int count;

	for (count = 0; h != NULL; h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
			count++;
		}
	}
	return (count);
}

