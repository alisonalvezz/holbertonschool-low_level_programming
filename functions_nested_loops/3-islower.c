#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _islower - if lowercase, returns 1, if not 0
 *
 * Return: is lowercase 1, if not 0
 *
 * c- letter lowercase or uppercase
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

