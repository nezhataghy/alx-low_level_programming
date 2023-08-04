#include "main.h"
/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @index: index as input
 * @n: pointer as input
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	k = 1 << index;
	*n = *n | k;

	return (1);
}
