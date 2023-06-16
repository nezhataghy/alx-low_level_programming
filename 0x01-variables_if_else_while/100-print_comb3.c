#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Display numbers comb
 *
 * Return: Always 0 for (success)
*/

int main(void)
{
int i = 48, j;

while (i < 58)
{
	j = 48;
	while (j < 58)
	{
	if (i < j && i != j)
	{
		putchar(i);
		putchar(j);
		if (i + j != 113)
		{
			putchar(',');
			putchar(' ');
		}
	}
	j++;
	}
	i++;
}
putchar('\n');
return (0);
}
