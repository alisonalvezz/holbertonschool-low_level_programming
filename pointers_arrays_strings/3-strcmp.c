#include "main.h"

/*
 * _strcmp - compares strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1, -1 or 0 based on comparations between strings
 */

int _strcmp(char *s1, char *s2)
{
	int lenghts1, lenghts2 = 0;

	while (*s1++)
		lenghts1++;
	while (*s2++)
		lenghts2++;

	if (lenghts1 < lenghts2)
		return (-1);
	else if (lenghts1 > lenghts2)
		return (1);
	else
		return (0);
}

