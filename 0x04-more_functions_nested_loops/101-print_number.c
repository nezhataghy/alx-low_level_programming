#include "main.h"
/**
 * print_number - prints the input number
 * @num: input
*/
void print_number(int num)
{
unsigned int t = num;

if (num < 0)
{
	_putchar(45);
	t = -t;
}
if ((t / 10) > 0)
	print_number(t / 10);

_putchar(48 + (t % 10));
}
