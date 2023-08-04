#include "main.h"
/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: input1.
 * @m: input2.
 * Return: num of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_bits = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			n_bits++;
		n >>= 1;
		m >>= 1;
	}
	return (n_bits);
}
