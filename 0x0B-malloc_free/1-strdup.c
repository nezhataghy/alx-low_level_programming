#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: input string
 * Return: returns a pointer to the duplicated string or
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *chaine;
	int k, l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;

	chaine = (char *)malloc((sizeof(char) * l) + 1);
	if (chaine == NULL)
		return (NULL);

	for (k = 0; k < l; k++)
		chaine[k] = str[k];
	chaine[l] = '\0';

	return (chaine);
}
