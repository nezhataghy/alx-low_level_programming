#include "main.h"
/**
 * puts2 - prints every other char
 * of a string
 * @str: input
 *
*/

void puts2(char *str)
{

for (; *str != '\0'; str += 2)
{
	_putchar(*str + 0);
}
_putchar('\n');
}

