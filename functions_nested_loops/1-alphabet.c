#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * print_alphabet - prints _putchar
 *
 */

void print_alphabet(void)
{

	char letter;

	for (letter =  'a'; letter <= 'z'; letter++)
		_putchar(letter);

			_putchar('\n');

}

