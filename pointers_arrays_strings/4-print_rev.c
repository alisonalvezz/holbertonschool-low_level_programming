#include "main.h"

/**
 * print_rev - prints in reverse a string
 *
 * @s: the pointer
 */

void print_rev(char *s)
{
	int rev, b;

	for (rev = 0; s[rev]; rev++);
	b = rev;

	for (b = rev - 1; b >= 0; b--)
		_putchar(s[b]);

	_putchar ('\n');
}
