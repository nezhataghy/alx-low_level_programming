#include <stdio.h>
#include "main.h"

/**
 * numLength - returns the length of string
 *
 * @num: operand number
 *
 * Return:number of digit
*/

int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);

	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int c, ini0s;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (c = 1; c <= 98; c++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		ini0s = numLength(mx) - 1 - numLength(f1);

		while (f1o > 0 && ini0s > 0)
		{
			printf("%d", 0);
			ini0s--;
		}
		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (c != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
