#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int m, n, k, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		s = av[m];
		n = 0;

		while (s[n++])
			l++;
		l++;
	}

	str = (char *)malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);

	for (m = 0, n = 0; m < ac && n < l; m++)
	{
		s = av[m];
		k = 0;

		while (s[k])
		{
			str[n] = s[k];
			k++;
			n++;
		}
		str[n++] = '\n';
	}
	str[n] = '\0';

	return (str);
}
