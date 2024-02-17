#include <stdio.h>

/**
 * main - print the alphabet in reverse
 *
 * Return: always 0
 *
 */

int main(void)
{
	int letters = 'z';

		for (letters = 'z'; letters >= 'a'; letters++)

			putchar(letters);

		putchar('\n');

			return (0);
}
