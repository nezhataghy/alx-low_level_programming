#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Display numbers 0-9 using putchar
 *
 * Return: Always 0 for (success)
*/

int main(void)
{
int i = 48, j = 97;

while (i < 58)
{
	putchar(i);
	i++;
}
while (j < 103)
{
	putchar(j);
	j++;
}
putchar('\n');
return (0);
}
