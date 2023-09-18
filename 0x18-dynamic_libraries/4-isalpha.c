#include "main.h"
/**
 * _isalpha - checks for a letter
 * @c: checks the input char
 *
 * Return: 1 if `c` is an alphebitic char.
 * 0 is returned (Success)
*/

int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
		return (1);
	return (0);
}
