#include "variadic_functions.h"
/**
  * sum_them_all - eturns the sum of
  * all its parameters
  * @n: input number of arg
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	int sum = 0;

	unsigned int index = 0;

	val_list list_ptr;

	va_start(list_ptr, n);
	while (index < n)
	{
		sum += va_arg(list_ptr, unsigned int);
		index++;
	}
	va_end(list_ptr);
	return (sum);
}
