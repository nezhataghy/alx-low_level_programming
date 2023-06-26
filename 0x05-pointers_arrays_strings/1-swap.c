#include "main.h"
/**
 * swap_int - swaps the values of two int
 * @a: input 1
 * @b: input 2
 *
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
