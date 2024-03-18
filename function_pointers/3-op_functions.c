#include "main.h"
#include <stdio.h>

int op_add(int a, int b)
{
	if (a == 48; a <= 57; a++ && b == 48; b <= 57; b++)
	{
		return (a + b);
	}

	while (!='+')
	{
		return ("Error\n", exit(99));
	}

}

int op_sub(int a, int b)
{
	if (a == 48; a <= 57; a++ && b == 48; b <= 57; b++)
	{
		return (a - b);
	}

	while (!='-');
	{
		return ("Error\n", exit(99));
	}
}

int op_mul(int a, int b)
{
	if (a == 48; a <= 57; a++ && b == 48; b <= 57; b++)
	{
		return (a * b);
	}

	while (!= '*')
	{
		return ("Error\n", exit (99));
	}
}

int op_div(int a, int b)
{
	if (a == 48; a <= 57; a++ && b == 48; b <= 57; b++)
	{
		return (a / b);
	}

	if (a / 0 || b / 0)
	{
		return ("Error\n", exit (100));

	while (!= '/')
	{
		return ("Error\n", exit (99));
	}
}

int op_mod(int a, int b)
{
	if (a == 48; a <= 57; a++ && b == 48; b <= 57; b++)
	{
		return (a % b);
	}

	if (a % 0 || b % 0)
	{
		return ("Error\n", exit(100));
	}

	while (!= '%')
	{
		return ("Error\n", exit (99));
	}
}
