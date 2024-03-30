#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string of 0 and 1
 * Return:the converted number, 0 if theres one or more chars in b thats not 0
 * or 1 or if b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if  (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) + (*b - '0');
		b++;
	}

	return (result);
}
