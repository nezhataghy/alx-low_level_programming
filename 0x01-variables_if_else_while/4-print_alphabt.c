#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Display all alphabet except eq
 *
 * Return: Always 0 for (success)
*/

int main(void)
{
int i = 97;

while (i < 123)
{
	if (i == 101 || i == 113)
		i++;
	putchar(i);
	i++;
}
putchar('\n');
return (0);
}
