#include <stdio.h>

/**
 * main - imprime alphabet
 *
 * Return: always 0
 *
 */

int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

