#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * print_alphabet_x10 - prints alphabet x10
 *
*/

void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
