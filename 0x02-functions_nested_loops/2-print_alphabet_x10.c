#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
*/

void print_alphabet_x10(void)
{
int n;
int i = 97;

for (n = 0; n < 10; n++)
{
	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');
}
}
