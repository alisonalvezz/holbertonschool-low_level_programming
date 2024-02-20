#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _isdigit - if c is a digit or not
 *
 * @c: character
 *
 *  Return: if digit 1, if not 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57 && c++)
		return (1);
	else
		return (0);
}
