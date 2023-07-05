#include "main.h"

/**
 * test_sqr - checks for the square root
 * @a:input
 * @b:input
 *
 * Return: int
 */
int test_sqr(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (test_sqr(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (test_sqr(1, n));
}
