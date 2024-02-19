#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _isalpha - if letter, returns 1, if not, returns 0
 *
 * Return: if letter, 1, if not 0
 *
 * @c: letter lowercase or uppercase
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
