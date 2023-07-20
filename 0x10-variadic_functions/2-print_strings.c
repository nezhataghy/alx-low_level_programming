#include "variadic_functions.h"
/**
  * print_strings -  prints strings, followed
  * by a new line
  * @separator : input string
  * @n: input number of arg
  */
void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int index = 0;

	va_list list_ptr;

	va_start(list_ptr, n);

	if (!separator)
		separator = "";

	while (index < n)
	{
		if (!va_arg(list_ptr, unsigned int))
			va_arg(list_ptr, unsigned int) = "(nil)";
		printf("%s", va_arg(list_ptr, unsigned int));
		if (index < n - 1)
			printf("%s", separator);
		index++;
	}
	va_end(list_ptr);
	printf("\n");
}
