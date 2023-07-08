#include "main.h"
/**
 * *_strcat - appends the src string
 * to the dest
 * @dest: input
 * @src: input
 * Return: pointer
*/

char *_strcat(char *dest, char *src)
{
int l, l2;

l = 0;

while (dest[l])
	l++;
for (l2 = 0; src[l2]; l2++)
	dest[l++] = src[l2];

return (dest);
}
