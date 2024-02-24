#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: the string
 */

void puts_half(char *str)
{
	int l = 0, a, b;

	while (str[l] != '\0')
		l++;

	a = (l + 1) / 2;

	for (b = a; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}

	_putchar('\n');
}
