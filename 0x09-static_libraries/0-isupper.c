#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: checks the input
 *
 * Return: 1 if c is uppercase
 * 0 is returned (Success)
*/

int _isupper(int c)
{
	if (c < 91 && c > 64)
		return (1);
	return (0);
}
