#include "main.h"
 /**
  *swap_int - swaps a to b
  *@a: first integer
  *@b: second integer
  */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

}
