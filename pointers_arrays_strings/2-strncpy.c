#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies n number of characters from src to dest
 * @dest: destination
 * @src: source
 * @n: number of characters
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	for (; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
