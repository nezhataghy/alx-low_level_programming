#include "main.h"
/**
 * _puts - prints a string
 * @str: input
 *
*/

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
	_putchar(*str + 0);
}
_putchar('\n');
}
