#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: argument count
 * @argv: argument variable
 * Return: return
 */

int main(int argc, char *argv[])
{
	int number1;
	int number2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
			return (1);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	result = number1 * number2;

	printf("%d\n", result);

	return (0);
}

