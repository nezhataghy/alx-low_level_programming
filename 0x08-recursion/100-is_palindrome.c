#include "main.h"
/**
 * _strlen_recursion - length of s
 * @s: input
 * Return: length
 */
int _strlen_recursion(char *s)
{
int length = 0;

if (*s)
{
	length++;
	length = length + _strlen_recursion(s + 1);
}
return (length);
}
/**
 * pal_test - check if s is palindrome.
 * @s: string base address.
 * @i: left index.
 * @j: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int pal_test(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_test(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_test(s, 0, _strlen_recursion(s) - 1));
}
