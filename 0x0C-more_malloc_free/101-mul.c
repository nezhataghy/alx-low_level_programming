#include "main.h"
#define ERR_MSG "Error"
/**
 * is_digit - checks if a string contains a non-digit char
 * @s: input
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int n = 0;

	while (s[n])
	{
		if (s[n] < '0' || s[n] > '9')
			return (0);
		n++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: input
 * Return: i
*/

int _strlen(char *s)
{
int n;

n = 0;
for (; *s != '\0'; s++)
	n++;
return (n);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arg
 * @argv: array of arg
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, n, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	result = malloc(sizeof(int) * l);
	if (!result)
		return (1);
	for (n = 0; n <= l1 + l2; n++)
		result[n] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		digit1 = s1[l1] - '0';
		carry = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			digit2 = s2[l2] - '0';
			carry += result[l1 + l2 + 1] + (digit1 * digit2);
			result[l1 + l2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[l1 + l2 + 1] += carry;
	}
	for (n = 0; n < l - 1; n++)
	{
		if (result[n])
			a = 1;
		if (a)
			_putchar(result[n] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
