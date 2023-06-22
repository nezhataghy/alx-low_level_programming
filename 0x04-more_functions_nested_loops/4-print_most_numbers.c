#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 * except 2 & 4
*/

void print_most_numbers(void)
{
int i = 48;

while (i < 58)
{
	if (i == 50 || i == 52)
		i++;
	_putchar(i);
	i++;
}
_putchar('\n');
}
