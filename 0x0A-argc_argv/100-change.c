#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: arg count
 * @argv: arg
 * Return: 0
 */
int main(int argc, char **argv)
{
	int total, count;
	unsigned int k;
	char *pointer;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &pointer, 10);
	count = 0;

	if (!*p)
	{
		while (total > 1)
		{
			for (k = 0; k < sizeof(cents[k]); k++)
			{
				if (total >= cents[k])
				{
					count += total / cents[k];
					total = total % cents[k];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
