#include "main.h"
/**
 * *_strncat - appends the src string
 * to the dest
 * @dest: input
 * @src: input
 * @n: input
 * Return: pointer
*/

char *_strncat(char *dest, char *src, int n);
{
int l, i;

l = 0;

while (dest[l])
	l++;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[l + i] = src[i];

dest[l + i] = '\0';

return (dest);
}
