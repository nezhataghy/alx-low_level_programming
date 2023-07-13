#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: input1
 * @s2: input2
 * @n: unsigned int
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, L;
	char *s;

	if (s1 == NULL)
	{
		l1 = 0;
	}
	else
	{
		for (l1 = 0; s1[l1]; ++l1)
		;
	}
	if (s2 == NULL)
	{
		l2 = 0;
	}
	else
	{
		for (l2 = 0; s2[l2]; ++l2)
		;
	}
	if (l2 > n)
		l2 = n;
	s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == NULL)
		return (NULL);
	for (L = 0; L < l1; L++)
		s[L] = s1[L];
	for (L = 0; L < l2; L++)
		s[L + l1] = s2[L];
	s[l1 + l2] = '\0';
	return (s);
}
