#include "3-calc.h"

/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: return
 */

int main(int argc, char *argv[])
{
	int num1;

	int num2;

	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		f = get_op_func(argv[2]);

		if (f == NULL || (argv[2][1] != '\0'))
		{
		printf("Error\n");
		exit(99);
		}
	}

	printf("%d\n", f(num1, num2));

	return (0);
}
