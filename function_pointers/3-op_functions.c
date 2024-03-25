#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds int a and int b
 * @a: first integer
 * @b: second integer
 * Return: addition
 */
int op_add(int a, int b)
{
		return (a + b);
}

/**
 * op_sub - subtracts
 * @a: first integer
 * @b: second integer
 * Return: substraction
 */
int op_sub(int a, int b)
{
		return (a - b);
}

/**
 * op_mul - multiplies
 * @a: first integer
 *@b: second integer
 *Return: multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: first integer:
 * @b: second integer
 * Return: division
 */
int op_div(int a, int b)
{

	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	else
	{
		return (a / b);
	}

}

/**
 * op_mod - modulos
 * @a: first integer
 * @b: second integer
 * Return: modulo of ints
 */

int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
			exit(100);
	}

	else
	{
		return (a % b);
	}
}
