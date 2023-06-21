#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 * Return: Always 0 (Success)
*/

int main(void)
{
int i;
unsigned long fib1 = 0, fib2 = 1, somme;
for (i = 0; i < 50; i++)
{
	somme = fib1 + fib2;
	printf("%lu", somme);

	fib1 = fib2;
	fib2 = somme;

	if (i == 49)
		printf("\n");
	else
		printf(", ");
}
return (0);
}
