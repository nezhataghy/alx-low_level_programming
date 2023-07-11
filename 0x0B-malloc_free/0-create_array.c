#include "main.h"
#include <stdlib.h>
/**
 * create_array - function creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: input value
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *chaine;
	unsigned int num;

	if (size == 0)
		return (NULL);

	chaine = (char *)malloc(sizeof(char) * size);
	if (chaine == NULL)
		return (NULL);

	for (num = 0; num < size; num++)
		chaine[num] = c;

	return (chaine);
}
