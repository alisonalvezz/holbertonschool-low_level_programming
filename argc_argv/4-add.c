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
	int add = 0;
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}

	printf("%d\n", add);
	return (0);
}
