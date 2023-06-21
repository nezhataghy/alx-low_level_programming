#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - diplay numbers in order from n to 98
 * @num: the input
*/

void print_to_98(int num)
{
int m;

if (num < 98)
	for (m = num; m < 98; m++)
		printf("%d, ", m);
else
	for (m = num; m > 98; m--)
		printf("%d, ", m);
printf("98\n");
}
