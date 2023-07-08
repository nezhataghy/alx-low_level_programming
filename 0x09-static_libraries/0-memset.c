#include "main.h"


/**
 * _memset - fill a block of memory with value of b
 * starting from @n
 * @n: number of bytes
 * @b: value
 * @s: starting adress
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int comp = 0;

	while (comp < n)
	{
		s[comp] = b;
		comp++;
	}
	return (s);
}
