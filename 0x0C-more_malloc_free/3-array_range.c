#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int index, taille;

	if (min > max)
		return (NULL);

	taille = max - min + 1;

	ptr = malloc(sizeof(int) * taille);

	if (ptr == NULL)
		return (NULL);

	for (index = 0; min <= max; index++)
		ptr[index] = min++;

	return (ptr);
}
