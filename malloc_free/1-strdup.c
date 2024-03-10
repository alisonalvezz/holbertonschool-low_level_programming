#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: string
 * Return: return
 */

char *_strdup(char *str)
{
	char *d;
	int i, l = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		l++;
	}

	d = malloc(l + 1);

	if (d == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		d[i] = str[i];
	}

	d[l] = '\0';

	return (d);
}
