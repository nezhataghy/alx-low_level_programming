#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: input1
 * @s2: input2
 * Return: a pointer. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int m, n, l1, l2, l;
	char *result;

	l1 = l2 = 0;

	if (s1 != NULL)
	{
		m = 0;
		while (s1[m++] != '\0')
			l1++;
	}

	if (s2 != NULL)
	{
		m = 0;
		while (s2[m++] != '\0')
			l2++;
	}

	l = l1 + l2;
	result = (char *)malloc(sizeof(char) * (l + 1));
	if (result == NULL)
		return (NULL);

	for (m = 0; m < l1; m++)
		result[m] = s1[m];
	for (n = 0; n < l2; n++, m++)
		result[m] = s2[n];
	result[l] = '\0';

	return (result);
}
