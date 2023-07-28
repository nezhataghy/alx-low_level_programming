#include<stdio.h>

void Beforemain(void) __attribute__ ((constructor));

/**
 * Beforemain - implementation of myStartupFun
 */
void Beforemain(void)
{
	puts("You're beat! and yet, you must allow,\n");
	puts("I bore my house upon my back!\n");
}
