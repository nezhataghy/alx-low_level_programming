#include "function_pointers.h"
/**
  * int_index - searches for an integer
  * @array: input array
  * @size: size of array
  * @cmp: pointer to cmp func
  * Return: index or -1 if not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int index;

if ((array != NULL && cmp != NULL) && (size > 0))
{
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
}
return (-1);
}
