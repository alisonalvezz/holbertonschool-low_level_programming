#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of the array
 * @array: the array
 * @size: the size of the array
 * @action: a pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
