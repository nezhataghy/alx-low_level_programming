#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Display numbers 0-9
 *
 * Return: Always 0 for (success)
*/

int main(void)
{
int i = 0;

while (i < 10)
{
	printf("%d", i);
	i++;
}
putchar('\n');
return (0);
}
