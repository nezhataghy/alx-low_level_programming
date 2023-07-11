#include "main.h"
void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * strtow - splits a string into words.
 * @str: input
 * Return: pointer
 */
char **strtow(char *str)
{
	int k, flag, l;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	k = flag = l = 0;
	while (str[k])
	{
		if (flag == 0 && str[k] != ' ')
			flag = 1;
		if (k > 0 && str[k] == ' ' && str[k - 1] != ' ')
		{
			flag = 0;
			l++;
		}
		k++;
	}

	l += flag == 1 ? 1 : 0;
	if (l == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (l + 1));
	if (words == NULL)
		return (NULL);

	util(words, str);
	words[l] = NULL;
	return (words);
}

/**
 * util - a util function for fetching words into an array
 * @words: input
 * @str: input
 */
void util(char **words, char *str)
{
	int m, n, start, flag;

	m = n = flag = 0;
	while (str[m])
	{
		if (flag == 0 && str[m] != ' ')
		{
			start = m;
			flag = 1;
		}

		if (m > 0 && str[m] == ' ' && str[m - 1] != ' ')
		{
			create_word(words, str, start, m, n);
			n++;
			flag = 0;
		}

		m++;
	}

	if (flag == 1)
		create_word(words, str, start, m, n);
}

/**
 * create_word - creates a word and insert it into the array
 * @words: the array of strings
 * @str: the string
 * @start: the starting index of the word
 * @end: the stopping index of the word
 * @index: the index of the array to insert the word
 */
void create_word(char **words, char *str, int start, int end, int index)
{
	int m, n;

	m = end - start;
	words[index] = (char *)malloc(sizeof(char) * (m + 1));

	for (n = 0; start < end; start++, n++)
		words[index][n] = str[start];
	words[index][n] = '\0';
}
