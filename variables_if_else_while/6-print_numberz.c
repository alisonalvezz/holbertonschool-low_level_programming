#include <stdio.h>

/**
 *main - print number 0 to 9
 *
 * Return: always 0
 */
int main(void)
{
	int number = 0;

	for (number = 0; number < 10; number++)

		putchar((number % 10) + '0');

	putchar('\n');

	return (0);
}

