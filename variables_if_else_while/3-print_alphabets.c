#include <stdio.h>

/**
 * main - letter mayus and minus
 *
 * Return: always 0
 *
 */

int main(void)
{
	char letter = 'a';

for (letter = 'a'; letter <= 'z'; letter++)

	putchar(letter);

for (letter = 'A'; letter <= 'Z'; letter++)

	putchar(letter);

		putchar('\n');

	return (0);
}

