#include "variadic_functions.h"
/**
 * print_all - Prints all of the arguments when specified
 * @format: op specifier
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
		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(list_ptr, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(list_ptr, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(list_ptr, double));
				flag = 0;
				break;
			case 's':
				chaine = va_arg(list_ptr, char*);
				if (chaine == NULL)
					chaine = "(nil)";
				printf("%s", chaine);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[index + 1] != '\0' && flag == 0)
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(list_ptr);
}
