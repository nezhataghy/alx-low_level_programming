#include "variadic_functions.h"
/**
  * sum_them_all - eturns the sum of
  * all its parameters
  * @n: input number of arg
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	unsigned int index = 0;

	va_list list_ptr;

	va_start(list_ptr, n);

	if (!n)
		return (0);
	while (index < n)
	{
		sum += va_arg(list_ptr, unsigned int);
		index++;
	}
	va_end(list_ptr);
	return (sum);
}
