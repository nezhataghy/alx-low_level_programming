#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: a pointer to the new hash table
 * otherwise NULL if it fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;
	unsigned long int i = 0;

	ptr = malloc(sizeof(hash_table_t));
	if (!ptr)
		return (NULL);

	ptr->size = size;
	ptr->array = malloc(sizeof(hash_node_t *) * size);

	if (!(ptr->array))
		return (NULL);
	while (i < size)
	{
		ptr->array[i] = NULL;
		i++;
	}

	return (ptr);
}
