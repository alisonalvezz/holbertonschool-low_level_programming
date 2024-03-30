#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number of the bit
 * @index: the index of the bit to extract
 * Return: the value of the bit at a specified index, -1 if not valid
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /**index is not valid*/

	return ((n >> index) & 1); /**extracts the bit at specified index*/
}
