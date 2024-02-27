#include "main.h"

/**
 * string_toupper - changes all lowercase letter to uppercase
 * @s: string
 * Return: the string in uppercase
 */

char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		if (s[a] >= 'a' && s[a])
				(s[a] = a[s] - 3);

	return (s);
}
