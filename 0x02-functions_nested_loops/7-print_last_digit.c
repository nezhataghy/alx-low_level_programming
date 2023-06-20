#include "main.h"
/**
 * print_last_digit - gives the last digit of num
 * @num: input
 *
 * Return: l_d.
*/
int print_last_digit(int num)
{
int l_d;

if (num < 0)
	l_d = ((num * (-1)) % 10);
else
	l_d = (num % 10);
_putchar(48 + l_d);
return (l_d);
}
