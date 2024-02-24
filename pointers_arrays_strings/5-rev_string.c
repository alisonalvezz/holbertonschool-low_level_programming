#include "main.h"

/**
 * rev_string - reverses a string
 *@s: the string
 */

void rev_string(char *s)
{
	int l = 0, a;
	char b;

	while (s[l] != '\0')
		l++;
	l--;

	for (a = 0; a <= l / 2; a++)
	{
		b = s[a];
		s[a] = s[l - a];
		s[l - a] = b;
	}
}
