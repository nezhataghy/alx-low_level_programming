#include <stdio.h>

/**
 * racine - finds the square root
 *
 * @a: input
 *
 * Return: square root of a
 *
*/

double racine(double a)
{
	float rc, tempo;

	rc = a / 2;
	tempo = 0;

	while (rc != tempo)
	{
		tempo = rc;
		rc = (a / tempo + tempo) / 2;
	}
	return (rc);
}
/**
 * large_p_factor - finds and print the largest
 * p factor
 *
 * @b: input
*/

void large_p_factor(long int b)
{
	int p_num, largest;

	while (b % 2 == 0)
		b = b / 2;

	for (p_num = 3; p_num <= racine(b); p_num += 2)
	{
		while (b % p_num == 0)
		{
			b = b / p_num;
			largest = p_num;
		}
	}
	if (b > 2)
		largest = b;
	printf("%d\n", largest);
}
/**
 * main - Entry point
 *
 * Return: Always 0 for success.
 */
int main(void)
{
	large_p_factor(612852475143);
	return (0);
}
