#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Display numbers combs
 *
 * Return: Always 0 for (success)
*/

int main(void)
{
int i = 0, j;

while (i < 100)
{
	j = i;
	while (j < 100)
	{
		if (i != j)
		{
			putchar(48 + (i / 10));
			putchar(48 + (i % 10));
			putchar(' ');
			putchar(48 + (j / 10));
			putchar(48 + (j % 10));
			if (i != 98 || j != 99)
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
