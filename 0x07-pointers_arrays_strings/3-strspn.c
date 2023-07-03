#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: input string to search
 *
 * @accept: string which consist only of bytes from
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int n = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					n++;
			}
		}
		else
			return (n);
	}
		return (n);

}
