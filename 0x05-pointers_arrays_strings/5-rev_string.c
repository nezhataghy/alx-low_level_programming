#include "main.h"
/**
 * rev_string - prints a string in rev
 * @s: input
 *
*/

void rev_string(char *s)
{
int l = 0, i = 0;
char c;

while (s[l])
{
	l++;
}
l--;

while (i < l / 2)
{
	c = s[i];
	s[i] = s[l - i];
	s[l - i] = c;
	i++;
}
}

