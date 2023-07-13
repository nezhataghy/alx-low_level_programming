#include "main.h"
/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: input
 * @size: input
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	for (c = 0; n < (nmemb * size); n++)
		c[n] = 0;
	return (c);
}
