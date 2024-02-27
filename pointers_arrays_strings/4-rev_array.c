#include "main.h"

/**
 * reverse_array - function that prints the array in reverse
 * @a: array
 * @n: numbers
 */

void reverse_array(int *a, int n)
{
	int b = 0, temp;

		while (b < n)
	{
		temp = a[b];
		a[b] = a[n - 1];
		a[n - 1] = temp;
		b++;
		n--;
	}
}
