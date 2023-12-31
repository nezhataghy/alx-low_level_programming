#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @c: occurrence of the character
 *
 * @s: in the string
 *
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int comp;

	for (comp = 0; s[comp] >= '\0'; comp++)
	{
		if (s[comp] == c)
			return (&s[comp]);
	}
	if (comp == '\0')
		return (s);

	return (NULL);
}
