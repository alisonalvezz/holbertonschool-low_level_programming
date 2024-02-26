#include "main.h"
#include <stdio.h>
/**
 * _strcat - function to concadenate two strings
 * @dest: string of destine
 * @src: src string
 * _strlen - lenght of dest
 * Return: string concadenated
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int b;
	size_t c = _strlen(dest);

	while (src[i] != '\0')
		i++;
	for (b = 0; b < i; b++)
	{
		dest[c + b] += src[b];
	}
	dest[c + b] = '\0';
	return (dest);
}
	int _strlen(char *dest)
{
	int lenght = 0;

	while (*dest++)
		lenght++;

	return (lenght);
}
