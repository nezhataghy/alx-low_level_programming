#include "main.h"
/**
 * puts2 - prints every other char
 * of a string
 * @str: input
 *
*/

void puts2(char *str)
{
int n = 0;

for (; str[n] != '\0'; n++)
{
	if (n % 2 == 0)
		_putchar(str[n]);
}
_putchar('\n');
}

