#include "main.h"
/**
 * print_rev - prints a string in rev
 * @s: input
 *
*/

void print_rev(char *s)
{
int l = 0;

for (; *s != '\0'; s++)
{
	l++;
}
l--;
while (l >= 0)
{
	_putchar(s[l]);
	l--;
}
_putchar('\n');
}
