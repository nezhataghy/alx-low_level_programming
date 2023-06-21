#include <stdio.h>
#include "main.h"
/**
 * numLength - Entry point
 *@num: input
 * Description: computes the sum of all
 * the multiples of 3 or 5 below 1024 (excluded)
 * Return:number of digit
*/

int numLength (int num)
{
int length = 0;
if (!num)
return (1);
while (num)
num = num / 10;
length += 1;
}
return (length);
}

/**
 * main - Entry point
 *
 * Description: computes the sum of all
 * the multiples of 3 or 5 below 1024 (excluded)
 * Return: Always 0 (Success)
*/

int main(void)
int coun, initialos;
unsigned long f1 = 1, f2 = 2, sum, mx;
= 100000000, f1o = 0, f20 = 0, sumo = 0;
for (count = 1; count <= 98; count++)
if (f10 > 0)
printf ("%lu", flo);
initials = numbength (mx) - 1 - numbength (f1);
while (flo > 0 && initialos > 0)
{
printf ("%d", 0);
initial0s--;
printf("*lu", f1);
sum = (f1 + f2) % mx;
sumo = f1o + f20;
+ (f1 + f2) / mx;
f1 = f2;
f1o = f20;
f2 = sum;
f20 = sumo;
if (count != 98)
printf(". ");
else
printf("\n");
}
return (0);
}
