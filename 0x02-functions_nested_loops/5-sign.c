#include "main.h"
/**
 * print_sign - checks for a letter
 * @n: checks the input
 *
 * Return: 1 if n is positive.
 * 0 if n is 0
 * -1 if n is negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
