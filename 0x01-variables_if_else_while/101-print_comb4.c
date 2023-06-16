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
int i = 48, j, k;

while (i < 58)
{
	j = 48;
	while (j < 58)
	{
		k = 48;
		while (k < 58)
		{
			if ((i < j && j < k) && i != j && j != k)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if ((i + j + k) != 168)
				{
					putchar(',');
					putchar(' ');
				}
			}
			k++;
		}
		j++;
	}
	i++;
}
putchar('\n');
return (0);
}
