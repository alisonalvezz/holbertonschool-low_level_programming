#include <stdio.h>

/**
 * main - alphabet but without q and e
 *
 * Return: always 0
 *
 */

int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)

	if (letter != 'q' && letter != 'e')

	putchar(letter);

	putchar('\n');

	return (0);
}

