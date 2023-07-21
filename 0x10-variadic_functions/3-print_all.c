#include "variadic_functions.h"

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int index;
	int flag;
	char *chaine;
	va_list list_ptr;

	va_start(list_ptr, format);
	index = 0;
	while (format != NULL && format[index] != '\0')
	{
		if (format[index] == 'c')
		{
			printf("%c", va_arg(list_ptr, int));
			flag = 0;
		}
		else if (format[index] == 'i')
		{
			printf("%i", va_arg(list_ptr, int));
			flag = 0;
		}
		else if (format[index] == 'f')
		{
			printf("%f", va_arg(list_ptr, double));
			flag = 0;
		}
		else if (format[index] == 's')
		{
			chaine = va_arg(list_ptr, char*);
			if (chaine == NULL)
				chaine = "(nil)";
			printf("%s", chaine);
			flag = 0;
		}
		else
			flag = 1;
		if (format[index + 1] != '\0' && flag == 0)
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(list_ptr);
}
