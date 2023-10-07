#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: pointer to the hash table
 * @key: key of the hash
 * Return: value of the hash.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int k_index;

	if (!ht)
		return (NULL);

	if (!key || *key == '\0')
		return (NULL);

	k_index = key_index((unsigned char *)key, ht->size);

	ptr = ht->array[k_index];

	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}

	return (NULL);
}
