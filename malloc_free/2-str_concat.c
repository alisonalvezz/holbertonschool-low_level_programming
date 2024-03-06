#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: return
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int lenght1 = 0, lenght2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lenght1] != '\0')
		lenght1++;
	while (s2[lenght2] != '\0')
		lenght2++;

	concat = malloc(sizeof(char) * (lenght1 + lenght2 + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < lenght1; i++)
		concat[i] = s1[i];

	for (j = 0; j < lenght2; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
