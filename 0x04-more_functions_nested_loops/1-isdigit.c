#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: checks the input
 *
 * Return: 1 if the char `c` is a digit.
 * 0 is returned (Success)
*/

int _isdigit(int c)
{
	if (c < 58 && c > 47)
		return (1);
	return (0);
}
