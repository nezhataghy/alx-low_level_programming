#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: checks the input char
 *
 * Return: 1 if the char `c` is uppercase.
 * 0 is returned (Success)
*/

int _isupper(int c)
{
	if (c < 123 && c > 96)
		return (0);
	return (1);
}
