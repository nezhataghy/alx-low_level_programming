#include "hash_tables.h"

/**
 * hash_table_delete - Frees an entire hash table
 * @ht: Pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *ptr, *ptr_t;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			ptr_t = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = ptr_t;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
