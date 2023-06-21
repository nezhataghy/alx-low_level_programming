#include "main.h"
/**
 * times_table - prints the 9 times table
*/

void times_table(void)
{
int n, m, k;


for (n = 0; n < 10; n++)
{
	_putchar('0');
	for (m = 1; m < 10; m++)
	{
		k = n * m;
		_putchar(',');
		_putchar(' ');
		if (k < 10)
			_putchar(' ');
		else
			_putchar(48 + (k / 10));
		_putchar(48 + (k % 10));
	}
	_putchar('\n');
}
}
