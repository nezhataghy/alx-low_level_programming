#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: input string
 *
 * @accept: input string
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int comp;

		for (comp = 0; s[comp] >= '\0'; comp++)
		{
			for (comp = 0; accept[comp]; comp++)
			{
				if (*s == accept[comp])
					return (s);
			}
		}
	return (NULL);
}
