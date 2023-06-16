#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Display all alphabet
 *
 * Return: Always 0 for (success)
*/

int main(void)
{
int i = 97, j = 65;

while (i < 123)
{
	putchar(i);
	i++;
}
while (j < 91)
{
	putchar(j);
	j++;
}
putchar('\n');
return (0);
}
