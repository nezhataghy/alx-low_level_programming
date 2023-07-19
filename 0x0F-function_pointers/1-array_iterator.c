#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: input array
 * @size: size of the array
 * @action: pointer to the func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t index;

if (array != NULL && action != NULL)
{
	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
}
