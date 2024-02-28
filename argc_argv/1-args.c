#include <stdio.h>

/**
 * main - prints number of arguments passed into the program
 * @argc: aaa
 * @argv: aaa
 * Return: number of arguments
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
