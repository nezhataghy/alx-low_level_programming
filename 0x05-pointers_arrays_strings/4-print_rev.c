#include "main.h"
/**
 * print_rev - prints a string in rev
 * @s: input
 *
*/

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); i >= 0; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}
