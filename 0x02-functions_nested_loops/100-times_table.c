#include "main.h"
/**
 * print_times_table - prints the n times table
 *
 * @n: the input
*/

void print_times_table(int n)
{
int num1, mult, num3;
if (n <= 15 && n >= 0)
	for (num1 = 0; num1 <= n; ++num1)
	{
		_putchar (48);
		for (mult = 1; mult <= n; ++mult)
		{
			_putchar(',');
			_putchar(' ');
			num3 = num1 * mult;

			if (num3 <= 9)
				_putchar(' ');
			if (num3 <= 99)
				_putchar(' ');
			if (num3 >= 100)
			{
				_putchar((num3 / 100) + 48);
				_putchar ((num3 / 10) % 10 + 48);
			}
			else if (num3 <= 99 && num3 >= 10)
				_putchar ((num3 / 10) + 48);
			_putchar ((num3 % 10) + 48);
}
_putchar ('\n');
}
}
