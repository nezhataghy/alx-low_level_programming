#include <stdio.h>

/**
 * main - FizzBuzz
 *
 * Return: Always 0.
 */


int main(void)
{
int nez;

for (nez = 1; nez <= 100; nez++)
{
	if ((nez % 3 == 0) && (nez % 5 == 0))
		printf("FizzBuzz ");
	else if (nez % 3 == 0)
		printf("Fizz ");
	else if (nez % 5 == 0)
		printf("Buzz ");
	else
		printf("%d ", nez);
}
printf("\n");
return (0);
}
