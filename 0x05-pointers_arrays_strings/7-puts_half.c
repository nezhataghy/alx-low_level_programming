#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input
 *
*/

void puts_half(char *str)
{
int l = 0, i = 0;

while (str[l])
{
	l++;
}
l--;

i = l / 2;
while (i < l)
{
	_putchar(str[i + 1]);
	i++;
}
_putchar('\n');
}
