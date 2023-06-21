#include "main.h"
/**
 * main - Entry point
 *
 * Description: computes the sum of all
 * the multiples of 3 or 5 below 1024 (excluded)
 * Return: Always 0 (Success)
*/

int main(void)
{
int nombre, somme;
	for (nombre = 0; nombre < 1024; nombre++)
	{
		if ((nombre % 3 == 0) || (nombre % 5 == 0))
			somme += nombre;
	}
	printf("%d\n", somme);

return (0);
}
