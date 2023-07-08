#include <stdio.h>
#include <stdlib.h>

/**
 * main - addition.
 * @argc: arg count
 * @argv: arg
 * Return: 0
 */
int main(int argc, char **argv)
{
	int k, n, s = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (k = 1; argv[k]; k++)
	{
		n = strtol(argv[k], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			s += n;
		}
	}
	printf("%d\n", s);

	return (0);
}
