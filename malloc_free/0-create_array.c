#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array
 * @size: size
 * @c: c
 * Return: return
 */

char *create_array(unsigned int size, char c)
{
	unsigned int s;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	for (s = 0; s < size; s++)
		a[s] = c;

	return (a);
}
