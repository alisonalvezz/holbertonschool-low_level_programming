#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 *
 * times_table - print the 9 times table
 *
 *
 */

void times_table(void)
{
	int n, m, p;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n);

		for (m = 0; m <= 9; m++)
		{
			_putchar(m);
			p = n * m;
			_putchar(p);
			_putchar(',');
			_putchar('.');
			_putchar('\n');

		if (p <= 9)
			_putchar(',');
		}
	}

}
