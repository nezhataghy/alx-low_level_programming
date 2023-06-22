#include "main.h"

/**
 * more_numbers - prints the numbers from 0 - 14
 * 10 times
 * Return: 0 for success
*/

void more_numbers(void)
{
int num;
int i = 0, tempo;
do {
	for (num = 0; num < 15; num++)
	{
		tempo = num;
		if (num > 9)
	{
		_putchar(49);
		tempo = num % 10;
	}
	_putchar(tempo + 48);
	}
_putchar('\n');
i++;
} while (i < 10);
}

