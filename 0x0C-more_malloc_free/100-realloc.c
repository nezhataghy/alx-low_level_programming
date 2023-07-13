#include "main.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated mem as input
 * @new_size: new size as input
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *ancien_ptr;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	ancien_ptr = ptr;

	if (new_size < old_size)
	{
		for (index = 0; index < new_size; index++)
			ptr1[index] = ancien_ptr[index];
	}

	if (new_size > old_size)
	{
		for (index = 0; index < old_size; index++)
			ptr1[index] = ancien_ptr[index];
	}

	free(ptr);
	return (ptr1);
}
