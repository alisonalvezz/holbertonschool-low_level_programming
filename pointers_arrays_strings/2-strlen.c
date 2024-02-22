#include "main.h"

/**
 * _strlen - gives the length of a string
 *@s: pointer
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s++)
		lenght++;

	return (lenght);
}
