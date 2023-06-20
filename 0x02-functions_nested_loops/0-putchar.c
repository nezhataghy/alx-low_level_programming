#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: print _putchar
 *
 * Return: Always 0 for (success)
*/

int main(void)
{
	int n = 0;
	char la_fonction[] = "_putchar";

	while (!(n > strlen(la_fonction)))
	{
		_putchar(la_fonction[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
