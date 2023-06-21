#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints Fibonacci numbers
 * Return: Always 0 (Success)
*/

int main(void)
{
unsigned long fib1 = 0, fib2 = 1, somme;
float tot;
while (1)
{
	somme = fib1 + fib2;
	if (somme > 4000000)
		break;
	if ((somme & 2) == 0)
		tot += somme;

	fib1 = fib2;
	fib2 = somme;

}
printf("%.0f\n", tot);
return (0);
}
