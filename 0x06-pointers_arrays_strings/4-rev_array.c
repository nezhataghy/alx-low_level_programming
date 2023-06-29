#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: inout
 * @n: input
 *
 */
void reverse_array(int *a, int n)
{
	int k;
	int tempo;

	for (k = 0; k < n--; k++)
	{
		tempo = a[k];
		a[k] = a[n];
		a[n] = tempo;
	}
}
