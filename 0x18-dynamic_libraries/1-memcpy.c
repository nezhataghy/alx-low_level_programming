#include "main.h"

/**
 * _memcpy - copies a specified number of bytes from
 * one memory location to another
 *
 * @n: number of bytes
 *
 * @src: from memory area
 *
 * @dest: to memory area
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int comp = 0;

	while (comp < n)
	{
		dest[comp] = src[comp];
		comp++;
	}

	return (dest);
}
