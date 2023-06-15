#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C code that use printf function to print a specific string
 *
 * Return: Always 0 for (success)
*/

int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of a int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
