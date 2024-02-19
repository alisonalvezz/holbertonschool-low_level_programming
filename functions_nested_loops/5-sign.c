#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * print_sign - greater than zero 1, zero 0, less tan zero -1
 *
 * Return: greater than zero 1, zero 0, less than zero -1
 *
 * @n: number, zero, greater than zero or less than zero
 */

int print_sign(int n)
{
	if (n > 0)
		return (+1);
	else if(n == 0)
		return (0);
	else
		return (-1);

}
