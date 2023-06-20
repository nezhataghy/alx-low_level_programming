#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
*/

void jack_bauer(void)
{
int n, m;

for (n = 0; n < 24; n++)
{
for (m = 0; m < 60; m++)
{
	_putchar(48 + (n / 10));
	_putchar(48 + (n % 10));
	_putchar(58);
	_putchar(48 + (m / 10));
	_putchar(48 + (m % 10));
	_putchar('\n');
}
}
}
