#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals
 *  of a square matrix of integers
 * @a: pointer
 * @size: width of matrix column
 */
void print_diagsums(int *a, int size)
{
	int m, n, p, line = 0, row = 0;

	for (m = 0; m < size; m++)
	{
		p = (m * size) + m;
		line += *(a + p);
	}
	for (n = 0; n < size; n++)
	{
		p = (n * size) + (size - 1 - n);
		row += *(a + p);
	}
	printf("%i, %i\n", line, row);
}
