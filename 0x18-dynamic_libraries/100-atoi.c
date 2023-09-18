#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: input
 * Return: integer
*/

int _atoi(char *s)
{

unsigned int nombre = 0;
int signe = 1;

for (; *s != '\0'; s++)
{
	if (*s == 45)
		signe *= -1;
	else if (*s >= 48 && *s <= 57)
		nombre = (nombre * 10) + (*s - 48);
	else if (nombre > 0)
		break;
}
return (nombre * signe);
}
