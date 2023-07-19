#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the opcodes
 * @argc: args count
 * @argv: array of pointerrs
 * Return: always O for success
 */
int main(int argc, char **argv)
{
int n_bytes, num;
char *p = (char *)&main;

if (argc != 2)
{
	printf("Error\n");
	exit(1);
}
n_bytes = atoi(argv[1]);
if (n_bytes < 0)
{
	printf("Error\n");
	exit(2);
}
for (num = 0; num < n_bytes; num++)
{
	printf("%.2hhx", p[num]);
	if (i < n_bytes - 1)
		printf(" ");
}
printf("\n");
return (0);
}
