#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endianness, or 1 if little endianness
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *s = (char *)&k;

	return (*s);
}
