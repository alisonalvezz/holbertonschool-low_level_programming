#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _isupper - prints 1 if uppercase, 0 if not
 *@c: characters
 * Return: 1 if uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z' && c++)
		return (1);
	else
		return (0);
}
