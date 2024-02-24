#include "main.h"
/**
 *_strlen - gives the length of a string
*@s: pointer
 * Return: return lenght of a string
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s++)
		lenght++;

	return (lenght);
}
