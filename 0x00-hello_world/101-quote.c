#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: C code that prints without using printf function
 * Return: Always 0 for (success)
*/

int main(void)
{
char phrs[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, phrs, 59);
	return (1);
}
