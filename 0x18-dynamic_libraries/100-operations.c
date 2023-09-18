#include <stdio.h>
/**
 * add - sum
 * @a: input1
 * @b: input2
 * Return: a + b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - soustraction
 * @a: input1
 * @b: input2
 * Return: a - b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplication
 * @a: input1
 * @b: input2
 * Return: a * b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - division
 * @a: input1
 * @b: input2
 * Return: a / b
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
	}

	return (a / b);
}

/**
 * mod - modulos
 * @a: input1
 * @b: input2
 * Return: a % b
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
	}

	return (a % b);
}
