#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int nb;
	char c;

	srand(time(NULL));
	while (nb <= 2645)
	{
		c = rand() % 128;
		nb += c;
		putchar(c);
	}
	putchar(2772 - nb);
	return (0);
}
