#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @n: pointer as input
 * @index: index of the bit.
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	a = 1 << index;

	if (*n & a)
		*n ^= a;

	return (1);
}
