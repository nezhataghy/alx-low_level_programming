#include "main.h"
/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: input.
 * @index: index of the bit.
 * Return: value of the bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;

	if (n == 0 && index < 64)
		return (0);

	for (k = 0; k <= (sizeof(unsigned long int) * 8 - 1); n >>= 1, k++)
	{
		if (index == k)
		{
			return (n & 1);
		}
	}
	return (-1);
}
