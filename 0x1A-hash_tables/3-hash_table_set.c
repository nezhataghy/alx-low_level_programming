#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 * Return:  0 if it fails otherwise 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ptr_new_n;
	char *copy;
	unsigned long int k_index, i;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);

	k_index = key_index((const unsigned char *)key, ht->size);
	for (i = k_index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy;
			return (1);
		}
	}

	ptr_new_n = malloc(sizeof(hash_node_t));
	if (ptr_new_n == NULL)
	{
		free(copy);
		return (0);
	}
	ptr_new_n->key = strdup(key);
	if (ptr_new_n->key == NULL)
	{
		free(ptr_new_n);
		return (0);
	}
	ptr_new_n->value = copy;
	ptr_new_n->next = ht->array[k_index];
	ht->array[k_index] = ptr_new_n;

	return (1);
}
