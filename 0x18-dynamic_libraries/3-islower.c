#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: checks the input char
 *
 * Return: 1 if the char `c` is lowercase.
 * 0 is returned (Success)
*/

int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	return (0);
}
