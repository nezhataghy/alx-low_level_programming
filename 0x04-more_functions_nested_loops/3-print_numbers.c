#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers from 0 to 9
*/

void print_numbers(void)
{
int i = 0;

while (i < 10)
{
	printf("%d", i);
	i++;
}
putchar('\n');
}
