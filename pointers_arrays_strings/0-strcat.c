#include "main.h"

/**
 * _strcat - function to concadenate two strings
 * @dest: string of destine
 * @src: src string
 * Return: string concadenated
 */

char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest)
	{

	while (*src)
	{
		*dest++ = *src++;
	}
	}

	*dest = '\0';

	return (a);
}
