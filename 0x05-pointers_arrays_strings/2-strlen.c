#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: input
 * Return: i
*/

int _strlen(char *s)
{
int i;

i = 0;
for (; *s != '\0'; s++)
	i++;
return (i);
}
