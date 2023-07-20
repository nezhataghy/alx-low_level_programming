#include "variadic_functions.h"
/**
  * print_numbers -  prints numbers, followed
  * by a new line
  * @separator : input string
  * @n: input number of arg
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int index = 0;

	va_list list_ptr;

	va_start(list_ptr, n);

	if (!separator)
		separator = "";

	while (index < n)
	{
		printf("%d", va_arg(list_ptr, unsigned int));
		if (index < n - 1)
			printf("%s", separator);
		index++;
	}
	va_end(list_ptr);
	printf("\n");
}
