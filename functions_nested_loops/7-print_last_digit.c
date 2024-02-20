#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * print_last_digit - print last digit
 *
 * @n: digit
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)

	d *= -1;
	_putchar(d + '0');
		return (d);

}
