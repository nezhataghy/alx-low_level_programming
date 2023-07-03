#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 *
 * @c: which consist only of bytes from
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *c)
{
	int comp = 0;

	for (; s[comp] >= '\0'; comp++)
	{
		if (s[comp] == c)
			return (s);
	}
return (0);
}
