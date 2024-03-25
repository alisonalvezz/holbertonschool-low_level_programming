#include "3-calc.h"

/**
 * get_op_func - a
 * @s:  s
 * Return: return
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"*", op_mul},
		{"%", op_mod},
		{NULL, NULL}
	};


int i = 0;

while (ops[i].op != NULL)
{
	if (*s == *ops[i].op)
	{
		/**verifica si el operador coincide con alguno*/
		return (ops[i].f);
	}
	i++;
}
	return (NULL);
}
